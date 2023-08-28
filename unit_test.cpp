const int n_test = 2;
const int n_name = 10;

struct Test_data_ref
{
    double array_inp[3] = {0, 0, 0};
    double ref_root_1, ref_root_2;
    int n_roots;
    const char name[n_name];
};
struct Test_data_ref all_data[n_test] = {{.array_inp[3] = {0, 0, 0} .ref_root_1 = 0, .ref_root_2 = 0, .n_roots = -1, .name = "1 Test"},
                                  {.array_inp[3] = {1, 0, -4}, .ref_root_1 = 2, .ref_root_2 = -2, .n_roots = 2, .name = "2 Test"}};



void Test(const Test_data_ref* data)
{
    double x_1 = NAN, x_2 = NAN;
    int nRoots = NAN ;
    Solution_of_the_equation(&(data-> array_inp), double &x_1, double &x_2, & double nRoots)
    if (x_1 != ref_root_1 || x_2 != ref_root_1 || nRoots != n_roots)
    {
        printf("FALLED: ");
        printf("%lg %lg %d", x_1, x_2, nRoots);
        printf("Expected: ");
        printf("%lg %lg %d",ref_root_1, ref_root_2, n_roots);
    }
    else
        printf("Ok");
}

void Tests()
{
    for(int i = 0; i < n_test; i++)
    {
        Test(&all_data[i]);
    }
}
