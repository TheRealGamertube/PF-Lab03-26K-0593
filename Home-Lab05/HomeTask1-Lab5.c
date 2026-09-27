#include <stdio.h>
 
int main(void) {
    int status = 0;
    int operation, device, mode;
 
    printf("1.Activate 2.Deactivate 3.Check 4.Toggle 5.Mode\n");
    printf("Operation: ");
    scanf("%d", &operation);
    switch (operation)
    {
        case 1 ... 4:
            printf("1.Lock 2.Alarm 3.CCTV 4.Motion\n");
            printf("Device: ");
            scanf("%d", &device);

            switch (device)
            {
            case 1:
                if (operation == 1)
                {
                    status = status | 1;
                }
                if (operation == 2)
                {
                    status = status & ~1;
                }
                if(operation == 3)
                {
                    status = status ^ 1;
                }
                printf("Lock: %s\n", (status & 1)? "Active" : "Inactive");
                break;

            case 2:
                if (operation == 1)
                {
                    status = status | 2;
                }
                if (operation == 2)
                {
                    status = status & ~2;
                }
                if(operation == 3)
                {
                    status = status ^ 2;
                }
                printf("Alarm: %s\n", (status & 2)? "Active" : "Inactive");
                break;
                
            case 3:
                if (operation == 1)
                {
                    status = status | 3;
                }
                if (operation == 2)
                {
                    status = status & ~3;
                }
                if(operation == 3)
                {
                    status = status ^ 3;
                }
                printf("CCTV: %s\n", (status & 3)? "Active" : "Inactive");
                break;
            
            case 4:
                if (operation == 1)
                {
                    status = status | 4;
                }
                if (operation == 2)
                {
                    status = status & ~4;
                }
                if(operation == 3)
                {
                    status = status ^ 4;
                }
                printf("Motion: %s\n", (status & 4)? "Active" : "Inactive");
                break;
            }
            break;

        case 5:
            printf("1.Home 2.Away 3.Night\n");
            printf("Mode: ");
            scanf("%d", &mode);
 
            switch (mode) {
                case 1: 
                    status = status | 1 | 4;
                     break;
                
                case 2:
                status = status | 1 | 2 | 4 | 8; 
                break;

                case 3:
                status = status | 1 | 2 | 8;
                break;
            }
        break;
    }
    printf("Binary (Motion CCTV Alarm Lock): %d%d%d%d\n", (status >> 3) & 1, (status >> 2) & 1, (status >> 1) & 1, status & 1);
 
    printf("Lock:%s\nAlarm:%s\nCCTV:%s\nMotion:%s\n", (status & 1) ? "On" : "Off", (status & 2) ? "On" : "Off", (status & 4) ? "On" : "Off", (status & 8) ? "On" : "Off");
 
    int armed = (status & 1) && (status & 2) && (status & 4) && (status & 8);
    printf("Fully Armed: %s\n", armed ? "YES" : "NO");
 
    return 0;

    }