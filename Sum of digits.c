#include<stdio.h>
void main()
{
  int n,m,sum=0;
printf("Enter the value of n");
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("the sum is:%d",sum);
return 0;
}
