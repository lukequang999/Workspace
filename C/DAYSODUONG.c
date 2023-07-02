#include<stdio.h>
int main() {
    int i=0, a ;
    printf("Hay nhap mot so duong: ") ; scanf("%d",&a) ;
    while (a>0)
    {
        printf("Hay nhap mot so duong: ") ; scanf("%d",&a) ;
        i++ ;
        if(a<=0) 
            break;
        }
        printf("Ban da nhap %d so nguyen duong!",i) ;
    }