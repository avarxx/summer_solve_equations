#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "input_output.h"
#include "Solution_of_the_equation.h"
#include <cctype>

int Input_coefficients(double* array_input, bool check)
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
    FILE *file = fopen("solutions.txt", "w");
    switch(n_roots)
    {
        case Zero_roots:
            fprintf(file, "No solutions\n");
            break;
        case One_solutions:

            fprintf(file, "One root = %lg\n" , root_1);
            break;
        case Two_solutions:
            fprintf(file, "The first root = %lg , second root = %lg\n", root_1, root_2);
            break;
        case Infinity:
            fprintf(file,"infinite number of solutions\n");
            break;
        default:
            fprintf(file,"main(): ERROR: = %d\n", n_roots);
    }
    fclose(file);
}
