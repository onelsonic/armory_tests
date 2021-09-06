﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef INC_kha__input__Mouse
#define INC_kha__input__Mouse
typedef struct _kha__input__$Mouse *kha__input__$Mouse;
typedef struct _kha__input__Mouse *kha__input__Mouse;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/netsync/Controller.h>
#include <haxe/io/Bytes.h>
#include <hl/types/ArrayObj.h>


struct _kha__input__$Mouse {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* get;
	kha__input__Mouse instance;
};
struct _kha__input__Mouse {
	hl_type *$type;
	int __id;
	haxe__io__Bytes _inputBuffer;
	hl__types__ArrayObj windowDownListeners;
	hl__types__ArrayObj windowUpListeners;
	hl__types__ArrayObj windowMoveListeners;
	hl__types__ArrayObj windowWheelListeners;
	hl__types__ArrayObj windowLeaveListeners;
};
#endif
