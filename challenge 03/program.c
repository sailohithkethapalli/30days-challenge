#include <stdio.h>

int main()
{
    float purchase, distance, discountrate;
    float discount, afterdiscount, delivery, finalamount;
    int customer;

    printf("Enter purchase amount: Rs.");
    scanf("%f", &purchase);

    printf("Enter customer type (1=Student, 2=Regular): ");
    scanf("%d", &customer);

    printf("Enter delivery distance in km: ");
    scanf("%f", &distance);

    if (purchase < 0 || distance < 0 ||
        (customer != 1 && customer != 2))
    {
        printf("Invalid input!\n");
        return 1;
    }

    if (customer == 1)
    {
        if (purchase >= 2000)
            discountrate = 15;
        else
            discountrate = 10;
    }
    else
    {
        if (purchase >= 3000)
            discountrate = 8;
        else
            discountrate = 0;
    }


    discount = purchase * discountrate / 100;
    afterdiscount = purchase - discount;

    if (distance <= 5)
        delivery = 40;
    else if (distance <= 15)
        delivery = 70;
    else
        delivery = 100;

  
    finalamount = afterdiscount + delivery;

    printf("\n===== SMART CART BILL =====\n");
    printf("Purchase Amount       : Rs. %.2f\n", purchase);
    printf("Discount Rate         : %.2f%%\n", discountrate);
    printf("Discount Amount       : Rs. %.2f\n", discount);
    printf("Amount After Discount : Rs. %.2f\n", afterdiscount);
    printf("Delivery Charges      : Rs. %.2f\n", delivery);
    printf("-----------------------------\n");
    printf("Final Payable Amount  : Rs. %.2f\n", finalamount);
    printf("=============================\n");

    return 0;
}
