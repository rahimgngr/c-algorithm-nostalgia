#include <stdio.h>
#include <conio.h>

int boyut(void){

	int i,j,a;
	printf ("Sayiyi giriniz:\n");
	scanf ("%d",&a);
	
	for(i=0;i<a;i++) {
		for (j=0;j<a;j++){
		
		printf ("*");
		
		}
	printf ("\n");
	}



}


int main(){


printf ("%d",boyut());


	getch ();
	return 0;
}
