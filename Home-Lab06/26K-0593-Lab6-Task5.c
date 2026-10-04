#include <stdio.h>

int main(void)
{
    int acc_num, curr_hour;

    printf("Enter access number: ");
    scanf("%i", &acc_num);

    while (acc_num != 9999)
    {
        printf("Enter the current hour(24h): ");
        scanf("%i", &curr_hour);

        if (acc_num >= 0 && acc_num <= 15)
        {
            if (curr_hour >= 0 && curr_hour < 24)
            {
                if (curr_hour < 6 || curr_hour >= 22)
                {
                    printf("LATE NIGHT MODE\n");

                    if (acc_num & 8)
                    {
                        printf("Entry Allowed\n");
                    }
                    else
                    {
                        printf("Entry Denied\n");
                    }
                }

                else
                {
                    printf("STANDARD MODE\n");

                    if (acc_num & 1 || acc_num & 2 || acc_num & 4)
                    {
                        printf("Entry Allowed\n");
                    }
                    else
                    {
                        printf("Entry Denied\n");
                    }
                }
            }
            else
            {
                printf("Invalid time entered\n");
            }

            if (acc_num & 4)
            {
                printf("Member has personal trainer access\n");
            }
            else
            {
                printf("Member doesn't have personal trainer access\n");
            }
        }
        printf("Enter access number: ");
        scanf("%i", &acc_num);
    }
}