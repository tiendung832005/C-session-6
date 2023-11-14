#include<stdio.h>
int main(){
	int number1, number2, number3, sum, max, min, average, exit;
	printf("Moi ban nhap 3 so nguyen bat ki: \n");
	scanf("%d%d%d",&number1, &number2, &number3);
	do{
		printf("           CALCULATOR          \n");
		printf("1. Tong 3 so nguyen \n");
		printf("2. Trung binh cong 3 so nguyen \n");
		printf("3. So lon nhat, so nho nhat trong 3 so: \n");
		printf("4. thoat \n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				sum=number1+number2+number3;
				printf("Tong 3 so nguyen la: %d\n", sum);
				break;
			case 2:
				average=(number1+number2+number3)/3;
				printf("Trung binh cong 3 so nguyen la: %d\n", average);
				break;
			case 3:
				max= number1;
				min=number1;
				if(max<number2){
					max = number2;
					if(max < number3){
						max=number3;
					}
				}
				else if (min>number3){
					min=number3;
					
				}
				printf("So lon nhat, nho nhat trong 3 so la: %d %d\n", max, min);
				break;
			case 4:
				exit;
			default:
				printf("Vui long chon tu 1 den 4");
		}
			
	}while ("Vui long chon tu 1 den 4");
}
