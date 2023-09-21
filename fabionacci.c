#include<stdio.h>
#include<math.h>

int fabio(int n);

int main() {
    printf("%d",fabio(7));
    return 0;

}
int fabio(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    int fabioN1,fabioN2;
    fabioN1=fabio(n-1);
    fabioN2=fabio(n-2);
    int fabioN=fabioN1+fabioN2;
   // printf("%d",n,fabioN);
    return fabioN;
}
