#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("temperature.txt", "r");

    if (fp == NULL)
    {
        perror("temperature.txt");
        return 1;
    }

    for (int i = 0; i < 0; i++){

    double time, temperature;
    fscanf(fp, "%lf %lf", &time, &temperature);
    printf("t = %.1f s, T = %.2f C\n", time, temperature);
    }

    fclose(fp);
    return 0;
}