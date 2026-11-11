#include <stdio.h>

int main () {

double time [] = {0.0, 1.0, 2.0, 3.0};
double temperature[] = {25.1, 25.8, 26.7, 27.4};

int n = sizeof (time) / sizeof (time[0]);

    for (int i = 0; i < n; i++)
    {
        printf("t = %.1f s, T = %.2f C\n", time[i], temperature[i]);
    }
    return 0;
}