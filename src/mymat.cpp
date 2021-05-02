#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "mymat.h"

/******************************** 3D Library **********************************/

float Clamp(float value, float min, float max)
{
	if(value < min)
		value = min;
	else if(value > max)
		value = max;
	return value;
}

int Clamp(int value, int min, int max)
{
	if(value < min)
		value = min;
	else if(value > max)
		value = max;
	return value;
}

/******************************** My Methods **********************************/

/** Tek Çift Sayı **/
void tekCiftSayi(int x)
{
	if(x % 2 == 0)
		std::cout << std::endl << "Cift = " << x << std::endl;
	else
		std::cout << std::endl << "Tek = " << x << std::endl;
}

/** Asal Sayılar **/
void asalSayi(int x)
{
	bool asal = false;

    for(int i = 2; i < x; i++)
        if(x % i == 0)
            asal = true;
	
	if(asal != true)
		std::cout << std::endl << "Asal'dir." << std::endl;
	else
		std::cout << std::endl << "Asal Degildir." << std::endl;
}

void asalSayi2(int b)
{
	int a = 1, flag = 0;
	while(a < b - 1)
	{
		a++;
		if(b % a == 0)
		{
			flag = 1;
			break;
		}
	}

	if(flag == 0)
		std::cout << std::endl << "Sayi Asaldir.";
	else
		std::cout << std::endl << "Sayi Asal Degildir.";
}

/** Aralarında Asal Sayılar **/
void araAsalSayi(int x, int y)
{
	int buyuk, kucuk, kontrol = 0, i;

	if(x == 1 || y == 1)
		std::cout << x << " ile " << y << " aralarinda asal degildir" << std::endl;
	
	if(x > y)
	{
		buyuk = x;
		kucuk = y;
	}
	else
	{
		buyuk = y;
		kucuk = x;		
	}
	
	for(i = 2; i <= kucuk; i++)
		if((buyuk % i == 0) && (kucuk % i == 0))
		{
			kontrol = 1;	// Herhangi bir sayıya bölündü ile kontrol 1 olur
			break;			// Diğer sayılara bölmeye gerek kalmadığı için döngüden çıkılır
		}
	
	if(kontrol == 1)
		std::cout << std::endl << x << " ile " << y << " aralarinda asal degildir" << std::endl;
	else
		std::cout << std::endl << x << " ile " << y << " aralarinda asaldir" << std::endl;
}

/** Rasyonel Sayı Sadelestirme **/
void rasyonelSayiSadelestirme(int pay, int payda)
{
	int ek, bol;

	if(pay < payda)
		ek = pay;
	else
		ek = payda;

	bol = 2;

	while(bol <= ek)
		if((pay % bol == 0) && (payda % bol == 0))
		{
			pay /= bol;
			payda /= bol;
		}
		else
			bol++;
	std::cout << std::endl << "Kesrin En Sade Hali: " << pay << "/" << payda;
}

/** Çarpım Tablosu **/
void multiplicationTable(int a)
{
	int i, j;
	for(i = 1; i <= a; i++)
	{
		for(j = 1; j <= a; j++)
			std::cout << " " << i * j;
		
		std::cout << std::endl;
	}
}

/** Sayısal Loto Generator **/
void SayisalLotoRandomGenerating(int x)
{
	srand(time(NULL));

	for(int i = 0; i <= 6; i++)
	{
		printf("%d\n", rand() % x);
	}
}

void Random(int range, int numbers)
{
	srand((unsigned)time(0));
	for(int i = 0; i < numbers; i++)
	{
		std::cout << (rand() % range) + 1 << std::endl;
	}
}

/** iki sayının bir biri arasındaki toplamı **/
int GaussYontemi(int b)
{
	//https://www.youtube.com/watch?v=DBXB2O5oDgw
	bool stop = false;
	bool de = false;
	int temp = 0;
	int i1;
	int s = 0;
	
	if(de != true)
		temp = b;

	for(int i = 1; i <= b; i++)
	{
		stop = true;
		for(i1 = temp; i1 > 0; i1--)
		{
			s = i + i1;
			i1--;
			temp = i1;
			
			if(stop == true)
				break;
		}
	}
	return (b * s) / 2;
}

/** PTBS = Pozitif Tam Bölen Sayı **/
int PTBS(int us1, int us2)
{	
	us1++;
	us2++;
	return us1 * us2;
}

/** Mola Hesaplama **/
int molaHesap(int dk1, int dk2)
{
	int sonuc1 = dk1 + dk2;
	
	if(sonuc1 > 60)
	{
		int sonuc2 = sonuc1 - 60;
		return sonuc2;
	}
	else
		return sonuc1;
}

/** Üst Alma **/
int Pow(int taban, int ust)
{
	int sonuc = 1;
	for(int i = 1; i <= ust; i++)
		sonuc *= taban;
	return sonuc;
}

float Pow(float taban, float ust)
{
	float sonuc = 1;
	for(float i = 1; i <= ust; i++)
		sonuc *= taban;
	return sonuc;
}

/** Mod **/
int mod(int a, int b)
{
	return a % b;
}

/** Factoriel Hesaplama **/
float Factoriel(float x)
{
	float factoriel = 1;
	
	for(int i = x; i > 0; i--)
		factoriel *= i;
	
	return factoriel;
}

