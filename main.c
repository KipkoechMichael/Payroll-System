/*
Project: Payroll System
Author:  Kipkoech Michael Kiplangat
Date:    October
Compiler:GCC
Language:C99
Licence: MIT
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable Declaration
    char name[100],pin[10];
    int emp_no,hours;
    int normal_pay;
    float overtime_pay,tax,gross,net;
    const int rate = 1000;
    printf("\tGitonga\'s Factory Payroll System\n");


    printf("Employee name:");
    gets(name);
    printf("KRA PIN:");
    gets(pin);
    printf("Employee number:");
    scanf("%d",&emp_no);
    printf("Hours Worked");\
    scanf("%d",&hours);

    //computation
    if (hours > 40)
    {
        normal_pay = rate*40;
        overtime_pay = (hours+40)*1.5*rate;
    }
    else {
        normal_pay = rate*hours;
        overtime_pay = 0;
    }
    gross = normal_pay + overtime_pay;
    tax = 0.3 * gross;
    net = gross - tax;

    //output
    printf("Employment No: %d\n", emp_no);
    printf("Employment Name: %s\n", name);
    printf("Employment Pin: %s\n", pin);
    printf("Employment Pay: %d\n", normal_pay);
    printf("Employment Pay: %.2f\n", overtime_pay);
    printf("Employment Paid: %.2f\n", tax);
    printf("Employment Income: %.2f\n", net);
    return 0;
}
