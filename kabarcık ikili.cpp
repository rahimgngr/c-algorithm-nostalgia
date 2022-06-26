#include <stdio.h>

int main(){
	int a[]= {7,8,9,1,5,6,2,0,4};
	int aranan;
	int eb = 10;
	int ek = -1;
	int bayrak = 0;
	int i,j,temp;
	
	scanf ("%d",&aranan);
	
	for(i=0;i<9;i++){
		for (j=1;j<9-i+1;j++){
			if (a[j-1] > a[j]){
				temp = a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		
		}
	}
	
	while (eb - ek > 1){
		int bakilan = (eb + ek) / 2;
		if (a[bakilan] == aranan){
		bayrak = 1;
		printf ("bulunan : %d",bakilan);
		
		break;
	}
		else if(a[bakilan] < aranan){
			ek = bakilan;
		}
		else {
			eb = bakilan;
		}
	}
	if (bayrak == 0){
		printf ("sayi bulunamadi\n");
	}
	


}
