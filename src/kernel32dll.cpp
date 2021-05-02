#include <iostream>
#include "kernel32dll.h"

using namespace std;

void Kernel32dll::getLocalTime(string glt)
{
	GetLocalTime(&lt);
	
	if(glt == "Year")
		cout << lt.wYear;
	if(glt == "Month")
		cout << lt.wMonth;
	if(glt == "DayOfWeek")
		cout << lt.wDayOfWeek;
	if(glt == "Day")
		cout << lt.wDay;
	if(glt == "Hour")
		cout << lt.wHour;
	if(glt == "Minute")
		cout << lt.wMinute;
	if(glt == "Second")
		cout << lt.wSecond;
	if(glt == "Milliseconds")
		cout << lt.wMilliseconds;
	
	
	/* while(true)
	{
		if(GetKeyState(VK_LSHIFT) & 0x8000)
			break;
		getLocalTime("Hour");
		cout << ":";
		getLocalTime("Minute");
		cout << ":";
		getLocalTime("Second");
		cout << "\r";
		cout.flush();
		Sleep(50);
	} */
}

void Kernel32dll::getSystemTime(string gst)
{
	GetSystemTime(&st);
	
	if(gst == "Year")
		cout << st.wYear;
	if(gst == "Month")
		cout << st.wMonth;
	if(gst == "DayOfWeek")
		cout << st.wDayOfWeek;
	if(gst == "Day")
		cout << st.wDay;
	if(gst == "Hour")
		cout << st.wHour;
	if(gst == "Minute")
		cout << st.wMinute;
	if(gst == "Second")
		cout << st.wSecond;
	if(gst == "Milliseconds")
		cout << st.wMilliseconds;
}

void Kernel32dll::getVersion()
{
	DWORD dwBuild = 0;
	DWORD dwVersion = GetVersion();
	DWORD dwMajorVersion = (DWORD)(LOBYTE(LOWORD(dwVersion)));
	DWORD dwMinorVersion = (DWORD)(HIBYTE(LOWORD(dwVersion)));
	if (dwVersion < 0x80000000)              
        dwBuild = (DWORD)(HIWORD(dwVersion));
	cout << "Microsoft Windows [Version " << dwMajorVersion << "." << dwMinorVersion << "." << dwBuild << "]";
}