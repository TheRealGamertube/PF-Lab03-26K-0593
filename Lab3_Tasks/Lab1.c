#include <stdio.h>

int main()
{
    int x = 45, y = 90;
    printf("Printing decimal data: %d\n", x);
    printf("Printing Integer data: %i\n", y);

    float f = 12.67;
    printf("Printing floating point data: %f\n", f);

    printf("Printing in scientific notation: %e\n", f);

    int a = 67;
    printf("Printing data in Octal format: %o\n", a);

    printf("Printing data in Hex format: %x\n", a);

    float z = 3.8;
    printf("Float value of y is: %g\n", z);

    printf("Address value of y in Hexadecimal form is: %p\n", &y);

    char str[] = "Hello World";
    printf("%s\n", str);

    printf("Shift to the right 20 characters: %20s\n", str);
}
