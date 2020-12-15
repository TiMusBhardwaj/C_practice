#include <stdio.h>

int main()
{
    FILE *in_file;
    //float number1, number2, sum;
    float  number[10], sum;

    in_file = fopen("ran.dat", "r");

    if (in_file == NULL)
    {
        printf("Can't open file for reading.\n");
    }
    else
    {
        for (int count=0; count <10; count++){
            fscanf(in_file, "%f", &number[count]);
            sum+=number[count];
        }

        fclose(in_file);
        float avg = sum/10.0;
        printf("Avg of numbers is %f", avg);
        printf("Number above avg are ::\n");
        for (int i = 0; i < 10; i++) {
             if(number[i] > avg)
                printf("%f\n", number[i]);
        }
    }
    return 0;
}

