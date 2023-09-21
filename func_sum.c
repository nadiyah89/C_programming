#include<stdio.h>
int product(float a,int b){
    return a*b;

}
int main(){
float x;
int y;
printf("Enter the decimal number:");
scanf("%f",&x);
printf("Enter the integer:");
scanf("%d",&y);
float result= product(x,y);
printf("The required number is %.2f",result);
return 0;
}



