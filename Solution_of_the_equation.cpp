#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "Solution_of_the_equation.h"

/// @brief the function of solving the quadratic equation
/// @param array_input array of coefficients
/// @param root_1 the first root
/// @param root_2 the second root
/// @param n_roots number of roots
///\code
int Solve_equations(double* array_input,
                     double *root_1, double *root_2, int *n_roots)
{
    if (array_input == NULL)
    {
        return -EINVAL;
    }
    if ((is_equal(array_input[0], 0)) == EQUAL)
    {
        Solve_linear_equations(array_input, root_1, n_roots);
        return 1;
    }
    else
    {
        Solve_square_equations(array_input, root_1, root_2, n_roots);
        return 1;
    }
}
///\endcode
/// @brief solving a linear equation
/// @param array_input array of coefficients
/// @param root_1 roots
/// @param n_roots number of roots
///\code
void Solve_linear_equations(double* array_input, double *root_1, int *n_roots)
{
    if ((is_equal(array_input[1], 0) == EQUAL))
    {
        if ((is_equal(array_input[2], 0)) == EQUAL)
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
///\endcode
/// @brief solving the quadratic equation
/// @param array_input array of coefficients
/// @param root_1 the first root
/// @param root_2 the second root
/// @param n_roots number of roots
///\code
void Solve_square_equations(double* array_input, double *root_1, double *root_2, int *n_roots)
{
    double discriminant = (((array_input[1] * array_input[1]) - (4 * array_input[0] * array_input[2])));
    if (Comparison_doubles(discriminant, 0) > 0 )
    {
        *root_1 = ((-array_input[1] + sqrt(discriminant))/(2 * array_input[0]));
        *root_2 = ((-array_input[1] - sqrt(discriminant))/(2 * array_input[0]));
        *n_roots = 2;
        return;
    }
    if (is_equal(discriminant, 0) == EQUAL)
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
///\endcode

/// @brief double comparison function
/// @param first
/// @param second
/// @return returns true or false
///\code
const double eps = 0.00001;

double Comparison_doubles(double first, double second)
{
    if ((first - second) > eps)
    {
        double dif_of_num = (first - second);
        return dif_of_num;
    }
    if ((second - first) < eps)
    {
        double dif_of_num = (second - first);
        return dif_of_num;
    }
    return 0;
}
///\endcode
/// @brief equality comparison function
/// @param first
/// @param second
/// @return
///\code
int is_equal(double first, double second)
{
    if (first - second > eps)
        return NO_EQUAL;
    if (second - first > eps)
        return NO_EQUAL;
    else
        return EQUAL;
}
///\code

