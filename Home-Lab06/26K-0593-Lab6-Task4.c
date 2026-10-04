#include <stdio.h>

int main(void)
{
    int n_containers, weight, c_type, track_code;

    printf("Input number of containers to be processed: ");
    scanf("%i", &n_containers);

    for (int i = 1; i <= n_containers; i++)
    {
        printf("Enter the container's weight in kilograms: ");
        scanf("%i", &weight);

        printf("Enter the container's carrgo type:\n1.General Goods\n2.Hazardous Materials\n3.Refrigerated Goods\n");
        scanf("%i", &c_type);

        if (c_type == 1 && weight <= 20000)
        {
            printf("Loaded\n");
        }
        else if (c_type == 2 && weight <= 15000 && i % 2 != 0)
        {
            printf("Loaded\n");
        }
        else if (c_type == 3 && weight <= 18000)
        {
            printf("Loaded\n");
        }
        else
        {
            printf("Not loaded\n");
        }

        track_code = (weight % 97) % 100;

        printf("Tracking Code: %i\n", track_code);
    }
}