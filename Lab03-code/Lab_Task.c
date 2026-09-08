//roll, name ,3 course marks
#include <stdio.h>
int main()
{
    char name[50];
    char roll[20];
    float total, marks1, marks2, marks3, percentage;
    printf("Input your name: ");
    fgets(name, 20, stdin);
    printf("Input your roll no: ");
    fgets(roll, 10, stdin);
    printf("Enter your marks for 3 subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    total = marks1 + marks2 + marks3;
    percentage = (total/300.0f) * 100.0f;
    printf("Name: %s", name);
    printf("Roll Num: %s", roll);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}
