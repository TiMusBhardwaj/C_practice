#include <stdio.h>
#include <math.h>
int factorial(int num)
    {
        int fact=1;
        while(num > 1){
            fact *= num;
            num--;
        }
         //printf("fact : %d", fact);
        return fact;
    }
int main()
{
    float x, result=0;
    int sign = -1;
    printf("Enter value of X in Taylor Series: ");
    scanf("%f", &x);


    for (int i=0; i<10 ; i++){
        int temp = 2*i+1;
         //printf("temp : %d", temp);
        result = result + ((sign*-1) * (pow(x, temp)/factorial(temp)));
    }

    printf("Result : %f", result);
}
