#include<stdio.h>
int main(){
	float A,B,C,X=0;
	printf("A = "),scanf("%f",&A);
	printf("B = "),scanf("%f",&B);
	printf("C = "),scanf("%f",&C);
		if(A>B){
			if(B>C)
				X = B;
			else
				X = C;
		}
			
	
		else if(B>C){
			if(C>A)
				X = C;
			else
				X = A;
		}
		else{
			if(A>B)
				X = A;
			else
				X = B;		
			
		} 
						
	printf("X = %g",X);
	return 0;
}