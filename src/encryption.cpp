#include "encryption.h"

/** Encryption ve Decryption Sezar Şifrelemesi Kaydırma Şifrelemelesi **/
void Cryption::Shift(char *kelime, int anahtar)
{
	/* char character[100] = "ali baba ve kirk haramiler";
	Shift(character,2);
	cout << "\nsifreli: " << character;
	Shift(character,-2);
	cout << "\nacilmis: " << character; */
	
	char c = kelime[0];
	int i = 0;
	while(c != '\0')
	{
		if(c >= 65 && c <= 90)
		{
			kelime[i] = (kelime[i] + anahtar);
			if(kelime[i] > 90)
				kelime[i] = (kelime[i] % 90) + 65;
		}
		if(c >= 97 && c <= 122)
		{
			kelime[i] = (kelime[i] + anahtar);
			if(kelime[i] > 122)
				kelime[i] = (kelime[i] % 122) + 97;
		}
		i++;
		c = kelime[i];
	}
}