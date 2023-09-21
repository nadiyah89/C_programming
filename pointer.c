#include<stdio.h>
#include<math.h>

void powerfact(int ,int ,int *,int *) ;

int main() {
    int a,b,fact,power;
    a=9;
    b=2;
    powerfact(a,b,&power,&fact);
    printf("a raised to power b = %d and factorial = %d",power,fact);
    return 0;
}
void powerfact(int a,int b,int *power,int *fact) {
    *power=pow(a,b);
    int i;
    *fact=1;
    for(int i=1;i<=a;i++) {
        *fact=*fact*i;
    }

}