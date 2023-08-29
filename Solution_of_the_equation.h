#ifndef SOLVE_OF_THE_EQUATION_H_INCLUDED
#define SOLVE_OF_THE_EQUATION_H_INCLUDED
enum
{
    EINVAL
};
enum
{
    EQUAL,
    NO_EQUAL
};

enum solutions
{
    Zero_roots,
    One_solutions,
    Two_solutions,
    Infinity = -1
};

int Solve_equations(double* array_input,
                     double *root_1, double *root_2, int *n_roots);

void Solve_linear_equations(double* array_input, double *root_1, int *n_roots);

void Solve_square_equations(double* array_input, double *root_1, double *root_2, int *n_roots);

double Comparison_doubles(double first, double second);

int is_equal(double first, double second);

#endif // SOLVE_OF_THE_EQUATION_H_INCLUDED
