#ifndef kernel32dll_h
#define kernel32dll_h
#include <windows.h>

class Kernel32dll
{
public:
	void getLocalTime(std::string);
	void getSystemTime(std::string);
	void getVersion();
protected:
private:
	SYSTEMTIME st, lt;
};
#endif