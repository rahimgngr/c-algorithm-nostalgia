#include <stdio.h>
#include <conio.h>
#include <string.h>

struct ogrenci{
	char isim[50];
	int numara;
	int notu;

};

int main (){

struct ogrenci bilgi;


printf("Ogrenci ismi :\n");
fflush(stdin);
gets(bilgi.isim);

printf("Ogrenci numarasi :\n");
scanf("%d" ,&bilgi.numara);

printf("Ogrenci notu :\n");
scanf("%d",&bilgi.notu);

printf("Ogrenci ismi : %s\n",bilgi.isim);
printf("Ogrenci numarasi : %d\n",bilgi.numara);
printf("Ogrenci notu : %d\n",bilgi.notu);

	getch ();
	return 0;
	
}
