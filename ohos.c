#include <string.h>
#include <network/netmanager/net_connection.h>
#include <hilog/log.h>

int OHOS_LOG(int level, const char *message) {
    return OH_LOG_Print(0, level, 0, "GOLANG", "%{public}s", message);
}

int OHOS_GetDefaultNetInterfaceName(char* name, int size) {
    NetConn_NetHandle handle;
    int32_t ret = OH_NetConn_GetDefaultNet(&handle);
    if (ret != 0) {
        return ret;
    }
    NetConn_ConnectionProperties prop;
    ret = OH_NetConn_GetConnectionProperties(&handle, &prop);
    if (ret != 0) {
        return ret;
    }
    strncpy(name, prop.ifaceName, size);
    return ret;
}