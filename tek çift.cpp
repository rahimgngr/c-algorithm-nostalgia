#include <stdio.h>
#include <conio.h>


int main()

{
	
		int a,b;
	printf ("sayi girisi yap :");	
		scanf("%d" ,&a);
		b=a%2;	
	
	if (b==0)
	  printf ("%d cifttir",a);
	else
	   printf("%d tektir",a);

		getch();
			return 0;
	   
}
