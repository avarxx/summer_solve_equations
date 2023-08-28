#ifndef UNIT_TEST_H_INCLUDED
#define UNIT_TEST_H_INCLUDED

const int n_test = 2;
const int n_name = 10;

struct Coeffs {
    double a;
    double b;
    double c;
};

struct Roots {
    double x1;
    double x2;
};

struct TestData {
    struct Coeffs coeffs;
    struct Roots roots;
    enum solutions nroots;
};

struct Test_data_ref
{
    double array_inp[3] = {0, 0, 0};
    double ref_root_1, ref_root_2;
    int n_roots = 0;
};
struct Test_data_ref all_data[n_test] = {{{0, 0, 0}, 0, 0, -1},
                                        {{1, 0, -4}, 2, -2, 2}};

int Solution_of_the_equation(struct Test_data_ref* all_data,  double &x_1, double &x_2, double &nRoots);
#endif // UNIT_TEST_H_INCLUDED
