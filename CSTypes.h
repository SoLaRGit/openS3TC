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
// CSTypes.h
//
// version  : v2018.09.20
// author   : Nikola Bozovic <nigerija@gmail.com>
// desc     : portability for C# types to C/C++ code, so we wouldn't need to 
//            rewrite types when we copy paste code, back and forth.          
//
// changelog:
// * v2018.09.20: initial version.
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "stdafx.h"

typedef unsigned char     byte;
typedef unsigned short    ushort;
typedef unsigned int      uint;
typedef unsigned __int64  ulong;

#define null              NULL

