#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdbool.h>
#include "Solve_equations.h"


int main()
{
    double array_input[len_array_data] = {0, 0, 0};
    int err = Input_coefficients(array_input);
    /*
    if (err < 0)
    {
        return -1;
    }
    */

    double root_1 = NAN, root_2 = NAN;

    int n_roots = 0;

    Solve_equations(array_input, &root_1, &root_2, &n_roots);

    Output_roots(n_roots, root_1, root_2);

    return 0;
}
