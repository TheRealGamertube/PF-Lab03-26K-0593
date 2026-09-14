#include <stdio.h>

int main()
{
    int units, bill = 0, unit_remainder;
    
    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input.\n");
        return 1;
    }
    
    unit_remainder = units;
    if (unit_remainder > 100) {
        bill += 100 * 5;
        unit_remainder -= 100;
    } else {
        bill += unit_remainder * 5;
        unit_remainder = 0;
    }

    if (unit_remainder > 100) {
        bill += 100 * 8;
        unit_remainder -= 100;
    } else if (unit_remainder > 0) {
        bill += unit_remainder * 8;
        unit_remainder = 0;
    }

    if (unit_remainder > 200) {
        bill += 200 * 12;
        unit_remainder -= 200;
    } else if (unit_remainder > 0) {
        bill += unit_remainder * 12;
        unit_remainder = 0;
    }

    if (unit_remainder > 0) {
        bill += unit_remainder * 15;
    }

    printf("Total Bill: %d\n", bill);
    return 0;
}