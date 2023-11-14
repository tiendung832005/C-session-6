#include <stdio.h>
int main(){
	int number;
	print ("Nhap vao cac so nguyen\n");
	scanf("%d", number);
	do{
		if (number == 0){
			break;
		}
		if(number % 3 !=0){
			continue;
		}
		printf ("SO nguyen chia het cho 3 la: %d", number);
		
	}while (1==1);
	
}
