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
int SolveEquations(double* array_input,
                     double *root_1, double *root_2, int *n_roots)
{
    double a = array_input[0];
    if (array_input == NULL)
    {
        return -EINVAL;
    }
    if ((IsEqual(a, 0)) == EQUAL)
    {
        SolveLinearEquations(array_input, root_1, n_roots);
        return 1;
    }
    else
    {
        SolveSquareEquations(array_input, root_1, root_2, n_roots);
        return 1;
    }
}
///\endcode
/// @brief solving a linear equation
/// @param array_input array of coefficients
/// @param root_1 roots
/// @param n_roots number of roots
///\code
void SolveLinearEquations(double* array_input, double *root_1, int *n_roots)
{
    double b = array_input[1];
    double c = array_input[2];
    if ((IsEqual(b, 0) == EQUAL))
    {
        if ((IsEqual(c, 0)) == EQUAL)
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
        *root_1 = (-c / b);
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
void SolveSquarEquations(double* array_input, double *root_1, double *root_2, int *n_roots)
{
    double a = array_input[0];
    double b = array_input[1];
    double c = array_input[2];

    double discriminant = (((b * b) - (4 * a * c)));
    if (ComparisonDoubles(discriminant, 0) > 0 )
    {
        *root_1  = ((-b + sqrt(discriminant))/(2 * a));
        *root_2  = ((-b - sqrt(discriminant))/(2 * a));
        *n_roots = 2;
        return;
    }
    if (IsEqual(discriminant, 0) == EQUAL)
    {
        *root_1  = ((-b)/(2 * a));
        *n_roots = 1;
        return;
    }
    if (ComparisonDoubles(discriminant, 0) < 0)
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

double ComparisonDoubles(double first, double second)
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
int IsEqual(double first, double second)
{
    if (first - second > eps)
        return NO_EQUAL;
    if (second - first > eps)
        return NO_EQUAL;
    else
        return EQUAL;
}
///\code

