#ifndef HEADERS_H
#define HEADERS_H

#pragma warning( disable : 4786 )
#pragma warning( disable : 4291 )

#include <windows.h>
#include <stdlib.h>
#include <winsock.h>

#ifdef _DEBUG
	#define _CRTDBG_MAP_ALLOC
	#include <crtdbg.h>
	#ifndef DBG_NEW
	#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
	#define new DBG_NEW
	#endif
#endif

#include <stdio.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <Math.h>
#include <memory.h>
#include <process.h>
#include <ShlObj.h>

#include <vector>
#include <list>
#include <set>
#include <map>
#include <string>
#include <algorithm>

#endif