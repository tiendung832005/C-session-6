#include<stdio.h>
#include<stdlib.h>
int main(){
	do{
		printf("             Breakfast Menu           \n");
		printf("1. Pho tom hum\n");
		printf("2. Pho bo Kobe\n");
		printf("3. Pho ga Viet Nam\n");
		printf("4. Xoi trung thit\n");
		printf("5. Banh mi trung\n");
		printf("6. My tom khong nguoi lai\n");
		printf("7. Thoat");
		int choice;
		printf ("\nMoi ban chon mon theo so tu 1 den 6\n");
	scanf("%d", choice);
	switch(choice){
		case 1:
			printf("Ban vua chon mon Pho tom hum. Vui long doi trong giay lat \n");
			break;
		case 2:
			printf("Ban vua chon mon Pho bo Kobe. Vui long doi trong giay lat \n");
			break;
		case 3:
			printf("Ban vua chon mon Pho ga viet Nam. Vui long doi trong giay lat \n");
			break;
		case 4:
			printf("Ban vua chon mon Xoi trung thit. Vui long doi trong giay lat \n");
			break;
		case 5:
			printf("Ban vua chon mon Banh mi trung. Vui long doi trong giay lat \n");
			break;
		case 6:
			printf("Ban vua chon mon My tom ko nguoi lai. Vui long doi trong giay lat \n");
			break;
		case 7:
			exit;
		default:
			printf ("vui long chon tu 1 den 7");	
		}
	
	}
	while ("Vui long chon tu 1 den 7\n");
}
