#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,total,average,min,max,choice;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("Nhap c:");
	scanf("%d",&c);
	do{
		printf("             Menu              \n");
		printf("1.Tong 3 so nguyen\n");
		printf("2.Trung binh cong cua 3 so nguyen\n");
		printf("3.So lon nhat,nho nhat trong 3 so\n");
		printf("4.Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				total=a+b+c;
				printf("Ban vua chon tong 3 so nguyen la:%d\n",total);
				break;
		    case 2:
		    	average=a+b+c/3; 
		    	printf("Ban vua chon trung binh cong cua 3 so nguyen la:%d\n",average);
				break;
			case 3:
				if(a>b && a>c){
					max=a;
				}else if(b>a && b>c){
					max=b;
				}else{
					max=c;
				}
				printf("Ban vua chon so lon nhat trong 3 so la:%d\n",max); 
				if(a<b && a<c){
					min=a;
				}else if(b<a && b<c){
					min=b;
				}else{
					min=c;
				}
				printf("Ban vua chon so nho nhat trong 3 so la:%d\n",min);
				break;
			case 4:
				exit(4);
			default:
				printf("Vui long chon tu 1-4\n");
				break;
			
		}
	}while(choice !=4);
}
