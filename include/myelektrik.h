#ifndef myelektrik_h
#define myelektrik_h

#ifdef __cplusplus
extern "C" {
#endif

	extern void CapasitorTable();
	extern void RenkTablo();
	extern void E24Resistor();
	extern void AWGWire();
	extern float Kapasitor(int kapasite, int katsayi);
	extern float DirencDeger(float x, float a, float b);
	extern float Ohm(int Gerilim, float Akim);
	extern float Watt(float Akim, int Gerilim);
	extern float mADonustur(float miliAmper);
	extern float voltageDivider(float v, float r1, float r2);

#ifdef __cplusplus
}
#endif

#endif