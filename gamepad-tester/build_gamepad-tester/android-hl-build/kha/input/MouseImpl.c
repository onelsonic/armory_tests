﻿// Generated by HLC 4.0.0 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/input/MouseImpl.h>
void kha_input_Mouse_new(kha__input__Mouse);
void kha_SystemImpl_lockMouse(int*);
void kha_SystemImpl_unlockMouse(int*);
bool kha_SystemImpl_canLockMouse(int*);
bool kha_SystemImpl_isMouseLocked(int*);
void kha_SystemImpl_notifyOfMouseLockChange(vclosure*,vclosure*);
void kha_SystemImpl_removeFromMouseLockChange(vclosure*,vclosure*);
void kha_SystemImpl_hideSystemCursor(void);
void kha_SystemImpl_showSystemCursor(void);

void kha_input_MouseImpl__receive(kha__input__MouseImpl r0,haxe__io__Bytes r1) {
	return;
}

void kha_input_MouseImpl_new(kha__input__MouseImpl r0) {
	kha_input_Mouse_new(((kha__input__Mouse)r0));
	return;
}

void kha_input_MouseImpl_lock(kha__input__MouseImpl r0) {
	int *r2;
	r2 = NULL;
	kha_SystemImpl_lockMouse(r2);
	return;
}

void kha_input_MouseImpl_unlock(kha__input__MouseImpl r0) {
	int *r2;
	r2 = NULL;
	kha_SystemImpl_unlockMouse(r2);
	return;
}

bool kha_input_MouseImpl_canLock(kha__input__MouseImpl r0) {
	bool r1;
	int *r2;
	r2 = NULL;
	r1 = kha_SystemImpl_canLockMouse(r2);
	return r1;
}

bool kha_input_MouseImpl_isLocked(kha__input__MouseImpl r0) {
	bool r1;
	int *r2;
	r2 = NULL;
	r1 = kha_SystemImpl_isMouseLocked(r2);
	return r1;
}

void kha_input_MouseImpl_notifyOnLockChange(kha__input__MouseImpl r0,vclosure* r1,vclosure* r2) {
	kha_SystemImpl_notifyOfMouseLockChange(r1,r2);
	return;
}

void kha_input_MouseImpl_removeFromLockChange(kha__input__MouseImpl r0,vclosure* r1,vclosure* r2) {
	kha_SystemImpl_removeFromMouseLockChange(r1,r2);
	return;
}

void kha_input_MouseImpl_hideSystemCursor(kha__input__MouseImpl r0) {
	kha_SystemImpl_hideSystemCursor();
	return;
}

void kha_input_MouseImpl_showSystemCursor(kha__input__MouseImpl r0) {
	kha_SystemImpl_showSystemCursor();
	return;
}

