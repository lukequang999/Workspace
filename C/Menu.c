#include<stdio.h>
int main(){
	int A;
	do {
	printf("[1] Buoi sang\n[2] Buoi trua\n[3] Buoi chieu\n[4] Buoi toi\n[5] Ket thuc");
	printf("\nChon chuc nang: ");scanf("%d",&A);
		if(A==1){
	
			printf("Chao buoi sang");
			printf("\n");
			}
		
		else if(A==2){
			printf("Den gio nghi trua roi, di an thoi");
			printf("\n");
		}
			
		else if(A==3){
			printf("Het gio lam viec, ve nha nao");
			printf("\n");
		}
			
		else if(A==4){
			printf("Chuan bi ngu buoi toi");
			printf("\n");
		}
		
		else if(A==5){
		
			printf("Chuc ngu ngon");
			printf("\n");}
		
		else {
			continue;
		}}
			
	while ( A!=5);
	return 0;						

}