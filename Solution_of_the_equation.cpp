#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "Solution_of_the_equation.h"


void Solve_equations(double* array_input,
                     double *root_1, double *root_2, int *n_roots)
{
    if ((Comparison_doubles(array_input[0], 0)) == Equal)
    {
        Solve_linear_equations(array_input, root_1, n_roots);
        return;
    }
    else
    {
        Solve_square_equations(array_input, root_1, root_2, n_roots);
        return;
    }
}

void Solve_linear_equations(double* array_input, double *root_1, int *n_roots)
{
    printf("solves the linear equation\n");
    if ((Comparison_doubles(array_input[1], 0) == Equal))
    {
        if ((Comparison_doubles(array_input[2], 0)) == Equal)
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
        *root_1 = (-(array_input[2])/array_input[1]);
        *n_roots = 1;
        return;
    }
}
void Solve_square_equations(double* array_input, double *root_1, double *root_2, int *n_roots)
{
    printf("solves the quadratic equation\n");
    double discriminant = (((array_input[1] * array_input[1]) - (4 * array_input[0] * array_input[2])));
    if (Comparison_doubles(discriminant, 0) > 0 )
    {
        *root_1 = ((-array_input[1] + sqrt(discriminant))/(2 * array_input[0]));
        *root_2 = ((-array_input[1] - sqrt(discriminant))/(2 * array_input[0]));
        *n_roots = 2;
        return;
    }
    if (Comparison_doubles(discriminant, 0) == Equal)
    {
        *root_1 = ((-array_input[1])/(2 * array_input[0]));
        *n_roots = 1;
        return;
    }
    if (Comparison_doubles(discriminant, 0) < 0)
    {
        *n_roots = 0;
        return;
    }
}
const double eps = 0.000000001;
/*
    TODO MAKE STATIC AND READ ABOUT IT IN THE KERNIGAN
*/

static double Comparison_doubles(double first, double second)
{
    if ((first - second) > eps)
    {
        double dif_of_num = (first - second);
        return dif_of_num;
    }
    if ((second - first) > eps)
    {
        double dif_of_num = (second - first);
        return dif_of_num;
    }
    return Equal;
}


