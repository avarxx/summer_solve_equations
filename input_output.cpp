#include <stdio.h>
#include "input_output.h"
#include <cctype>

int Input_coefficients(double* array_input)
{
    printf("Input coefficients of square equation ax^2 + bx + c = 0\n");
    scanf("%lg %lg %lg", &array_input[0], &array_input[1], &array_input[2]);
/*  for(int i = 0; i > len_array_input)
    {
        check_correct(array_input[i])
    }
*/
    printf("entered coefficients:\n");

    printf("%lg %lg %lg\n", array_input[0], array_input[1], array_input[2]);
    return 0;
}
/*int check_correct()
{

    //массив чаров это s;
    string s = "";
    cin >> s;
    bool t = true;
    //char s[3]
    int e = 0;
    //double a = 0, b = 0,c = 0;
    for(auto u = 0;u < s.size();++u)
    {
        if(!isdigit(s[u]))
        {
            if(s[u] == '.')
            {
                ++e;
            }
            else{t = false;}
        }
    }
    if(e >= 2)
    {t = false;}
    if(t){cout << "CORRECT";}
    else{cout << "NOPE";}
    return 0;

}
*/
void Output_roots(int n_roots, double root_1, double root_2)
{
    switch(n_roots)
    {
        case Zero_roots:
            printf("No solutions");
            break;
        case One_solutions:
            printf("One root = %lg" , root_1);
            break;
        case Two_solutions:
            printf("The first root = %lg , second root = %lg", root_1, root_2);
            break;
        case Infinity:
            printf("infinite number of solutions");
            break;
        default:
            printf("main(): ERROR: = %d\n", n_roots);
    }
}
