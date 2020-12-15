#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float random_float(float min, float max)
{
    return ((float)rand() / ((float)RAND_MAX)) * (max - min) + min;
}

int main()
{
    srand(time(NULL));

    FILE *fp;
    fp = fopen("ran.dat", "w");

    int i;
    for (i = 0; i < 9; i++)
    {
        fprintf(fp, "%f\n", random_float(-1.5, 1.5));
    }

    fclose(fp);

     return 0;
}

