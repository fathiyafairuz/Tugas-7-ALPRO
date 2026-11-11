#include <stdio.h>

typedef struct
{
    double time;      /* s */
    double voltage;   /* V */
    double current;   /* A */
} ElectricalMeasurement;

double power(const ElectricalMeasurement *m)
{
    return m->voltage * m->current;
}

int main (void)
{
    ElectricalMeasurement measurements [] =
    {
        {0.0, 5.0, 2.0},
        {1.0, 5.1, 2.1},
        {2.0, 5.2, 2.2},
        {3.0, 5.3, 2.3}
    };

    int n = sizeof (measurements) / sizeof(measurements[0]);

    for (int i = 0; i < n; i++)
    {
        double p = power(&measurements[i]);
        printf ("t = %.lf s, v = %.2f v, I = %.2f A, P = %.2f W\n",
            measurements [i]. time,
            measurements [i]. voltage,
            measurements [i]. current,
            p);
    }
    return 0;
}