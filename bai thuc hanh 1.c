#include<stdio.h>
int main(){
	int sum = 0,i;
	printf("cac so chan tu 1 den 10 la: \n");
	for(i = 1; i < 10; i++){
		if (i % 2 ==0){
			printf("%d", i);
			sum += i;
		}
	}
	printf ("\nTong cac so chan trong khoang 1 - 10 la: %d\n", sum);
	
}
