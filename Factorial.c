#include<stdio.h>
void main()
{
  int i,fact=1,n;
ptintf("Enter the number");
scanf("%d",&n);
do
{
fact=fact*i;
i=i+1;
}
  while(i<=n);
printf("the factorial is:%d",fact);
}
