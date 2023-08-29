#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "Solution_of_the_equation.h"
#include "input_output.h"
#include "unit_test.h"


int main(int argc, char** argv)
{
    //printf("%s\n", argv[1]);
    const int len_array_data = 3;

    bool check = true;

    double array_input[len_array_data] = {NAN, NAN, NAN};
/*
    int test_run = 0

    scanf("%d", &test_run);
*/
    int err = Input_coefficients(array_input, check);

    if (err < 0)
    {
        print_error(err);

        return err;
    }
    double root_1 = NAN, root_2 = NAN;

    int n_roots = 0;

    Solve_equations(array_input, &root_1, &root_2, &n_roots);

    if (err < 0)
    {
        printf("array_input == NULL");
    }

    Output_roots(n_roots, root_1, root_2, check);
 /*   if (test_run == 1)
    {
        Tests();
    }*/
    Tests();

    return 0;
}
