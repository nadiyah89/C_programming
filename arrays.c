#include<stdio.h>

int main() {
    int marks[3];
    printf("Enter the marks in Physics:");
    scanf("%d",&marks[0]);
    printf("Enter the marks in Chemistry:");
    scanf("%d",&marks[1]);
    printf("Enter the marks in Math:");
    scanf("%d",&marks[2]);

    printf("Physics=%d\nChemistry=%d\nMath=%d",marks[0],marks[1],marks[2]);
    return 0;
}