#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	int choice,total,i,j,signal,accumulation,love,surplus;
	printf("Nhap so a:");
	scanf("%d",&a);
	printf("Nhap so b:");
	scanf("%d",&b);
	do{
		printf("         Menu              \n");
		printf("1.Tong 2 so\n");
		printf("2.Hieu 2 so\n");
		printf("3.Tich 2 so\n");
		printf("4.Thuong 2 so\n");
		printf("5.So du trong phep chia 2 so\n");
		printf("6.Uoc chung lon nhat\n");
		printf("7.Boi chung nho nhat\n");
		printf("8.Thoat\n");
		printf("Lua chon cua ban :"); 
		scanf("%d",&choice);
		switch(choice){
			case 1:
				total=a+b;
				printf("Ban vua chon Tong 2 so la:%d\n",total);
				break;
			case 2:
				signal=a-b;
				printf("Ban vua chon Hieu 2 so la:%d\n",signal);
				break;
			case 3:
				accumulation=a*b;
				printf("Ban vua chon Tich 2 so la:%d\n",accumulation);
				break;
			case 4:
				love=a/b;
				printf("Ban vua chon Thuong 2 so la:%d\n",love);
				break;
			case 5:
				surplus=a%b;
				printf("Ban vua chon So du trong phep chia 2 so la:%d\n",surplus);
				break;
			case 6:
				 for (i=a;i>=1;i--){
				 	if(i%a==0 && i%b==0){
				 		printf("Ban vua chon Uoc chung lon nhat cua %d va %d la:%d\n",a,b,i);
				 		break;
					 }
				 }
				break; 
			case 7:
				for (j=a;j<=a*b;j++){
					if(j%a==0 && j%b==0){
						printf("Ban vua chon Boi chung nho nhat cua %d va %d la:%d\n",a,b,j);
						break;
					
					 }		
				 }
				break; 
			case 8:
				exit(8);
			default:
				printf("Vui long chon tu 1-8\n");
				break;
		}
		 
	}while(choice != 8);
}
