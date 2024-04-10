#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    double a, b;
    while (1)
    {
        printf("Enter an operator (+, -, *, /) or q to quit: ");
        scanf("%c", &ch);

        if (ch == 'q')
            exit(0);
        printf("Enter two first and second operands: ");
        scanf(" %lf %lf", &a, &b);
        switch (ch)
        {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", a, b, a + b);

            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf", a, b, a - b);

            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", a, b, a * b);

            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf", a, b, a / b);

            break;

        default:
            printf("Error! operator is not correct");
        }
        printf("\n");
    }
}