/** Ultra Sonic Mesafe Sensörü **/
float soundCaculator(float temperature)
{
	// 331 0 santigrat derecedeki sesin hızı
	// M/S Cinsinden verir.
	return 331 * sqrt(1 + (temperature / 273));
}

/** Aritmetik Terimlerin Toplami **/
// https://www.youtube.com/watch?v=7Wsyzc_prpo
float ATT(float *addres, int arrLength)
{
	if(arrLength % 2 == 0)
		return arrLength * ((addres[0] + addres[(arrLength - 1)]) / 2); //çift
	else
		return arrLength * addres[(arrLength - 1) / 2]; //tek
}

/** Toplama **/
float add(float a, float b)
{
	return a + b;
}

/** Çarpma **/
float mul(float a, float b)
{
	return a * b;
}

/** Bölme **/
float divition(float a, float b)
{
	return a / b;
}

/** Çıkartma **/
float sub(float a, float b)
{
	return a - b;
}

/************************************ Uzunluk Birimleri ************************************/

void UnitsOfLengthTable()
{
	std::cout << "Name\tAbbreviation\tSize" << std::endl;
	std::cout << "Yotta(Yotta)\tYm\t1000000000000000000000000" << std::endl;
	std::cout << "Zetta(Zetta)\tZm\t1000000000000000000000" << std::endl;
	std::cout << "Eksa(Exa)\tEm\t1000000000000000000" << std::endl;
	std::cout << "Peta(Peta)\tPm\t1000000000000000" << std::endl;
	std::cout << "Tera(Tera)\tTm\t1000000000000" << std::endl;
	std::cout << "Giga(Giga)\tGm\t1000000000" << std::endl;
	std::cout << "Mega(Mega)\tMm\t1000000" << std::endl;
	std::cout << "Kilo(Kilo)\tkm\t1000" << std::endl;
	std::cout << "Hekto(Hecto)\thm\t100" << std::endl;
	std::cout << "Deka(Deca)\tDam\t10" << std::endl;
	std::cout << "Metre(Meter)\tm\t1" << std::endl;
	std::cout << "Desi(Deci)\tdm\t10" << std::endl;
	std::cout << "Santi(Centi)\tcm\t100" << std::endl;
	std::cout << "Mili(Milli)\tmm\t1000" << std::endl;
	std::cout << "Mikro(Micro)\tum\t1000000" << std::endl;
	std::cout << "Nano(Nano)\tnm\t1000000000" << std::endl;
	std::cout << "Piko(Pico)\tpm\t1000000000000" << std::endl;
	std::cout << "Femto(Femto)\tfm\t1000000000000000" << std::endl;
	std::cout << "Atto(Atto)\tam\t1000000000000000000" << std::endl;
	std::cout << "Zepto(Zepto)\tzm\t1000000000000000000000" << std::endl;
	std::cout << "Yokto(Yocto)\tym\t1000000000000000000000000" << std::endl;
	std::cout << std::endl << "Not: Metreyi Baz Alarak Yazilmaistir." << std::endl;
	std::cout << "Not: Asagiya Inerken + Yukari Cikarken - Olarak Kabul Edilir." << std::endl;
}

float UnitsOfLength(float length, int mul)
{
	return length * pow(10, mul);
}

/************************************ Zaman Birimleri ************************************/

float SaniyeToMicrosaniye(float saniye)
{
	return saniye / 1000000;
}

/************************************ Geometrik Şekiller ************************************/

/** Sağa Dayalı Ters Yarım Üçgen **/
void rightHalfReverseTriangle(int a)
{
	int i, j;
	
	for(i = a; i >= 1; i--)
	{
		for(int k = 0; k < a - i; k++)
			std::cout << " ";
		
		for(j = 1; j <= i; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
}

/** Ters Yarım Üçgen **/
void invertedHalfTriangle(int a)
{
	int i, j;
	for(i = a; i >= 1; i--)
	{
		for(j = 1; j <= i; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
}

/** Yarım Üçgen **/
void halfTriangle(int a)
{
	int i, j;
	for(i = 1; i <= a; i++)
	{
		for(j = 1; j <= i; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
}

/** Dama Tahtası **/
void DamaTahtasi(int n = 10)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if((i + j) % 2 == 0)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}

/** Yıldızdan Çarpı **/
void YildizCarpi(int n = 5)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if((i + j) == 6 || i == j)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}

/** Artı İşareti **/
void Plus(int n = 10)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if((i == n / 2 || j == n / 2) || (n % 2 == 0 && (j == n / 2 - 1 || i == n / 2 - 1)))
				std::cout << "1";
			else 
				std::cout << "0";
		}
		std::cout << std::endl;
	}
}

/** Bişe Üçgeni **/
void BiseUcgen()
{
	for(int i = 0; i <= 10; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			int nf = 1;
			for(int p = 1; p <= i; p++)
				nf = nf * p;
			
			int kf = 1;
			for(int p = 1; p <= j; p++)
				kf = kf * p;
			
			int nkf = 1;
			for(int p = 1; p <= i - j; p++)
				nkf = nkf * p;
			
			std::cout << " " << nf / (kf * nkf);
		}
		std::cout << std::endl;
	}
}