#include<stdio.h>
#include<math.h>
int main ()
{
    float DiemMieng, MotTiet, HocKy, TB ;
    printf("Diem Mieng = ") ; 
    scanf("%g",&DiemMieng) ;
    printf("Diem Mot Tiet = ") ; 
    scanf("%g",&MotTiet) ;
    printf("Diem Hoc Ky = ") ; 
    scanf("%g",&HocKy) ;
    TB=(DiemMieng+MotTiet*2+HocKy*3) / 6 ;
    printf("Diem TB = %g ",TB) ;
}