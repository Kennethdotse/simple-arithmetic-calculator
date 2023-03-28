#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void sum (float* result, float sec_operand);
void quo (float * result, float sec_operand);
void diff (float * result, float sec_operand);
void prod (float * result, float sec_operand);
void modu (int * result, int sec_operand);

int main(){
    printf("Welcome to my arithmetic calculator.\nYou'd have to enter the operands and the operation.\nEnter '@' to reset,enter '#' to switch off the calculator.\nHang on tight...\n\n");
    bool state = true;
    Start:
        printf("Start calculations :)\n");
        float firstOperand;
        float secOp;
        char op;
        printf("Enter the first number: ");
        scanf(" %f",&firstOperand);

        do{
            printf("\nEnter the second number: ");
            scanf(" %f",&secOp);

            if (secOp== '#'){
                printf("Goodbye :(\n");
                state = false;
                break;
            }
            else if(secOp=='@'){
                goto Start;
                break;
            }

        again:
            printf("\nEnter the operator(+,-,x,/,\%): " );
            scanf(" %c",&op);

            switch(op)
            {
            case '+':
                sum(&firstOperand,secOp);
                break;
            case '-':
                diff(&firstOperand,secOp);
                break;
            case 'x':
                prod(&firstOperand,secOp);
                break;
            case '/':
                quo(&firstOperand,secOp);
                break;
            case '%':
                quo(&firstOperand,secOp);
                break;
            case '#':
                printf("Goodbye :(\n");
                state = false;
                break;
            case '@':
                goto Start;
                break;
            default:
                printf("Error :{\n");
                goto again;
            }

        }while(state==true);
    end:
    return 0;
}

void sum (float * result, float sec_operand){
    printf("%.2f + %.2f = ",*result,sec_operand);
    *result = *result + sec_operand;
    printf("%.2f",*result);
}

void diff (float * result, float sec_operand){
    printf("%.2f - %.2f = ",*result,sec_operand);
    *result = *result - sec_operand;
    printf("%.2f",*result);
}

void prod (float * result, float sec_operand){
    printf("%.2f x %.2f = ",*result,sec_operand);
    *result = *result * sec_operand;
    printf("%.2f",*result);
}

void quo (float * result, float sec_operand){
    printf("%.2f  \\%.2f = ",*result,sec_operand);
    *result = *result / sec_operand;
    printf("%.2f",*result);
}

void modu (int * result, int sec_operand){
    printf("%d % d = ",*result,sec_operand);
    *result = *result % sec_operand;
    printf("%d",*result);
}
