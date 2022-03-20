#include <stdio.h>

double addition(double x, double y){
    return (x+y);
}

double subtraction(double x, double y){
    return (x-y);
}

double division(double x, double y){
    return (x/y);
}

double multip(double x, double y){
    return (x*y);
}

void oper(double x, double y){
    printf("%.1lf + %.1lf = ", x, y);
    return;
}

int main() {
    char op;
    double x, y;
    printf("Enter a command +, -, *, /:\n");
    scanf("%c", &op);
    printf("Enter first operand:\n");
    scanf("%lf", &x);
    printf("Enter second operand:\n");
    scanf("%lf", &y);

    switch(op){
        case '+':
        oper(x,y);
        printf("%.1lf\n", addition(x,y));
        break;

        case '-':
        oper(x,y);
        printf("%.1lf\n", subtraction(x,y));
        break;
        
        case '*':
        oper(x,y);
        printf("%.1lf\n", multip(x,y));
        break;

        case '/':
        oper(x,y);
        printf("%.1lf\n", division(x,y));
        break;

        default:
        printf("Please enter a valid command\n");
    }
    return 0;
}