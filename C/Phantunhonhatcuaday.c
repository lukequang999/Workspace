#include <stdio.h>
 
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}
int max(int a[], int n)
{
    float max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    float min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main()
{
    int a[1000];
    int n;
    printf("\nN = ");
    scanf("%d", &n);
    nhap(a, n);
    printf("\nGia tri nho nhat trong A: = %g", min(a, n));
    return 0;
}