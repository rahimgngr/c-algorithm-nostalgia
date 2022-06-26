#include <stdio.h>
#include <conio.h>

int fak(int sayi,int a[]){
		
		if(sayi % 2 != 0){
			for(int i = 0; i< sayi; i++){
			sayi += 1;
			sayi /= 2;
			a[i] = sayi - 1;
			a[i+1] = sayi;
		}
		}	
		else{
			sayi /= 2;
			a[0] = sayi - 1;
			a[1] = sayi + 1;
		}	
		if(a[0] && a[1] >= 10){
			fak(sayi,a);
		}
		return sayi;
}
int main(){
	int sayi,i,a[10];
	printf("Olcmek Istenilen Agirlik :\n");
	scanf("%d",&sayi);
	fak(sayi,a);
		printf ("Kullanilan agirliklar %d %d ",a[0],a[1]);
		
		return 0;
}


