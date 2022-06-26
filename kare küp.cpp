#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int main()

{
	setlocale(LC_ALL, "Turkish");
	system("color 02");
	
	int i,kare=0,kup=0,sayi,a;
	
	printf ("Kac tane sayi istiyorsunuz?\n");
	scanf ("%d" ,&a);
	printf("sayi\tkare\tkup\n");
		for(i=0;i<=a;i++)
	{	
		kare=i*i;
		kup=kare*i;
	printf("%d\t%d\t%d\n",i,kare,kup);
	
}
	

	
	getch();
		return 0;
		
}
