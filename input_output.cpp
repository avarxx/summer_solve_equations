#include <stdio.h>
#include <stdbool.h>
#include "input_output.h"
#include <cctype>

int Input_coefficients(double* array_input, bool &check)
{
    printf("Input coefficients of square equation ax^2 + bx + c = 0\n");
    /*
    scanf("%lg %lg %lg", &array_input[0], &array_input[1], &array_input[2]);
    */
    for(int i = 0; i < len_array_input; i++)
    {
        int check_ = 0;
        check_ = scanf("%lg", &array_input[i]);
        if (check_ == 0)
        {
            printf("error\n");
            check = false;
        }
        else
            printf("ok\n");
    }
    printf("entered coefficients:\n");
    if (check == true)
    {
        printf("%lg %lg %lg\n", array_input[0], array_input[1], array_input[2]);
    }
    else
    {
        printf("incorrect input enter the coefficients again\n");
    }
    return 0;
}

void Output_roots(int n_roots, double root_1, double root_2, bool check)
{
    if (check)
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
    else
        printf("error");
}
