#include <stdio.h>
#include <conio.h>

int main()

{
	
	int n,i,j;

printf ("Boyutu giriniz :\n");	
scanf ("%d" ,&n);

	for (i=0;i<n;i++)
	{
	for (j=0;j<n;j++)
	{
		if((i+j)%2==0)
		printf("\xB0");
	    else
		printf ("\xDB");
	}
	printf ("\n");
}
	getch();
	return 0;
	
}
