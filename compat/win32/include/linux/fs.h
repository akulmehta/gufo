/* Win32 shadow of <linux/fs.h>. Stub for compatibility. */
#ifndef GUFO_COMPAT_WIN32_LINUX_FS_H_
#define GUFO_COMPAT_WIN32_LINUX_FS_H_

#ifndef RENAME_NOREPLACE
#define RENAME_NOREPLACE (1 << 0)
#endif

#ifndef SYS_renameat2
#define SYS_renameat2 316
#endif

#endif  // GUFO_COMPAT_WIN32_LINUX_FS_H_
