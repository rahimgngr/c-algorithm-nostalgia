#include <stdio.h>
#include <conio.h>

int main ()

{
	int sayi;
	int sonuc=1;
	int i=1;
	
	printf("Hangi sayinin faktoriyelini almak istiyorsaniz giriniz\n");
	scanf ("%d" ,&sayi);
	
		for(i = 1; i <= sayi; i++)
			sonuc = sonuc * i;
	
	printf("%d sayisinin faktoriyeli %d'dir",sayi,sonuc);
	
			
			getch();
		return 0;
		
}
	
	
