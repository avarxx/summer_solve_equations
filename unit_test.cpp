#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "unit_test.h"

void Test(const Test_data_ref* data)
{
    double x_1 = NAN, x_2 = NAN;
    struct Roots check_roots;
    int nRoots = 0;
    Solution_of_the_equation(&all_data.coeffs,  &check_roots, &nRoots);
    if (x_1 != data->ref_root_1 || x_2 != data->ref_root_2 || nRoots != data->n_roots)
    {
        printf("FALLED: ");
        printf("%lg %lg %d", x_1, x_2, nRoots);
        printf("Expected: ");
        printf("%lg %lg %d",data->ref_root_1, data->ref_root_2, data->n_roots);
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
