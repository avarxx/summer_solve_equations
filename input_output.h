#ifndef INPUT_OUTPUT_H_INCLUDED
#define INPUT_OUTPUT_H_INCLUDED

enum solutions
{
    Zero_roots,
    One_solutions,
    Two_solutions,
    Infinity = -1
};
enum check
{
    Error,
    Continue
};

const int len_array_input = 3;

int Input_coefficients(double* array_input, bool &check);

void Output_roots(int n_roots, double root_1, double root_2, bool check);

int print_error(int err);


#endif // INPUT_OUTPUT_H_INCLUDED
