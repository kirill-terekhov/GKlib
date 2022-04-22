/*
\file  win32/adapt.c
\brief Implementation of Win32 adaptation of libc functions
*/
#include "gk_adapt.h"
#if defined(_WIN32)
pid_t getpid(void)
{
  return GetCurrentProcessId();
}
#endif

typedef int make_iso_compilers_happy;
