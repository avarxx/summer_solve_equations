#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "Solution_of_the_equation.h"
#include "unit_test.h"

/*
    TODO: const
*/

struct Test_data_ref all_data[n_test] =
                {
                    {{0, 0, 0}, 0, 0, Infinity},
                    {{1, 0, -4}, 2, -2, Two_solutions},
                    {{1, 5, -14}, 2, -7, Two_solutions},
                    {{3, -22, 7}, 7, 0.333333, Two_solutions},
                    {{2, -6, 4}, 2, 1, Two_solutions},
                    {{0, 2, 4}, -2, NAN, One_solutions},
                    {{6, -44, 14}, 7, 0.333333, Two_solutions},
                    {{2, 0, -18}, 3, -3, Two_solutions},
                    {{-1, 1, 2}, -1, 2, Two_solutions},
                    {{0, 2, 4}, -2, NAN, One_solutions},
                    {{1, 1, 1}, NAN, NAN, Zero_roots}


                };

void Test(Test_data_ref* all_data)
{
    double x1 = NAN, x2 = NAN;
    int nRoots = 0;

    Solve_equations(all_data->coeffs.array_inp,  &x1, &x2, &nRoots);
    if (is_equal(x1, all_data->roots.ref_root_1) || is_equal(x2, all_data->roots.ref_root_2) || nRoots != all_data->n_roots)
    {
        printf("FALLED: ");
        printf("%lg %lg %d", x1, x2, nRoots);
        printf("Expected: ");
        printf("%lg %lg %d",all_data->roots.ref_root_1, all_data->roots.ref_root_2, all_data->n_roots);
    }
    else
    {
        printf("Ok, the equation %lgx^2+%lgx+%lg = 0 roots: x1 = %lg, x2 = %lg\n",all_data->coeffs.array_inp[0], all_data->coeffs.array_inp[1], all_data->coeffs.array_inp[2], x1, x2);
    }
}

void Tests()
{
    for(int i = 0; i < n_test; i++)
    {
        printf("Test %d : ", i + 1);
        Test(&all_data[i]);
    }
}
