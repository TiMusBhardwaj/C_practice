#include <stdio.h>
int add()
{
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    return sum;
}

int getRemainder()
 {
    int num1, num2, remainder;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    remainder = num1%num2;
    return remainder;
}

float getProduct()
    {
        float num1, num2, product;
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        product = num1 * num2;
        return product;
    }

void printTwice()
{
    char word[20];
    printf("Enter word with limit 20: ");
    scanf("%s", word);
    printf("%s %s\n",word,word);
}
int main() {
    char option;
    double first, second;
    printf("Choose one of following options \n");
    printf("Enter 1 for two integers and outputs them and their sum.\n");
    printf("Enter 2  for two integers and outputs their remainder after division.\n");
    printf("Enter 3  for two floats and outputs their product\n");
    printf("Enter 4  for a word and prints it twice on the same row\n");
    printf("Enter option: ");
    scanf("%c", &option);

    switch (option) {
    case '1':
        printf("Sum of the entered numbers: %d\n", add());
        break;
    case '2':
       printf("Remainder after division of the entered numbers: %d\n", getRemainder());
        break;
    case '3':
        printf("Product of the entered numbers: %.4f\n", getProduct());
        break;
    case '4':
        printTwice();
        break;
    default:
        printf("Error! option is not correct");
    }

    return 0;
}


