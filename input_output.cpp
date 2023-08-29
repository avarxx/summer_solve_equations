#include <stdio.h>
#include <stdbool.h>
#include "input_output.h"
#include <cctype>
#include "enum.h"

int Input_coefficients(double* array_input, bool &check)
{
    printf("Input coefficients of square equation ax^2 + bx + c = 0\n");
    for(int i = 0; i < len_array_input; i++)
    {
        int check_ = 0;
        check_ = scanf("%lg", &array_input[i]);
        if (check_ == 0)
        {
            check = false;
            return err;
        }
    }
    printf("entered coefficients: ");
    if (check == true)
    {
        printf("%lg %lg %lg\n", array_input[0], array_input[1], array_input[2]);
    }
    return no_err;
}
int print_error(int a)
{
    if (err)
    {
        printf("incorrect input enter the coefficients again\n");
    }
}
void Output_roots(int n_roots, double root_1, double root_2, bool check)
{
    switch(n_roots)
    {
        case Zero_roots:
            printf("No solutions\n");
            break;
        case One_solutions:
            printf("One root = %lg\n" , root_1);
            break;
        case Two_solutions:
            printf("The first root = %lg , second root = %lg\n", root_1, root_2);
            break;
        case Infinity:
            printf("infinite number of solutions\n");
            break;
        default:
            printf("main(): ERROR: = %d\n", n_roots);
    }
}
