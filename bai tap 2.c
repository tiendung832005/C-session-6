#include<stdio.h>
#include<stdlib.h>
int main(){
	int number1,number2,i, step,sum,gcd, allow,mul, division, surplus, lcm;
	printf ("Moi ban nhap 2 so nguyen bat ki: \n");
	scanf("%d%d", &number1, &number2);
	do{
		printf("         CALCULATION         \n");
		printf("1. Tong 2 so\n");
		printf ("2. Hieu 2 so\n");
		printf("3. tich 2 so\n");
		printf("4. Thuong 2 so\n ");
		printf("5. so du trong phep chia 2 so\n");
		printf("6. Uoc chung lon nhat\n");
		printf("7. Boi chung nho nhat\n");
		printf("8. Thoat\n");
		int choice;
		printf ("Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:
				sum=number1 + number2;
				printf ("Tong hai so la: %d+%d=%d\n", number1, number2, sum);
				break;
			case 2:
				allow=number1 - number2;
				printf ("Hieu hai so la: %d-%d=%d\n", number1, number2, allow);
				break;
			case 3:
				mul=number1*number2;
				printf("Tich hai so la: %d*%d=%d\n", number1, number2, mul);
				break;
			case 4:
				division=number1/number2;
				printf("Thuong hai so la: %d/%d=%d\n", number1, number2, division);
				break;
			case 5:
				surplus=number1%number2;
				printf("So du trong phep chia hai so la: %d % %d=%d", number1, number2, surplus);
				break;
			case 6:
				for (i =1; i<=number1  || i<=number2;i++){
					if (number1 % i==0 && number2 % i==0);
					gcd = i;
				}
				printf("Uoc chung lon nhat cua 2 so la: %d", gcd);
				break;
			case 7:
				if(number1>number2){
					i = step = number1;
				}else{
					i = step = number2;
				}
				break;
			case 8:
				exit;
			default:
				printf("Vui long chon tu 1 den 8");	
		}
		
	}
	while ("Vui long chon tu 1 den 8");
}
