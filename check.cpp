const double eps = 0.000000001;
/*
    TODO MAKE STATIC AND READ ABOUT IT IN THE KERNIGAN
*/

double Comparison_doubles(double first, double second)
{
    if ((first - second) > eps)
    {
        double dif_of_num = (first - second);
        return dif_of_num;
    }
    if ((second - first) < eps)
    {
        double dif_of_num = (second - first);
        return dif_of_num;
    }
}
int Is_equal(double first, double second)
{
    if (((first - second) < eps) || ((second - first) < eps))
        return Equal;
    else
        return No_equal;
}
int Input_coefficients(double* array_input)
{
    double a = NAN, b = NAN, c = NAN;
    printf("Input coefficients of square equation ax^2 + bx + c = 0\n");
    scanf("%lg %lg %lg", a, b, c);
    for(int i = 0; i < 3; i++)
    {
        printf("%g" array_input[i]);
    }
    array_input[0] = a;
    array_input[1] = b;
    array_input[2] = c;
    for(int i = 0; i < 3; i++)
    {
        printf("%g" array_input[i]);
    }
}
