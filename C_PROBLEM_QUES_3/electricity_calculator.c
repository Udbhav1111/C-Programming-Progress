#include<stdio.h>

void main(){
    int meter_num, prev_reading, pres_reading, units_consumed;
    float bill_amount;
    char tariff;

    printf("Enter Meter Number: ");
    scanf("%d", &meter_num);

    printf("Enter Previous Meter Reading: ");
    scanf("%d", &prev_reading);

    printf("Enter Present Meter Reading: ");
    scanf("%d", &pres_reading);

    units_consumed = pres_reading - prev_reading;

    printf("Units Consumed: %d\n", units_consumed);

    printf("Enter Tariff Type (D for Domestic, N for Non-Domestic, I for Industrial): ");
    scanf(" %c", &tariff);

    switch(tariff){
        case 'D':
            if(units_consumed <= 100){
                bill_amount = units_consumed * 3.50;
            }
            else if(units_consumed <= 200){
                bill_amount = 100 * 3.50 + (units_consumed - 100) * 4.60;
            }
            else if(units_consumed <= 500){
                bill_amount = 100 * 3.50 + 100 * 4.60 + (units_consumed - 200) * 6.60;
            }
            else{
                bill_amount = 100 * 3.50 + 100 * 4.60 + 300 * 6.60 + (units_consumed - 500) * 7.25;
            }
            break;

        case 'N':
            if(units_consumed <= 100){
                bill_amount = units_consumed * 5.20;
            }
            else if(units_consumed <= 200){
                bill_amount = 100 * 5.20 + (units_consumed - 100) * 6.60;
            }
            else if(units_consumed <= 500){
                bill_amount = 100 * 5.20 + 100 * 6.60 + (units_consumed - 200) * 7.60;
            }
            else{
                bill_amount = 100 * 5.20 + 100 * 6.60 + 300 * 7.60 + (units_consumed - 500) * 8.40;
            }
            break;

        case 'I':
            if(units_consumed <= 100){
                bill_amount = units_consumed * 7.40;
            }
            else if(units_consumed <= 200){
                bill_amount = 100 * 7.40 + (units_consumed - 100) * 8.90;
            }
            else if(units_consumed <= 500){
                bill_amount = 100 * 7.40 + 100 * 8.90 + (units_consumed - 200) * 10.00;
            }
            else{
                bill_amount = 100 * 7.40 + 100 * 8.90 + 300 * 10.00 + (units_consumed - 500) * 11.00;
            }
            break;

        default:
            printf("Invalid Tariff Type\n");
            return 0;
    }

    printf("Bill Amount: %.2f\n", bill_amount);

    //Assuming due date is 15th of every month
    printf("Due Date: 15th of next month\n");

}
