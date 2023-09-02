#ifndef INPUT_OUTPUT_H_INCLUDED
#define INPUT_OUTPUT_H_INCLUDED

#include "Solution_of_the_equation.h"
enum check
{
    EINVAL = -1,
    ERR,
    NO_ERR
};

#define CHECK_ERR(err)          \
do                              \
{                               \
    if (err != NO_ERR)          \
        {                       \
            PrintError(err);   \
            return err;         \
        }                       \
}                               \
while (0)

const int len_array_input = 3;

int  InputCoefficients (double* array_input);

int  ScanfCofficients  (double* array_input, int i);

void OutputRoots       (int n_roots, double root_1, double root_2);

int  PrintError        (int err);



#endif // INPUT_OUTPUT_H_INCLUDED
