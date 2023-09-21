#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a,float b);

/*int main() {
    float side=4;
    printf("area is %f",squareArea(side));
    return 0;
}
float squareArea(float side) {
    return side*side;
}    
int main ()  {

    float radius=3;
    printf("area is %f",circleArea(radius));
    return 0;
}



float circleArea(float radius) {
    return 3.14*radius*radius;
}  */

int main() {
    float a=6.0;
    float b=8.0;
    printf("area is %f",rectangleArea(a,b));
    return 0;
}
float rectangleArea(float a,float b) {
return a*b;
}