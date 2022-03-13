/*Write a program find the nCr given n and r.
int input_n_and_r(int *n, int *r)
int ncr(int n, int r);
void output(int n, int r, int result);*/

#include<stdio.h>
int input_n_and_r(int *n , int *r)
{
    printf("enter value of n \n");
    scanf("%d",n);
    printf("enter value of r \n");
    scanf("%d",r);
}
/*     ?????   */

void output(int n, int r, int result)
{
    printf("value of%dC%d=%d\n"n,r,result);
}
int main()
{
    int n,r;
    input_n_and_r(&n,&r);
    int result=
    output(n,r,result);
    return 0;
}
