#include <stdio.h>
#include <math.h>

int main()
{ 	 
    float N;
    printf("N = ");
    scanf("%f", &N);
    float S = 0;
    while(N--)
    {
        S = sqrt((N + 1) + S);
    }
    printf("F(n) = %.6g", S);
    return 0;
}