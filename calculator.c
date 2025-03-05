#include<stdio.h>

static double addition(double num1, double num2);
static double subtraction(double num1, double num2);
static double multiplication(double num1, double num2);
static double division(double num1, double num2);
int main(){
    
    char operator;
    double num1;
    double num2;
    double result;

    //Prompt the user for inputs
    printf("\nPlease Enter the operator: ");
    scanf("%c",&operator);
    printf("Please Enter the first number: ");
    scanf("%lf",&num1);
    printf("Please Enter the second number: ");
    scanf("%lf",&num2);

    switch(operator){
        case '+':
            result = addition(num1, num2);
            printf("\nAnswer: %.2f \n",result);
            break;
        case '-':
            result = subtraction(num1, num2);
            printf("\nAnswer: %.2f \n",result);
            break;
        case '*':
            result = multiplication(num1, num2);
            printf("\nAnswer: %.2f \n",result);
            break;
        case '/':
            result = division(num1, num2);
            printf("\nAnswer: %.2f \n",result);
            break;
        default:
            printf("\n Invalid Operator \n");        

    }
 

    return 0; 
}

static double addition(double num1, double num2) {
    double result = num1 + num2;
    return result;
}

static double subtraction(double num1, double num2) {
    double result = num1 - num2;
    return result;
}

static double multiplication(double num1, double num2) {
    double result = num1 * num2;
    return result;
}

static double division(double num1, double num2) {
    double result = num1 / num2;
    return result;
}