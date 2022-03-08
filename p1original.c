/*Write a program to find sum of two fractions
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1,int den1, int num2, int den2, int *num3, int *den3);
void output(int num1, int den1, int num2, int den2, int num3, int den3);
input:*/

#include<stdio.h>
void input(int*num1, int *den1,, int *num2, int *den2)
{
    printf("enter the numerator and denominator of thr first fraction \t");
    scanf("%d%d",num1,den1);
    printf("enter the numerator and denominator of the second fraction\t");
    scanf("%d%d",num2,den2);
}

void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
    *num3=num1*den2+num2*den1;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
    printf("%d/%d+%d/%d is %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
    int num1,nnum2,num3,den1,den2,den3;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1.num2,den2)
    output(num1,den1,num2,den2,num3,den3);
    return 0;
    
}