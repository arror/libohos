#!/bin/sh

# shellcheck disable=SC2164
SCRIPT_PATH=$(cd "$(dirname "$0")"; pwd)

ROOT_PATH=$(dirname "$SCRIPT_PATH")

rm -rf "${ROOT_PATH}"/dist

build() {
    # shellcheck disable=SC2039
    local arch=$1;

    rm -rf build
    mkdir build
    
    # shellcheck disable=SC2039
    pushd build
    cmake -DOHOS_STL=c++_shared -DOHOS_ARCH="${arch}"  ..
    cmake --build . --config Release

    mkdir -p "${ROOT_PATH}"/dist/"${arch}"
    cp libohos.so "${ROOT_PATH}"/dist/"${arch}"
    # shellcheck disable=SC2039
    popd
}

build "arm64-v8a"
build "armeabi-v7a"
build "x86_64"