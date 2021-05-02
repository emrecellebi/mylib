#pragma once
#include <windows.h>

class Winmmdll
{
public:
	void mciSendStringWinmm(const char*);
	void mciSendStringAWinmm(const char*);
protected:
private:
	// MCIERROR mciSendString(LPCTSTR,LPTSTR,UINT,HANDLE);
	typedef MCIERROR(WINAPI* cdRom)(LPCTSTR,LPTSTR,UINT,HANDLE);
	HMODULE dll = LoadLibrary("winmm.dll");
};