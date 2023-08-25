#ifndef INPUT_OUTPUT_H_INCLUDED
#define INPUT_OUTPUT_H_INCLUDED

enum solutions
{
    Zero_roots,
    One_solutions,
    Two_solutions,
    Infinity = -1
};


int Input_coefficients(double* array_input);

void Output_roots(int n_roots, double root_1, double root_2);


#endif // INPUT_OUTPUT_H_INCLUDED
