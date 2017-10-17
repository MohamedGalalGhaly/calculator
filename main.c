#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char equation[20], operation = '\0';
    int i, len, lenOfFirstNum, lenOfSecondNum, charpPosition;
    double num1 = 0, num2 = 0, result = 0;



    scanf("%s", equation);
    len = strlen(equation);
    for (i=0; i<len; i++)
    {
        if (equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/')
        {
            operation = equation[i];
            charpPosition = i;
            lenOfFirstNum = charpPosition;
            lenOfSecondNum = len - charpPosition -1;
        }
    }
    for (i=0; i<charpPosition; i++) // Get the first num
    {

        num1 += (equation[i]-'0')*pow (10, (lenOfFirstNum-1));
        lenOfFirstNum --;
    }

    for (i=(charpPosition+1); i<len; i++) // Get the second num
    {


        num2 += (equation[i]-'0')*pow (10, (lenOfSecondNum-1));
        lenOfSecondNum --;
    }

    switch (operation)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        default:
            printf("Invalid Operation");
            break;

    }
    printf("\nResult =  %.2lf ", result);

    return 0;
}
