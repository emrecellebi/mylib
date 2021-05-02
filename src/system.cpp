#include <iostream>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "system.h"

using namespace std;

HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);

/** İkilik Binary Taban **/
int ikilikTaban(int a)
{
	int x = 0;
	if(a <= 0)
		return a;
	
	x = a % 2;
	a = a - x;
	a = a / 2;

	return x + 10 * ikilikTaban(a);
}


/** Miliseconds Bekleme Fonksiyonu **/
void delay_ms(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while((now - then) < pause)
	{
		now = clock();
	}
}

/** Clipboarda Copyalama **/
void CopyClipboard(const char* str)
{
	const size_t len = strlen(str) + 1;
	HGLOBAL hMem =  GlobalAlloc(GMEM_MOVEABLE, len);
	memcpy(GlobalLock(hMem), str, len);
	GlobalUnlock(hMem);
	OpenClipboard(0);
	EmptyClipboard();
	SetClipboardData(CF_TEXT, hMem);
	CloseClipboard();
}

/** Hackleme **/
void AppHacked(const char* progName, int address, int newValue)
{
	// Usage: AppHacked("Hesap Makinesi", 0x0026EC4C, 354);
	// https://www.youtube.com/watch?v=I0zPwg4iUDk
	HWND hWnd = FindWindow(0, progName);
	if(hWnd == 0)
	{
		cerr << "Cannot find window." << endl;
	}
	else
	{
		DWORD pId;
		GetWindowThreadProcessId(hWnd, &pId);
		HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS, false, pId);
		
		if(!hProc)
		{
			cerr << "Cannot open process." << endl;
		}
		else
		{
			int isSuccessful = WriteProcessMemory(hProc, (LPVOID)address, &newValue, (DWORD)sizeof(newValue), NULL);
			
			if(isSuccessful > 0)
			{
				clog << "Process memory written." << endl;
			}
			else
			{
				cerr << "Cannot write process memory" << endl;
			}
			
			CloseHandle(hProc);
		}
	}
}

/************************************ Renli Print Fonksiyonları ************************************/

void ColorPrint(const char* str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(char str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(int str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(uint64_t str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(double str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(float str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(long double str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(long long str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(const char* str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(char str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(int str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(uint64_t str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(double str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(float str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(long double str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(long long str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}