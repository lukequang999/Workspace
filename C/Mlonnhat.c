#include<stdio.h>
int main(){
	int m=0,N,S=1;
	printf("N = ");scanf("%d",&N);		

	while((S+m)<N){
		S += ++m;
}
	printf("m lon nhat = %d",m);
	return 0;
}