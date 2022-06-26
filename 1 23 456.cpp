#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main ()

{
	setlocale(LC_ALL, "Turkish");
		
	int n,a,b,c=1;
	
	printf ("Kaç tane sayý ve satýr istiyorsanýz giriniz...\n");
	scanf ("%d" ,&n);
	printf("\n");	
		for(a=1;a<=n;a++)
		{
			for(b=1;b<=a;b++)
	{
	
printf ("%d" ,c);
		c++;
	}
	
	printf("\n");
}

getch ();
return 0;
}
