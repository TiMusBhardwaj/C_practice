#include <stdio.h>
#include <math.h>


int main()
{
    char binaryNumber[16];
    printf("Enter binary number [2 byte limit]: ");
    scanf("%s", binaryNumber);
    //printf("Your name is %s", binaryNumber);
    int count =0, decimalResult=0;
    while (binaryNumber[count] != NULL){
        if(binaryNumber[count] == '1')
            decimalResult += pow(2, count);
        count++;
    }
    printf("Decimal value of %s is : %d", binaryNumber, decimalResult);
    return 0;
}
