#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//help me
	int kactane = 0;
	printf("kac dosya(max 4):");
	scanf_s(" %d", &kactane);
	const int karakter_sayi = 180001;
	char spam[karakter_sayi] = "zip_bombasi_vol_2 ";
	int b = 1;
	FILE* help;
	char dosya_adi[] = "deneme_x.txt ";
	char gecici[karakter_sayi];
	unsigned int c = karakter_sayi;
	while (b <= kactane)
	{
	dosya_adi[7] = b + '0';
	fopen_s(&help, dosya_adi, "w+");
	strcpy_s(gecici, karakter_sayi, spam);
	int katlayici = 1;
	while (katlayici < 10)
	{
		if (c <= strlen(gecici))
		{
			break;
		}
		strcat_s(spam,karakter_sayi, gecici);
		c -= strlen(gecici);
		katlayici++;
	}
	fprintf(help, "%s", spam);
	fclose(help);
	b++;
	}
	printf("tamamlandi");
	scanf_s("%d",&c);
}