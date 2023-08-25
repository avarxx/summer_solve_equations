#include <stdio.h>

double input(double* array_input);

int main()
{
    double array_input[3] = {0, 0, 0};
    scanf("%lg %lg %lg", &array_input[0], &array_input[1], &array_input[2]);
    /*input();*/
    printf("%lg %lg %lg", array_input[0], array_input[1], array_input[2]);
    return 0;
}
/*
void input()
{
    double array_input[3] = {0, 0, 0};
    array_input[] = scanf("%lg %lg %lg", &array_input[0], &array_input[1], &array_input[2]);
    return 0;
}
*/


