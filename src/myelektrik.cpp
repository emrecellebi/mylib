#include <iostream>
#include "myelektrik.h"
#include "mymat.h"

using namespace std;

/** Kapasitor Tablosu **/
void CapasitorTable()
{
	cout << "Harf\tTolerans\tNumara\tKapasite(pf)" << endl;
	cout << "A\t0.05pf\t\t101\t100pf" << endl;    
	cout << "B\t0.1pf\t\t221\t220pf" << endl;    
	cout << "C\t0.25pf\t\t471\t470pf" << endl;    
	cout << "D\t0.5pf\t\t102\t1000pf" << endl;   
	cout << "E\t0.5%\t\t222\t2200pf" << endl;   
	cout << "F\t1%\t\t472\t4700pf" << endl;   
	cout << "G\t2%\t\t103\t10000pf" << endl;  
	cout << "H\t3%\t\t223\t22000pf" << endl;  
	cout << "J\t5%\t\t473\t47000pf" << endl;  
	cout << "K\t10%\t\t104\t100000pf" << endl; 
	cout << "L\t15%\t\t224\t220000pf" << endl; 
	cout << "M\t20%\t\t474\t470000pf" << endl; 
	cout << "N\t30%\t\t105\t1000000pf" << endl;
	cout << "P\t-0%, +100%\t225\t2200000pf" << endl;
	cout << "S\t-20%, +50%\t475\t4700000pf" << endl;
	cout << "W\t-0%, +200%" << endl;
	cout << "X\t-20%, +40%" << endl;
	cout << "Z\t-20%, +80%" << endl;
}

/** Direnç Renk Taoblosu **/
void RenkTablo()
{
	cout << "Renk\tDeger\tCarpan\t\tTolerans" << endl;
	cout << "Siyah\t0\t10 ust 0\t%20" << endl;
	cout << "Kahve\t1\t10 ust 1\t%1" << endl;
	cout << "Kirmizi\t2\t10 ust 2\t%2" << endl;
	cout << "Turuncu\t3\t10 ust 3\t%3" << endl;
	cout << "Sari\t4\t10 ust 4\t%4" << endl;
	cout << "Yesil\t5\t10 ust 5\t%5" << endl;
	cout << "Mavi\t6\t10 ust 6\t%6" << endl;
	cout << "Mor\t7\t10 ust 7\t%7" << endl;
	cout << "Gri\t8\t10 ust 8\t%8" << endl;
	cout << "Beyaz\t9\t10 ust 9\t%9" << endl;
	cout << "Altin\t-\t10 ust -1\t%5" << endl;
	cout << "Gumus\t-\t10 ust -2\t%10" << endl;
	cout << "Reksiz\t-\t\t\t%20" << endl << endl;
	cout << "Not:\tIlk iki rengin degerleri yan yana yazilir." << endl;
	cout << "Not:\tToleransi %5 Yukari %5 Asagi yani (ornek: 2200 2700 arasi) Tumu icin" << endl;
}

