#include <stdio.h>
int reverseNumber()
{
    int num1, reverse=0;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num1);
    while(num1>0){
        reverse = reverse*10 + (num1%10);
        num1/=10;
    }
    printf("Reverse of the entered numbers: %d\n", reverse);
    return reverse;
}

float findLargerFloat()
 {
    float num1, num2;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    return num1 > num2 ? num1:num2;
}

void divideByTwoOrMultiplybyThree()
    {
        int num1;
        printf("Enter first number: ");
        scanf("%d", &num1);
        if (num1%2 == 0){
            printf("Divisible by 2, result is : %d", num1/2);
        } else {
            printf("Non- Divisible by 2, result is : %d", num1*3);
        }

    }
void findEqualOutOfThreeNumbers()
{
   int num1, num2, num3;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    printf("Enter 3rd number: ");
    scanf("%d", &num3);
    if (num1 == num2 || num2 == num3 || num3 == num1){
        printf("Equal numbers found");

    } else {
        printf("No equal numbers");
    }

}
int main() {
    char option;
    double first, second;
    printf("Choose one of following options \n");
    printf("Enter 1 reverse a number\n");
    printf("Enter 2  for Enter two floats and outputs larger of 2 number.\n");
    printf("Enter 3  for Enter an integer divide it by 2 if divisible, else multiple by 3\n");
    printf("Enter 4  for Find if there are any equal number out of 3 integers \n");
    printf("Enter option: ");
    scanf("%c", &option);

    switch (option) {
    case '1':
        reverseNumber();
        break;
    case '2':
       printf("Larger of 2 floats: %f\n", findLargerFloat());
        break;
    case '3':
        divideByTwoOrMultiplybyThree();
        break;
    case '4':
        findEqualOutOfThreeNumbers();
        break;

    default:
        printf("Error! option is not correct");
    }

    return 0;
}


