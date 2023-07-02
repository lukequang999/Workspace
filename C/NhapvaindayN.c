#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    int N ;
    printf("N = ") ; scanf("%d",&N) ;
    int A[N] ;
    int SoAm = 0 ;
    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ",i) ; scanf("%f",&A[i]) ;
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0 )
        {
            SoAm++ ;
        }
        
    }
    printf("Day A: ") ;
    for (int i = 0; i < N; i++)
    {
        printf("%d",A[i]) ;
    }
    printf("\nSo so am trong A: %d",SoAm) ;
}