void E24Resistor()
{
	cout << "E24 Resistor Sizes" << endl << endl;
	cout << "1.0\t10\t100\t1.0k\t10k\t100k\t1.0m" << endl;
	cout << "1.1\t11\t110\t1.1k\t11k\t110k\t1.1m" << endl;
	cout << "1.2\t12\t120\t1.2k\t12k\t120k\t1.2m" << endl;
	cout << "1.3\t13\t130\t1.3k\t13k\t130k\t1.3m" << endl;
	cout << "1.5\t15\t150\t1.5k\t15k\t150k\t1.5m" << endl;
	cout << "1.6\t16\t160\t1.6k\t16k\t160k\t1.6m" << endl;
	cout << "1.8\t18\t180\t1.8k\t18k\t180k\t1.8m" << endl;
	cout << "2.0\t20\t200\t2.0k\t20k\t200k\t2.0m" << endl;
	cout << "2.2\t22\t220\t2.2k\t22k\t220k\t2.2m" << endl;
	cout << "2.4\t24\t240\t2.4k\t24k\t240k\t2.4m" << endl;
	cout << "2.7\t27\t270\t2.7k\t27k\t270k\t2.7m" << endl;
	cout << "3.0\t30\t300\t3.0k\t30k\t300k\t3.0m" << endl;
	cout << "3.3\t33\t330\t3.3k\t33k\t330k\t3.3m" << endl;
	cout << "3.6\t36\t360\t3.6k\t36k\t360k\t3.6m" << endl;
	cout << "3.9\t39\t390\t3.9k\t39k\t390k\t3.9m" << endl;
	cout << "4.3\t43\t430\t4.3k\t43k\t430k\t4.3m" << endl;
	cout << "4.7\t47\t470\t4.7k\t47k\t470k\t4.7m" << endl;
	cout << "5.1\t51\t510\t5.1k\t51k\t510k\t5.1m" << endl;
	cout << "5.6\t56\t560\t5.6k\t56k\t560k\t5.6m" << endl;
	cout << "6.2\t62\t620\t6.2k\t62k\t620k\t6.2m" << endl;
	cout << "6.8\t68\t680\t6.8k\t68k\t680k\t6.8m" << endl;
	cout << "7.5\t75\t750\t7.5k\t75k\t750k\t7.5m" << endl;
	cout << "8.2\t82\t820\t8.2k\t82k\t820k\t8.2m" << endl;
	cout << "9.1\t91\t910\t9.1k\t91k\t910k\t9.1m" << endl;
	cout << endl << "Web Site:http://www.ohmslawcalculator.com/e24-resistor-sizes" << endl;
}

