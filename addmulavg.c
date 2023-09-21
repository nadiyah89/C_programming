#include<stdio.h>

int Dowork(int a,int b,int *sum,int *mult,int *avg);

int main() {
    int a=12345;
    int b=5463 ;

    int sum,mult,avg;
    Dowork(a,b, &sum, &mult, &avg);
    printf("sum = %d\nmult = %d\navg = %d",sum,mult,avg);
    return 0;
}
int Dowork(int a,int b,int *sum,int *mult,int *avg) {
    *sum=a+b;
    *mult=a*b;
    *avg=(a*b)/2;
     
}