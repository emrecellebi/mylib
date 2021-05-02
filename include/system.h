#pragma once


extern void ColorPrint(const char* str, int color);
extern void ColorPrint(char str, int color);
extern void ColorPrint(int str, int color);
extern void ColorPrint(uint64_t str, int color);
extern void ColorPrint(double str, int color);
extern void ColorPrint(float str, int color);
extern void ColorPrint(long double str, int color);
extern void ColorPrint(long long str, int color);
extern void ColorPrintln(const char* str, int color);
extern void ColorPrintln(char str, int color);
extern void ColorPrintln(int str, int color);
extern void ColorPrintln(uint64_t str, int color);
extern void ColorPrintln(double str, int color);
extern void ColorPrintln(float str, int color);
extern void ColorPrintln(long double str, int color);
extern void ColorPrintln(long long str, int color);

#ifdef __cplusplus
extern "C" {
#endif

	extern void CopyClipboard(const char* str);
	extern void AppHacked(const char* progName, int address, int newValue);
	extern int ikilikTaban(int a);
	extern void delay_ms(int milliseconds);

#ifdef __cplusplus
}
#endif