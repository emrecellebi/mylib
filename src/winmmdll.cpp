#include <iostream>
#include "winmmdll.h"

using namespace std;

/** CD & DVD Rom Açma / Kapatma **/
void Winmmdll::mciSendStringWinmm(const char* strr)
{
	if(dll != NULL)
	{
		cdRom function = (cdRom)GetProcAddress(dll,"mciSendStringA");
		if(function != NULL)
		{
			if(strr == "open")
				function("set CDAudio door open", NULL, 0, 0);
			
			if(strr == "close")
				function("set CDAudio door closed", NULL, 0, 0);
		}
		else
		{
			cout << "I cant't load this mciSendStringA" << endl;
		}
	}
	else
	{
		cout << "I cant't load this dll file" << endl;
	}
}

/** CD & DVD Rom Açma / Kapatma **/
void Winmmdll::mciSendStringAWinmm(const char* strr)
{
	if(strr == "open")
		mciSendStringA("set CDAudio door open", NULL, 0, 0);
	
	if(strr == "close")
		mciSendStringA("set CDAudio door closed", NULL, 0, 0);
}