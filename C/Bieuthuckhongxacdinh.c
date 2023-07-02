#include<stdio.h>
#include<math.h>
int main(){
	float x,A;
	printf("Nhap x = ");scanf("%f",&x);

	if(x==3)
		printf("Bieu thuc khong xac dinh");
	else if(x<=0)	
		printf("Bieu thuc khong xac dinh");
		
	else
	{
		A = (1+sqrt(x))/(x-3);
		printf("Ket qua: %g",A);
	}
			
return 0;
}