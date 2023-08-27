#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "";
    bool t = true;
    //double a = 0, b = 0, c = 0;
    //char x = '1';
    cin >> s;
    int e = 0;
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
    e = 0;
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
