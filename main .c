#include <stdio.h>

int main(){
    double num1;
    double num2;
    double result=0;
    char operator;
    printf("Enter a number.\n");
    scanf ("%lf",&num1);
    printf("Enter a number.\n");
    scanf("%lf",&num2);
    printf("Enter an operator(+,-,/,*):\n");
    scanf(" %c",&operator);
    switch(operator){
        case'+':
            result=num1+num2;
            break;
        case'-':
            result=num1-num2;
            break;
        case'/':
            if (num2==0){
                printf("You cannot divide by zero.\n");
                return 0;
            }
            else{
                result=num1/num2;
            }

            break;
        case'*':
            result=num1*num2;
            break;
        default:
            printf("Please enter a valid operator.\n");
            return 0;
    }


    printf("result:%.2lf\n",result);
    return 0;







}








