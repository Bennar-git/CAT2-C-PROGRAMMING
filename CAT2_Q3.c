//wages
/*
Name:Benard kimani
Reg no: CT101/G/23293/24
*/

#include <stdio.h> 


int main() {
    
    float hourly_wage;
    float hours_worked;
    float gross_pay;
    float taxes;
    float net_pay;
  
      int overtime_hours;

    
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);

   
    if (hours_worked > 40) {
        overtime_hours = hours_worked - 40;
        hours_worked = 40;
    } else {
        overtime_hours = 0;
    }

    
    gross_pay = (hours_worked * hourly_wage) + (overtime_hours * (hourly_wage * 1.5));

    
    taxes = 0.15 * 600 + 0.20 * (gross_pay - 600);

    
    net_pay = gross_pay - taxes;

    
    printf("Gross pay: $%.2f\n", gross_pay);
    
    printf("Taxes: $%.2f\n", taxes);
    
    printf("Net pay: $%.2f\n", net_pay);



    return 0;
    
}