#include<stdio.h>
void swap(int ,int);
void Swapping(int *,int *);

int main() {
    int a=5;
    int b=3;
    
   // Swapping(&a,&b);
    swap(a,b);
    printf("a = %d and b = %d",a,b);
    return 0;
}
/*void Swapping(int *a,int *b) {
    int t;
    t=*b;
    *b=*a;
    *a=t;
} */
void swap(int a,int b) {
    int t;
    t=b;
    b=a;
    a=t;
}