# libohos

## 移动至:https://github.com/arror/Xray-for-HarmonyOS/tree/main/app/src/main/c

提供日志输出接口、获取默认网卡的接口提供给`libxray`使用
```c
// 通过 HiLog 输出日志
int OHOS_LOG(size_t level, const char *message);

// 获取默认网卡名称
int OHOS_GetDefaultNetInterfaceName(char* name, size_t size);
```
