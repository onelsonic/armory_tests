﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC__std__SysError
#define INC__std__SysError
typedef struct _$SysError *$SysError;
typedef struct _SysError *SysError;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _$SysError {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _SysError {
	hl_type *$type;
	String msg;
};
#endif

