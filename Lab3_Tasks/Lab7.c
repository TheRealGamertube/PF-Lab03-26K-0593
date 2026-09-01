#include <stdio.h>
int main()
{
    double a = 2.5555588889999;
    printf("before setting the precision\nnumber is: %1f", a);
    printf("after setting the precision\nnumber is: %.14f", a);
}
