#include<stdio.h> 
int main(){
	int i,n;
	printf("Nhap so n :");
	scanf("%d",&n);
	if(n>=1 && n<=9){
		printf("Bang cuu chuong %d:\n",n);
		for(i=1;i<=9;i++){
			printf("%d*%d=%d\n",n,i,n*i);
		}
	}else{
		printf("Ban nhap khong hop le . Vui long nhap lai\n");
	}
	return 0;
	
}
