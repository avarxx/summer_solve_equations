#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdbool.h>
#include "Solve_equations.h"


void Solve_equations(double* array_input,
                     double *root_1, double *root_2, int *n_roots)
{
    double a = array_input[0];
    double b = array_input[1];
    double c = array_input[2];

    if ((Comparison_doubles(a, 0)) == Equal )
    {
        Solve_linear_equations(array_input, root_1, n_roots);
        return;
    }
    if ((Comparison_doubles(a, 0)) != Equal)
    {
        Solve_square_equations(array_input, root_1, root_2, n_roots);
        return;
    }
}

void Solve_linear_equations(double* array_input, double *root_1, int *n_roots)
{
double b = array_input[1];
double c = array_input[2];

    if ((Is_equal(b, 0) == Equal))
    {
        if ((Is_equal(c, 0)) == Equal)
        {
            *n_roots = -1;
            return;
        }
        else
        {
            *n_roots = 0;
            return;
        }
    }
    else
    {
        *root_1 = (-c/b);
        *n_roots = 1;
        return;
    }
}
void Solve_square_equations(double* array_input, double *root_1, double *root_2, int *n_roots)
{
double a = array_input[0];
double b = array_input[1];
double c = array_input[2];


    double discriminant = ((b * b - 4 * a * c)/(2 * a));
    if (Comparison_doubles(discriminant, 0) > 0 )
    {
        *root_1 = ((-b + sqrt(discriminant))/(2 * a));
        *root_2 = ((-b - sqrt(discriminant))/(2 * a));
        *n_roots = 2;
        return;
    }
    if (Is_equal(discriminant, 0) == Equal)
    {
        *root_1 = ((-b)/(2 * a));
        *n_roots = 1;
        return;
    }
    if (Comparison_doubles(discriminant, 0) < 0)
    {
        *n_roots = 0;
        return;
    }
}
