#include<stdio.h>
int main(){
	int N,i,A=0;
	printf("N = ");scanf("%d",&N);
	for(i=1;i<=N;i++)
		if(N%i==0)
			A++;
			printf("So %d co %d uoc so.",N,A);
	return 0;		
	
	
}