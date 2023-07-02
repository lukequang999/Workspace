#include <stdio.h>
int main() {
	int N;
	printf("N = ");scanf("%d",&N);
    if(N%400==0) {
			printf("%d la nam nhuan",N);
	}
    else{
		if(N%4==0 && N%100!=0)
			printf("%d la nam nhuan",N);
        else  
			printf("%d khong phai nam nhuan",N);
    }
	return 0;
}