#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int prod_cat, customer_cat, order_amount, distance, delivery_charge, priority_charge, order_num, total_payable;
    float discount, final_amount, disc_amount;
    char proc_group;
    bool free_shipping = false, priority_delivery = false;

    printf("Enter the product category:\n1.Electronics\n2.Clothing\n3.Books\n4.Household\n");
    scanf("%i", &prod_cat);

    printf("Enter the customer category:\n1.Regular\n2.Premium\n3.Corporate\n");
    scanf("%i", &customer_cat);

    printf("Input the order amount: Rs. ");
    scanf("%i", &order_amount);

    printf("Input the delivery distance: ");
    scanf("%i", &distance);

    printf("Input the order number: ");
    scanf("%i", &order_num);

    switch (prod_cat)
    {
    case 1:
        switch (customer_cat)
        {
        case 1:
            discount = 5;
            break;
        case 2:
            discount = 10;
            break;
        case 3:
            discount = 15;
            break;

        default:
            printf("Invalid customer category should be 1-3");
            break;
        }
        break;

    case 2:
        switch (customer_cat)
        {
        case 1:
            discount = 10;
            break;
        case 2:
            discount = 15;
            break;
        case 3:
            discount = 20;
            break;

        default:
            printf("Invalid customer category should be 1-3");
            break;
        }
        break;

    case 3:
        switch (customer_cat)
        {
        case 1:
            discount = 8;
            break;
        case 2:
            discount = 12;
            break;
        case 3:
            discount = 18;
            break;

        default:
            printf("Invalid customer category should be 1-3");
            break;
        }

        break;

    case 4:
        switch (customer_cat)
        {
        case 1:
            discount = 7;
            break;
        case 2:
            discount = 14;
            break;
        case 3:
            discount = 20;
            break;

        default:
            printf("Invalid customer category should be 1-3");
            break;
        }

        break;

    default:
        printf("Invalid product category should be 1-4");
        break;
    }
    disc_amount = order_amount * ((discount)/100);
    final_amount = order_amount - disc_amount;

    if (final_amount >= 5000 || customer_cat == 2 || customer_cat == 3)
    {
        free_shipping = true;
    }
    else
    {
        delivery_charge = distance * 10;
    }
    if ((customer_cat == 2 || customer_cat == 3) && order_amount >= 10000)
    {
        priority_delivery = true;
        priority_charge = 500;
    }
    else
    {
        priority_charge = 0;
    }
    if (order_num % 4 == 0)
    {
        proc_group = 'A';
    }
    else if (order_num % 4 == 1)
    {
        proc_group = 'B';
    }
    else if (order_num % 4 ==2)
    {
        proc_group = 'C';
    }
    else
    {
        proc_group = 'D';
    }

    total_payable = final_amount + delivery_charge + priority_charge;

    printf("----------------------Final Receipt----------------------\nProduct Category: %i\nCustomer Category: %i\nOrder Amount: %i\nDiscount Percentage: %.1f\nDiscount Amount: %.2f\nFinal payable amount: %.2f\nDelivery Distance: %i\n", prod_cat, customer_cat, order_amount, discount, disc_amount, final_amount, distance);
    printf("Shipping status: %s", (free_shipping? "Free": "Charged"));
    printf("\nDelivery Charges: %i\nPriority Delivery status: %s\n", delivery_charge, (priority_delivery)? "Priority delivery applied":"Not eligible for priority delivery");
    printf("Priority Charges: %i\nProcessing Group: %c\nTotal Payable Amount: %i", priority_charge, proc_group, total_payable);
    printf("\n-------------------------------------------------------");
    


    return 0;
}