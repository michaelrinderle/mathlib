#ifndef MATHLIBC_H
#define MATHLIBC_H

#include "errno.h"
#include "fcntl.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "sys/types.h"
#include "stdint.h"

#define API_LOGGING 0
#define ZL_DEBUG   // for debugging purposes

#ifdef _WIN32

#define BUILD_API_DLL
#ifdef BUILD_API_DLL
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif

#define MATHCALL __cdecl

#define WIN32_LEAN_AND_MEAN
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _WINSOCK_DEPCRECATED
#define _WINSOCKAPI_
#define BUFFER_SIZE MAX_PATH
#define BUF_LEN (128 * 1024)

#include "io.h" //= unistd.h
#include "initguid.h"
#include "KnownFolders.h"
#include "Lmcons.h"
#include "ShlObj.h"
#include "Shlwapi.h"
#include "stdbool.h"
#include "VersionHelpers.h"
#include "wchar.h"

//= required header order
#include "psapi.h"
#include "winsock2.h"
#include "ws2tcpip.h"
#include "windows.h"
#include "tchar.h"
#include "strsafe.h"

#pragma comment( lib, "psapi.lib" )
#pragma comment(lib, "Shlwapi.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib,"ws2_32.lib")

#elif __linux__

#define API
#define ZLCALL

#include "arpa/inet.h"
#include "netinet/in.h"
#include "netinet/tcp.h"
#include "netdb.h"
#include "sys/socket.h"
#include "unistd.h"

#define bool
typedef int bool;
#define TRUE 1
#define FALSE 0

typedef __SIZE_TYPE__ size_t;

#endif

typedef void* any, any_t;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef uint32_t uint32;
typedef unsigned short ushort;
typedef unsigned char  uchar;

// calculate size of buffer element
#define DATA_SIZE(y) sizeof(y[0])
// calculate number of element in buffer
#define Number_Node(x)  sizeof(x)/DATA_SIZE(x)

// macros
#define CLEAR_BUFFER(X) memset(&X, 0, sizeof(X));
#define PRINT_VA

#define ABS(x) ((x)<0 ? -(x) : (x))

#endif MATHLIBC_H