#include <stdio.h>
#include <string.h>

int main()
{
	char metin[]="C dili ile programlamayi ogreniyorum", anahtar[100];
	
	printf("Anahtar Kelime: "); gets(anahtar);
	
	char *sonuc; //BU �EK�LDE HANG� BELLEKTE OLDU�UNU BULUYORUZ
	sonuc = strstr(metin,anahtar);
	printf("%X\n", sonuc);
	
	if (sonuc=='\0')
		printf("Anahtar Kelime Bulunamadi");
	else
		printf("Anahtar Kelime Bulundu");
}
