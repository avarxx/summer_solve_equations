#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "Solution_of_the_equation.h"
#include "input_output.h"
#include "unit_test.h"


int main()
{
    const int len_array_data = 3;

    bool check = true;

    double array_input[len_array_data] = {NAN, NAN, NAN};

    int err = Input_coefficients(array_input, check);

    if (err < 0)
    {
        print_error(err);

        return err;
    }
    double root_1 = NAN, root_2 = NAN;

    int n_roots = 0;

    Solve_equations(array_input, &root_1, &root_2, &n_roots);

    if (-EINVAL < 0)
    {
        printf("array_input == NULL");
    }

    Output_roots(n_roots, root_1, root_2, check);

    Tests();

    return 0;
}
