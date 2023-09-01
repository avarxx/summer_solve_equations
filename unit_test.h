#ifndef UNIT_TEST_H_INCLUDED
#define UNIT_TEST_H_INCLUDED

const int n_test = 11; // TODO all consts are UPPER CASE
const int n_name = 10;


struct Coeffs { // TODO a b c
    double array_inp[3];
};

struct Roots {
    double ref_root_1;
    double ref_root_2;
};

struct Test_data_ref{
    struct Coeffs coeffs;
    struct Roots roots;
    enum solutions n_roots;
};




void Test(const Test_data_ref* all_data, int i, FILE* file);

void Tests();

int Solve_equations(double* array_input,
                     double *root_1, double *root_2, int *n_roots);
#endif // UNIT_TEST_H_INCLUDED
