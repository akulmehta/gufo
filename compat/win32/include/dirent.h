/* Win32 shadow of <dirent.h>; see gufo_posix.h. */
#ifndef GUFO_COMPAT_WIN32_DIRENT_H_
#define GUFO_COMPAT_WIN32_DIRENT_H_

#include <sys/types.h>
#include "gufo_posix_types.h"

#ifdef __cplusplus
extern "C" {
#endif

struct dirent {
  ino_t d_ino;
  char d_name[260];
};

typedef struct DIR DIR;

DIR* opendir(const char* name);
DIR* fdopendir(int fd);
struct dirent* readdir(DIR* dirp);
int closedir(DIR* dirp);
void rewinddir(DIR* dirp);

#ifdef __cplusplus
}
#endif

#endif  // GUFO_COMPAT_WIN32_DIRENT_H_
