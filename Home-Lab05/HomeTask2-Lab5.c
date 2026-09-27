#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int department, theory, practical, pass_theory, pass_practical;
    float att_perc, pass_att_perc;
    char seat_cat;
    bool pass = false, distinction = false;

    printf("Input the student's department:\n1.Computer Science\n2.Electrical Engineering\n3.Business Administration\n4.Mathematics\n");
    scanf("%i", &department);

    printf("Input the student's theory marks, practical marks and attendance percentage: ");
    scanf("%i %i %f", &theory, &practical, &att_perc);
    if (theory <= 100 && practical <=100 && att_perc <= 100)
    {
        printf("-------------------Final Report-------------------\nSelected Department: ");
        switch (department)
        {
        case 1:
            pass = (theory >=50 && practical >=40 && att_perc >= 75)? true : false;
            printf("Computer Science");
            pass_theory = 50, pass_practical = 40, pass_att_perc = 75;
            break;
            
        case 2:
            pass = (theory >=55 && practical >=45 && att_perc >= 75)? true : false;
            printf("Electrical Engineering");
            pass_theory = 55, pass_practical = 45, pass_att_perc = 75;
            break;

        case 3:
            pass = (theory >=50 && practical >=35 && att_perc >= 80)? true : false;
            printf("Business Administration");
            pass_theory = 50, pass_practical = 35, pass_att_perc = 80;
            break;
        
        case 4:
            pass = (theory >= 60 && practical >=40 && att_perc >= 75)? true : false;
            printf("Mathematics");
            pass_theory = 60, pass_practical = 40, pass_att_perc = 75;
            break;

        default:
            printf("Invalid department number entered should be from 1-4");
            break;
        }

        distinction = (theory >= 85 && practical >= 80 && att_perc >= 90)? true: false;
        
        if (theory % 3 == 0)
        {
            seat_cat = 'A';
        }
        else if (theory % 3 ==1)
        {
            seat_cat = 'B';
        }
        else
        {
            seat_cat = 'C';
        }

        printf("\nTheory Marks: %i\nPractical Marks: %i\nAttendance Percentage: %.2f%%\nPassing Requirements: Theory Marks >= %i, Practical Marks >= %i, Attendance Percentage >= %.2f\nDistinction Eligibility: ", theory, practical, att_perc, pass_theory, pass_practical, pass_att_perc);
        printf((distinction == true)? "Eligible for distinction": "Ineligible for distinction");
        printf("\nFinal Examination Result: %s", (pass == true)? "PASS": "FAIL");
        printf("\n--------------------------END OF REPORT------------------------");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}