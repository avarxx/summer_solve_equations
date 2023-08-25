#include <stdio.h>
#include "input_output.h"


int Input_coefficients(double* array_input)
{
    printf("Input coefficients of square equation ax^2 + bx + c = 0\n");

    scanf("%lg %lg %lg", &array_input[0], &array_input[1], &array_input[2]);
    printf("entered coefficients:\n");
    printf("%lg %lg %lg\n", array_input[0], array_input[1], array_input[2]);
    return 0;
}

void Output_roots(int n_roots, double root_1, double root_2)
{
    switch(n_roots)
    {
        case Zero_roots:
            printf("No solutions");
            break;
        case One_solutions:
            printf("One root = %lg" , root_1);
            break;
        case Two_solutions:
            printf("The first root = %lg , second root = %lg", root_1, root_2);
            break;
        case Infinity:
            printf("infinite number of solutions");
            break;
        default:
            printf("main(): ERROR: = %d\n", n_roots);
    }
}
