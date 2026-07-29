#include<stdio.h>
void main()
{
int n,i,sum;
printf("Enter the number");
scanf("%d",&n);
sum=0;
i=1;
while(i<=n)
{
sum=sum+i;
i=i+1;
}
printf("The result is:%d",sum);
}
