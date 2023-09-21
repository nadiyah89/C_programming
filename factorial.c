#include<stdio.h>

int fact(int);

int main() {
int num;
int factorial;
printf("Enter the factorial:");
scanf("%d",&num);
factorial=fact(num);
printf("The factorial of %d! is %d",num,factorial);
return 0;
}
int fact(int num) {
    int x;
    int factorial=1;
    for(x=1;x<=num;x++)
    factorial=factorial*x;
    return factorial;
}