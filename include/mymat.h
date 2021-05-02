#ifndef mymat_h
#define mymat_h

#define PI 3.14159265358979323846
#define CMTOPX 37.7952755906

extern float Clamp(float value, float min, float max);
extern int Clamp(int value, int min, int max);

extern int Pow(int taban, int ust);
extern float Pow(float taban, float ust);

#ifdef __cplusplus
extern "C" {
#endif
	
	/******************************** My Methods **********************************/
	extern void tekCiftSayi(int x);
	extern void asalSayi(int x);
	extern void asalSayi2(int b);
	extern void araAsalSayi(int x, int y);
	extern void rasyonelSayiSadelestirme(int pay, int payda);
	extern void multiplicationTable(int a);
	extern void SayisalLotoRandomGenerating(int x);
	extern void Random(int range, int numbers);
	extern int GaussYontemi(int b);
	extern int PTBS(int us1, int us2);
	extern int molaHesap(int dk1, int dk2);
	extern int mod(int a, int b);
	extern float Factoriel(float x);
	extern float soundCaculator(float temperature);
	extern float ATT(float *addres, int arrLength);
	extern float add(float a, float b);
	extern float mul(float a, float b);
	extern float divition(float a, float b);
	extern float sub(float a, float b);
	
	/************************************ Uzunluk Birimleri ************************************/
	
	extern void UnitsOfLengthTable();
	extern float UnitsOfLength(float length, int mul);
	
	/************************************ Zaman Birimleri ************************************/
	
	extern float SaniyeToMicrosaniye(float saniye);
	
	/************************************ Geometrik Şekiller ************************************/
	extern void rightHalfReverseTriangle(int a);
	extern void invertedHalfTriangle(int a);
	extern void halfTriangle(int a);
	extern void DamaTahtasi(int n);
	extern void YildizCarpi(int n);
	extern void Plus(int n);
	extern void BiseUcgen();
	
#ifdef __cplusplus
}
#endif

#endif