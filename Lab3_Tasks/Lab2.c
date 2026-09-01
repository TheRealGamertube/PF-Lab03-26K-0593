#include <stdio.h>
int main()
{
    int age;
    float height;
    printf("Enter your age and height: ");
    scanf("%i %f", &age, &height);
    printf("You are %d years old and %.2f meters tall. \n", age, height);
    return 0;
}
