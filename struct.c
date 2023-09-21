#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main() {
    struct student S1;
    S1.roll=2345;
    S1.cgpa=7.9;
    strcpy(S1.name,"ali");

    printf("Student Name = %s\n",S1.name);
    printf("Student cgpa = %f\n",S1.cgpa);
    printf("Student roll no = %d",S1.roll);

    struct student S2;
    S2.roll=2342;
    S2.cgpa=9.9;
    strcpy(S2.name,"babar");

    printf("\nStudent Name = %s\n",S2.name);
    printf("Student cgpa = %f\n",S2.cgpa);
    printf("Student roll no = %d",S2.roll);

    struct student S3;
    S3.roll=2340;
    S3.cgpa=8.9;
    strcpy(S3.name,"maqsood");

    printf("\nStudent Name = %s\n",S3.name);
    printf("Student cgpa = %f\n",S3.cgpa);
    printf("Student roll no = %d",S3.roll);

    return 0;

}