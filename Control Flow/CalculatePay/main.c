/*
C Program that calculates weekly pay. The program should ask the user to enter the number of hours
worked in a week via the keyboard. The program should display as output the gross pay, taxes, and net pay.
The following assumptions should be made:
 -Basic Pay Rate = $12.00/hr
 -Overtime(more than 40 hrs) = time and a half
 -Tax Rate:
    -15% of the first $300
    -20% of the next $150
    -25% of the rest
*/

#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
    // declare variables
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    // get the input
    printf("Enter the number of hours worked this week: ");
    scanf("%d", &hours);

    // calculate the gross pay
    if (hours <= 40){
        grossPay = hours * PAYRATE;
    } else {
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }

    // calculate the taxes
    if (grossPay <= 300){
        taxes = grossPay * TAXRATE_300;
    } else if (grossPay > 300 && grossPay <= 450){
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    } else {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;
    }

    // calculate the net pay
    netPay = grossPay - taxes;

    printf("Gross Pay: %.2f\n", grossPay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net Pay: %.2f\n", netPay);

    return 0;
}
