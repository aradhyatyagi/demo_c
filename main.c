/******************************************************************************
Dated:01/04/2024
Program for swapping values of two variables.
By-Aradhya Tyagi
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nValue of a after swapping=%d\n",a);
    printf("Value of b after swapping=%d",b);
    
    return 0;
}
