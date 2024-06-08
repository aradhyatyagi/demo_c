/******************************************************************************

BINARY SEARCH 

Created by: Aradhya Tyagi

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
void main(){
    int a[5]={10,20,30,40,50};
    int mid,l=1,h=5,found=0,item;
printf("Enter the element");
scanf("%d",&item);
while(l<=h)
{
    mid=(l+h)/2;
    if(a[mid]==item)
    {
    found=1;
    break;
    }
    if(a[mid]<item)
    l=mid+1;
    else 
    h=mid-1;
}
if (found==1)
{
    printf("Item is at %d",mid);
}
else
printf("Item not found");

getch();
}
