#include <stdio.h>
#include <conio.h>

int main ()

{
	
	int satir,i,j;
	
	printf ("Satir sayisi giriniz\n");
	scanf ("%d" ,&satir);
	
	for (i=0;i<satir;i++)
{
		for (j=0;j<=i;j++)
		printf ("*");
		
	printf ("\n");
	
}
	getch ();
	return 0;
	
}
		
