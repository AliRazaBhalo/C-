#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float gpa;
};
void printInfo(struct student s1);

int main()
{
    struct student s1 = {"Ali Raza", 1554, 3.9};
    struct student s2 = {"Raza", 1555, 3.9};
    struct student s3 = {"Ali ", 1556, 3.9};
    printInfo(s1);
    printInfo(s2);
    printInfo(s3);
}

void printInfo(struct student s1)
{
    printf("Student Name = %s\n", s1.name);
    printf("Student Roll = %d\n", s1.roll);
    printf("Student GPA = %5.4f\n", s1.gpa);
}