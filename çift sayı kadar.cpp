#include <stdio.h>
#include <conio.h>

int main ()
{
	int i,j;
	
	for (i=1;i<10;i++){
	
		if(i%2!=0)
		printf("%d",i);
	
		else 
		for(j=0;j<i;j++){
		printf("%d",i);
		}

	}

	getch ();
	return 0;
}
