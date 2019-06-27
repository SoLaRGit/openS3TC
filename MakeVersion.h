/////////////////////////////////////////////////////////////////////////////// 
// 
// Copyright (c) 2018 Nikola Bozovic. All rights reserved. 
// 
// This code is licensed under the MIT License (MIT). 
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE. 
// 
///////////////////////////////////////////////////////////////////////////////
//
// version.h: Make Version Tool version file.
//
// version  : v0.76.18.1111
// author   : Nikola Bozovic <nigerija@gmail.com>
// desc     : Make Version Tool for file versioning automation version file
// notices  : guess this file is example for it self ;)
///////////////////////////////////////////////////////////////////////////////

// NOTICE: This project build reverts this file so if you have made changes
//         and want to test build process manually execute MakeVersion.cmd.
//         And when you are ready to build project first commit MakeVersion.h,
//         otherwise failing to do so you will loose your changes.

#define	_STR(x) #x
#define	STR(x) _STR(x)

// makeversion emit defines
#define MAKEVERSION_YEAR2             18
#define MAKEVERSION_MONTHDAY          1109
#define MAKEVERSION_FILE_FORMAT       "%(MAJOR).%(MINOR).%(BUILD).%(REVISION)"
#define MAKEVERSION_FILE              "X.XXX.XX.XXXX"
#define MAKEVERSION_PRODUCT_FORMAT    "%(MAJOR).%(MINOR)"
#define MAKEVERSION_PRODUCT           "X.XXX"
#define MAKEVERSION_MAJOR             0
#define MAKEVERSION_MINOR_FORMAT      "%(SVN)"
#define MAKEVERSION_MINOR             0
#define MAKEVERSION_BUILD             MAKEVERSION_YEAR2
#define MAKEVERSION_REVISION          MAKEVERSION_MONTHDAY
#define MAKEVERSION_BUILD_DATE        "2018/11/09"
#define MAKEVERSION_BUILD_TIME        "10:49:44UTC"

// makeversion resource defines 
#define	MAKEVERSION_FILE_NUMBER	      MAKEVERSION_MAJOR,MAKEVERSION_MINOR,MAKEVERSION_BUILD,MAKEVERSION_REVISION
#define	MAKEVERSION_FILE_TEXT         MAKEVERSION_FILE
#define	MAKEVERSION_PRODUCT_NUMBER    MAKEVERSION_MAJOR,MAKEVERSION_MINOR,0,0
#define	MAKEVERSION_PRODUCT_TEXT      MAKEVERSION_PRODUCT
#define	MAKEVERSION_COMMENTS          ""
#define	MAKEVERSION_COMPANY           L"SoLaR"
#define	MAKEVERSION_COPYRIGHT_FORMAT  L"Copyright (c) %(YEAR) Nikola Bozovic"
#define	MAKEVERSION_COPYRIGHT         L"Copyright (c) XXXX Nikola Bozovic"
#define	MAKEVERSION_TRADEMARK         ""
#define	MAKEVERSION_INTERNALNAME      L"openS3TC"
#define	MAKEVERSION_ORIGINALNAME      "openS3TC.dll"
#define	MAKEVERSION_FILEDESC_FORMAT   "open S3TC (%(YYMMDD).%(HHMMSS)utc) (svn:%(SVN)) (msvc:%(MSVCVER))"
#define	MAKEVERSION_FILEDESC          "open S3TC (XXXXXX.XXXXXXutc) (svn:XXX) (msvc:XX.XX.XXXXXX.XXXXX)"
#define	MAKEVERSION_PRODUCTNAME       L"open S3TC"
#define	MAKEVERSION_BUILDDATETIME     MAKEVERSION_BUILD_DATE " " MAKEVERSION_BUILD_TIME
#define	MAKEVERSION_PRIVATEBUILD      L"Private Build ()"
#define	MAKEVERSION_SPECIALBUILD      L"Special Build ()"

#pragma region "### example VS_VERSION_INFO VERSIONINFO ###"

/* example of resource file VS_VERSION_INFO VERSIONINFO section
/////////////////////////////////////////////////////////////////////////////
//
// Version
//
#include "makeversion.h"

VS_VERSION_INFO VERSIONINFO
 FILEVERSION MAKEVERSION_FILE_NUMBER
 PRODUCTVERSION MAKEVERSION_PRODUCT_NUMBER
 FILEFLAGSMASK 0x3fL
#ifdef _DEBUG
 FILEFLAGS 0x1L
#else
 FILEFLAGS 0x0L
#endif
 FILEOS 0x4L
 FILETYPE 0x2L
 FILESUBTYPE 0x0L
BEGIN
    BLOCK "StringFileInfo"
    BEGIN
        BLOCK "040904b0"
        BEGIN
            VALUE "Comments", MAKEVERSION_COMMENTS "\0"
            VALUE "Summary", MAKEVERSION_COMMENTS "\0"
            VALUE "FileComments", MAKEVERSION_COMMENTS "\0"
            VALUE "CompanyName", MAKEVERSION_COMPANY "\0"
            VALUE "Title", MAKEVERSION_FILEDESC "\0"            
            VALUE "PersonalTitle", MAKEVERSION_FILEDESC "\0"
            VALUE "FileDescription", MAKEVERSION_FILEDESC "\0"
            VALUE "FileVersion", MAKEVERSION_FILE "\0"
            VALUE "InternalName", MAKEVERSION_INTERNALNAME "\0"
            VALUE "LegalCopyright", MAKEVERSION_COPYRIGHT "\0"
            VALUE "LegalTrademarks", MAKEVERSION_TRADEMARK "\0"
            VALUE "OriginalFilename", MAKEVERSION_ORIGINALNAME "\0"
            VALUE "ProductCopyright", MAKEVERSION_COPYRIGHT "\0"
            VALUE "ProductName", MAKEVERSION_PRODUCTNAME "\0"
            VALUE "ProductVersion", MAKEVERSION_PRODUCT "\0"
            VALUE "BuildDateTime", MAKEVERSION_BUILDDATETIME "\0"
            VALUE "PrivateBuild", MAKEVERSION_PRIVATEBUILD "\0"
            VALUE "SpecialBuild", MAKEVERSION_SPECIALBUILD "\0"
        END
    END
    BLOCK "VarFileInfo"
    BEGIN
        VALUE "Translation", 0x409, 1200
    END
END

#endif    // English (U.S.) resources
/////////////////////////////////////////////////////////////////////////////
*/
#pragma endregion
