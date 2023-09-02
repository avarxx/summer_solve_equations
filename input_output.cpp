#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "input_output.h"
#include "Solution_of_the_equation.h"

/// @brief coefficient input function
/// @param[in] array_input the specified array initialized with zeros
/// @param check
/// @return returns an array with coefficients or an error code
///\code

int InputCoefficients(double* array_input)
{
    printf("Input coefficients of square equation ax^2 + bx + c = 0\n");

    for(int i = 0; i < len_array_input; i++)
    {
        ScanfCofficients(array_input, i);
    }
}
/// @brief scan cofficients and check
/// @param i
/// @param array_input
/// @return code errors
int ScanfCofficients(double* array_input, int i);
{
    scnaf("%lg", array_input[i]);
    int count = scanf("%lg", &array_input[i]);

    if (count == 0)
    {
        return ERR;
    }

    else
    {
        return NO_ERR;
    }
}

///\endcode
/// @brief error output function
/// @param a
/// @return
///\code

int PrintError(int err)
{
    switch (err)
    {
        case ERR:
            printf("incorrect input enter the coefficients again\n");
            break;

        case EINVAL:
            printf("Error");
            break;
        // enum ERRRORS {NO_ERR = 0, ..}
    }
}

///\code
/// @brief error output function
/// @param n_roots
/// @param root_1
/// @param root_2
/// @param check
///\code

void OutputRoots(int n_roots, double root_1, double root_2, bool check)
{
    switch(n_roots)
    {
        case ZERO_ROOTS:
            printf("No solutions\n");
            break;

        case ONE_SOLUTIONS:
            printf("One root = %lg\n" , root_1);
            break;

        case TWO_SOLUTIONS:
            printf("The first root = %lg , second root = %lg\n", root_1, root_2);
            break;

        case INFINIT:
            printf("infinite number of solutions\n");
            break;

        default:
            printf("main(): ERROR: = %d\n", n_roots);
    }
}

///\endcode
