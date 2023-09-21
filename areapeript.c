#include<stdio.h>

void periarea(int,float *,float *);

int main() {
    int radius;
    float area;
    float pm;
    radius=4;
    periarea(radius,&area,&pm);
    printf("Area = %f & Perimeter = %f",area,pm);
    return 0;
}
void periarea(int radius,float *area,float *perimeter) {
    *area=3.14*radius*radius;
    *perimeter=2*3.14*radius;
}