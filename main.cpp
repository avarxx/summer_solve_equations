#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#include "Solution_of_the_equation.h"
#include "input_output.h"
#include "unit_test.h"

/// @brief launching functions
/// @param argc
/// @param argv
///\code

int main(int argc, char** argv)
{
    if (strcmp(argv[1], "--test") == 0)
    {
        RunningAllTests();
    }
    else
    {
        const int len_array_data = 3;

        double array_input[len_array_data] = {NAN, NAN, NAN};

        int err_input = InputCoefficients(array_input);

        CHECK_ERR(err_input);

        double root_1 = NAN, root_2 = NAN;

        int n_roots = 0;

        int err_sol = SolveEquations(array_input, &root_1, &root_2, &n_roots);

        CHECK_ERR(err_sol);

        OutputRoots(n_roots, root_1, root_2);
    }
    return 0;
}

///\endcode
