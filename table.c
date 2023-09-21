#include<stdio.h>
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
int i,pro=1;
for(i=1;i<=10;i++)
{
    pro=n*i;
    printf("%d * %d =  %d   \n",n,i,pro);
}
return 0;
}