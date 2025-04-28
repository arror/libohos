#ifndef _OHOS_H
#define _OHOS_H

#include <stdlib.h>
#ifdef __cplusplus
extern "C" {
#endif

int OHOS_LOG(size_t level, const char *message);
int OHOS_GetDefaultNetInterfaceName(char* name, size_t size);

#ifdef __cplusplus
}
#endif
#endif /* _OHOS_H */