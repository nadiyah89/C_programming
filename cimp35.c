#include<stdio.h>

int main() {
    char name[30];
    printf("write the name");
    scanf("%s",name);
    
    char x[]=strrev(name);
    
    if(x==name)
    printf("It is a palindrome");
    else
    printf("Not a palindrome");
}