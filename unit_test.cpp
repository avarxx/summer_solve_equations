#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "Solution_of_the_equation.h"
#include "unit_test.h"
#include "enum.h"
/*
    TODO: const
*/

struct Test_data_ref all_data[2] =
                {
                    {{0, 0, 0}, 0, 0, Infinity},
                    {{1, 0, -4}, 2, -2, Two_solutions}
                };

void Test(Test_data_ref* all_data)
{
    double x_1 = NAN, x_2 = NAN;
    double x1 = 0, x2 = 0;
    int nRoots = 0;

    Solve_equations(all_data->coeffs.array_inp,  &x1, &x2, &nRoots);
    if (x_1 != all_data->roots.ref_root_1 || x_2 != all_data->roots.ref_root_2 || nRoots != all_data->n_roots)
    {
        printf("FALLED: ");
        printf("%lg %lg %d", x_1, x_2, nRoots);
        printf("Expected: ");
        printf("%lg %lg %d",all_data->roots.ref_root_1, all_data->roots.ref_root_2, all_data->n_roots);
    }
    else
    {
        printf("Ok");
    }
}

void Tests()
{
    for(int i = 0; i < n_test; i++)
    {
        Test(&all_data[i]);
    }
}
