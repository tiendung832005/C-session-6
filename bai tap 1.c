#include<stdio.h>
int main(){
	int number,i;
	printf ("Nhap so nguyen n \n");
	scanf("%d",&number);
	for (number = 1; number<=9; number++){
		for (i=1; i<=10; i++){
			int mul = number*i;
			printf("%d*%d=%d\n",number, i, mul);
			
		}
		}

}
