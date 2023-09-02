#ifndef UNIT_TEST_H_INCLUDED
#define UNIT_TEST_H_INCLUDED

const int n_test = 11;
const int n_name = 10;


struct Coeffs
{
    double array_inp[3];
};

struct Roots
{
    double ref_root_1;
    double ref_root_2;
};

struct TestDataRef
{
    struct Coeffs  coeffs;
    struct Roots   roots;

    enum solutions n_roots;
};




void SingleTest      (const TestDataRef* all_data, int i, FILE* file);

void RunningAllTests ();

int  SolveEquations  (double* array_input,
                      double *root_1, double *root_2, int *n_roots);

#endif // UNIT_TEST_H_INCLUDED
