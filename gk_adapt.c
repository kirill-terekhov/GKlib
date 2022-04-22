/*
\file  win32/adapt.c
\brief Implementation of Win32 adaptation of libc functions
*/
#if defined(_WIN32)
#include "adapt.h"

pid_t getpid(void)
{
  return GetCurrentProcessId();
}
#endif
