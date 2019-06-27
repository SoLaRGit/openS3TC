// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#ifdef OPENS3TC_EXPORTS
#define OPENS3TC_API __declspec(dllexport)
#else
#define OPENS3TC_API __declspec(dllimport)
#endif

// TODO: reference additional headers your program requires here
#include "CSTypes.h"

#include "openS3TC.h"
#include "openS3TC_DXT1.h"
#include "openS3TC_DXT3.h"
#include "openS3TC_DXT5.h"
