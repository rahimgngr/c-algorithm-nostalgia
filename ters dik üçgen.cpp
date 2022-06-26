#include <stdio.h>
#include <conio.h>

int main ()

{
	
	int satir,i,j=0;
	
	printf ("Satir sayisi :\n");
	scanf ("%d" ,&satir);
	
	for (i=0;i<=satir;i++)

	{		
		for (j=satir;j>i;j--)
		printf ("*");
		printf ("\n");
			
	}		
	

		getch ();
		return 0;
		
	}
