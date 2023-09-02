#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "Solution_of_the_equation.h"
#include "unit_test.h"

///клж стайл

/// @brief an array of structures in which data for tests is stored
struct TestDataRef all_data[n_test]  =
                {
                    {{0,  0,  0},     0,     0,        INFINIT},
                    {{1,  0, -4},     2,    -2,        TWO_SOLUTIONS},
                    {{1,  5, -14},    2,    -7,        TWO_SOLUTIONS},
                    {{3, -22, 7},     7,     0.333333, TWO_SOLUTIONS},
                    {{2, -6,  4},     2,     1,        TWO_SOLUTIONS},
                    {{0,  2,  4},    -2,     NAN,      ONE_SOLUTIONS},
                    {{6, -44, 14},    7,     0.333333, TWO_SOLUTIONS},
                    {{2,  0, -18},    3,    -3,        TWO_SOLUTIONS},
                    {{-1, 1,  2},    -1,     2,        TWO_SOLUTIONS},
                    {{0,  2,  4},    -2,     NAN,      ONE_SOLUTIONS},
                    {{1,  1,  1},     NAN,   NAN,      ZERO_ROOTS}


                };

/// @brief the function that tests the program
/// @param all_data data structure
/// @param i counter
/// @param file test_solutions.txt the file in which the test results are recorded
///\code
void SingleTest(TestDataRef* all_data, int i, FILE* file)
{
    assert(all_data);
    assert(file != NULL);

    double x1 = NAN, x2 = NAN;
    int nRoots = 0;

    SolveEquations(all_data->coeffs.array_inp,  &x1, &x2, &nRoots);
    if  (nRoots != all_data->n_roots ||
        (IsEqual(x1, all_data->roots.ref_root_1) == NO_EQUAL) ||
        (IsEqual(x2, all_data->roots.ref_root_2) == NO_EQUAL))

    {
        fprintf(file, "FALLED: ");
        fprintf(file, "%lg %lg %d", x1, x2, nRoots);
        fprintf(file, "Expected: ");
        fprintf(file, "%lg %lg %d",
                       all_data->roots.ref_root_1,
                       all_data->roots.ref_root_2,
                       all_data->n_roots);
    }
    else
    {
        fprintf(file, "Test %d ", i + 1);
        fprintf(file, "Ok, the equation %lgx^2 + %lgx + %lg = 0 ",
                all_data->coeffs.array_inp[0],
                all_data->coeffs.array_inp[1],
                all_data->coeffs.array_inp[2]);
        fprintf(file, "number of roots: %d\n", nRoots);
    }

}
///\endcode

///\code
/// @brief a function that calls the output of tests
/// @param i
/// @param file
void RunningAllTests()
{
    FILE *file = fopen("test_solutions.txt", "w");

    assert(file != NULL);

    for(int i = 0; i < n_test; i++)
    {
        SingleTest(&all_data[i], i, file);
    }

    fclose(file);
}
///\endcode
