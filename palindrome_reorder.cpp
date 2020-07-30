#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

template<class InputIterator, class UnaryPredicate>
bool one_of(InputIterator first, InputIterator last, UnaryPredicate pred)
{
    int64_t count=0;
    while (first!=last) 
    {
        if (pred(*first)) count++;
        ++first;
    }
    if (count==1) return true;
    return false;
}

int main ()
{
    string s, s1;
    getline(cin, s);
    map<char, int> m;

    for (char x : s)
    {
        m[x]++;
    }

    if (s.length()%2==0)
    {
        if(any_of(m.begin(), m.end(), [](const auto& p) { return p.second%2==1; })) // Any of characters in the string is odd times.
        {
            cout << "NO SOLUTION\n";
        }
        else
        {
            for (auto x : m)
            {
                for (int i = 0; i<x.second/2; i++)
                {
                    s1.push_back(x.first);
                }
            }
            for (int i = s1.length()-1; i>=0; i--)
            {
                s1.push_back(s1[i]);
            }
            cout << s1 << endl;
        }
        
    }
    else
    {
        if (one_of(m.begin(), m.end(), [](const auto& p) { return p.second%2 == 1;})) // Only of the characters in the string is odd
        {
            char temp;
            for (auto x : m)
            {
                
                if(x.second%2==1) temp = x.first;
                for (int i = 0; i<x.second/2; i++)
                {
                    s1.push_back(x.first);
                }
                
            }
            s1.push_back(temp);
            for (int i = s1.length()-2; i>=0; i--)
            {
                s1.push_back(s1[i]);
            }
            cout << s1 << endl;
        }
        else
        {
            cout << "NO SOLUTION\n";
        }
        
    }
    

    return 0;
}