void AWGWire()
{
	cout << "AWG Wire Sizes" << endl << endl;
	cout << "Gauge\tDiameter\t    Resistance\t\tMax Current" << endl;
	cout << "\t\t\t    per 1000ft\tper km\tIn Air\tIn Jacket" << endl;
	cout << "0000\t0.4600\t11.6840mm\t0.05\t0.16\t380A\t302A" << endl;
	cout << "000\t0.4096\t10.4038mm\t0.06\t0.20\t328A\t239A" << endl;
	cout << "00\t0.3648\t9.2659mm\t0.08\t0.26\t283A\t190A" << endl;
	cout << "0\t0.3249\t8.2525mm\t0.10\t0.32\t245A\t150A" << endl;
	cout << "1\t0.2893\t7.3482mm\t0.12\t0.41\t211A\t119A" << endl;
	cout << "2\t0.2576\t6.5430mm\t0.16\t0.51\t181A\t94A" << endl;
	cout << "3\t0.2294\t5.8268mm\t0.20\t0.65\t158A\t75A" << endl;
	cout << "4\t0.2043\t5.1892mm\t0.25\t0.82\t135A\t60A" << endl;
	cout << "5\t0.1819\t4.6203mm\t0.31\t1.03\t118A\t47A" << endl;
	cout << "6\t0.1620\t4.1148mm\t0.40\t1.30\t101A\t37A" << endl;
	cout << "7\t0.1443\t3.6652mm\t0.50\t1.63\t89A\t30A" << endl;
	cout << "8\t0.1285\t3.2639mm\t0.63\t2.06\t73A\t24A" << endl;
	cout << "9\t0.1144\t2.9058mm\t0.79\t2.60\t64A\t19A" << endl;
	cout << "10\t0.1019\t2.5883mm\t1.00\t3.28\t55A\t15A" << endl;
	cout << "11\t0.0907\t2.3038mm\t1.26\t4.13\t47A\t12A" << endl;
	cout << "12\t0.0808\t2.0523mm\t1.59\t5.21\t41A\t9.3A" << endl;
	cout << "13\t0.0720\t1.8288mm\t2.00\t6.57\t35A\t7.4A" << endl;
	cout << "14\t0.0641\t1.6281mm\t2.53\t8.28\t32A\t5.9A" << endl;
	cout << "15\t0.0571\t1.4503mm\t3.18\t10.44\t28A\t4.7A" << endl;
	cout << "16\t0.0508\t1.2903mm\t4.02\t13.17\t22A\t3.7A" << endl;
	cout << "17\t0.0453\t1.1506mm\t5.06\t16.61\t19A\t2.9A" << endl;
	cout << "18\t0.0403\t1.0236mm\t6.39\t20.94\t16A\t2.3A" << endl;
	cout << "19\t0.0359\t0.9119mm\t8.05\t26.41\t14A\t1.8A" << endl;
	cout << "20\t0.0320\t0.8128mm\t10.15\t33.29\t11A\t1.5A" << endl;
	cout << "21\t0.0285\t0.7239mm\t12.80\t41.98\t9A\t1.2A" << endl;
	cout << "22\t0.0254\t0.6452mm\t16.14\t52.94\t7A\t0.92A" << endl;
	cout << "23\t0.0226\t0.5740mm\t20.36\t66.78\t4.7A\t0.729A" << endl;
	cout << "24\t0.0201\t0.5105mm\t25.67\t84.20\t3.5A\t0.577A" << endl;
	cout << "25\t0.0179\t0.4547mm\t32.37\t106.17\t2.7A\t0.457A" << endl;
	cout << "26\t0.0159\t0.4039mm\t40.81\t133.86\t2.2A\t0.361A" << endl;
	cout << "27\t0.0142\t0.3607mm\t51.47\t168.82\t1.7A\t0.288A" << endl;
	cout << "28\t0.0126\t0.3200mm\t64.90\t212.87\t1.4A\t0.226A" << endl;
	cout << "29\t0.0113\t0.2870mm\t81.83\t268.40\t1.2A\t0.182A" << endl;
	cout << "30\t0.0100\t0.2540mm\t103.20\t338.50\t0.86A\t0.142A" << endl;
	cout << "31\t0.0089\t0.2261mm\t130.10\t426.73\t0.7A\t0.113A" << endl;
	cout << "32\t0.0080\t0.2032mm\t164.10\t538.25\t0.53A\t0.091A" << endl;
	cout << "33\t0.0071\t0.1803mm\t206.90\t678.63\t0.43A\t0.072A" << endl;
	cout << "34\t0.0063\t0.1600mm\t260.90\t855.75\t0.33A\t0.056A" << endl;
	cout << "35\t0.0056\t0.1422mm\t329.00\t1079.12\t0.27A\t0.044A" << endl;
	cout << "36\t0.0050\t0.1270mm\t414.80\t1360.00\t0.21A\t0.035A" << endl;
	cout << "37\t0.0045\t0.1143mm\t523.10\t1715.00\t0.17A\t0.0289A" << endl;
	cout << "38\t0.0040\t0.1016mm\t659.60\t2163.00\t0.13A\t0.0228A" << endl;
	cout << "39\t0.0035\t0.0889mm\t831.80\t2728.00\t0.11A\t0.0175A" << endl;
	cout << "40\t0.0031\t0.0787mm\t1049.00\t3440.00\t0.09A\t0.0137A" << endl;
	cout << endl << "Web Site:http://www.ohmslawcalculator.com/awg-wire-chart" << endl;
}

/** Seramic, Film, Polyester Kapasitor Hesplama (pf) **/
float Kapasitor(int kapasite, int katsayi)
{
	return kapasite * Pow(10, katsayi);
}

/** 3 Renk Direnc Hesaplar **/
float DirencDeger(float x, float a, float b)
{
	// ilkdeğer olarak direnc değerinin 2 renk sayısı birleştirilip girilir.
	// 2. değer olarak direnci Çarpan değerinin taban sayısı girilir.
	// 3.değer olarak direncin Çarpan değerinin üst sayısı girilir.
	return x * Pow(a,b);
}

/** Ohm Yasası **/
/** Direnc Degerini Hesaplama **/
float Ohm(int Gerilim, float Akim)
{
	return Gerilim / Akim;
}

/** Watt(Güç Hesaplama) **/
float Watt(float Akim, int Gerilim)
{
	return Akim * Gerilim;
}

/** Mili Amperi To Akım Dönüştürürcü **/
float mADonustur(float miliAmper)
{
	return miliAmper / 1000;
}

/** Voltaj Bölücü Hesaplama **/
float voltageDivider(float v, float r1, float r2)
{
	return (v * r2) / (r1 + r2);
}