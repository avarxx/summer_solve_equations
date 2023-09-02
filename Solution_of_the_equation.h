#ifndef SOLVE_OF_THE_EQUATION_H_INCLUDED
#define SOLVE_OF_THE_EQUATION_H_INCLUDED


enum
{
    EQUAL,
    NO_EQUAL
};

enum solutions
{
    ZERO_ROOTS,
    ONE_SOLUTIONS,
    TWO_SOLUTIONS,
    INFINIT = -1
};
// код стайл
int    SolveEquations        (double* array_input,
                              double *root_1, double *root_2, int *n_roots);

void   SolveLinearEquations  (double* array_input, double *root_1, int *n_roots);
void   SolveSquareEquations  (double* array_input, double *root_1, double *root_2, int *n_roots);

double ComparisonDoubles     (double first, double second);

int    IsEqual               (double first, double second);

#endif // SOLVE_OF_THE_EQUATION_H_INCLUDED
