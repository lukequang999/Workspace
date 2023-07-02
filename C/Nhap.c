#include <stdio.h> 
#include<math.h>
int main() {
	int N ;
	printf("N = ") ; scanf("%d",&N) ;
	float a[N] ;
	for (int i = 0; i < N; i++)
	{
		printf("a[%d] = ",i) ; scanf("%g",&a[i]) ;
	}
	    float min = a[0];
    for (int i = 0; i < N; i++)
        if (min >= a[i]) {
            min = a[i];
            }
	printf("Gia tri nho nhat trong A: %g",min) ;
}
