#include <stdio.h>

int main(){

    char opr, choice = 'y';
    double num1, num2;

    do{
        printf("Enter operator:\n");
        scanf("%c", &opr);

        printf("Enter number 1:\n");
        scanf("%lf",&num1);

        printf("Enter number 2:\n");
        scanf("%lf", &num2);

        switch(opr){
            case '+':
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1*num2);
                break;
            case '/':
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1/num2);
                break;
            default:
                printf("Enter valid operator");
        }

        while(getchar() != '\n');

        printf("Do you want to continue? [y/n]\n");
        scanf("%c",&choice);

        while(getchar() != '\n');

    }while(choice == 'y');

        return 0;
}
