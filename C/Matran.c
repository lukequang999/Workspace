#include<stdio.h>
int main()
{
    int N,M,i,k;
    printf("M = ");
    scanf("%d",&M);
    printf("N = ");
    scanf("%d",&N);
    if (M>0 && N>0)
	    for(i = 1; i <= M; i++)    {
	        for( k = 1 ; k <= N; k++){
	            if(k==1)
					printf("0");
				else
					printf(" 0");
	        }
        printf("\n");
    }
    return 0;
}