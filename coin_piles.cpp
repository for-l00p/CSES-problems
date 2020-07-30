#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int64_t n;
    cin >> n;
    int64_t a, b;
    for(int64_t i = 0; i<n; i++)
    {
        cin >> a;
        cin >> b;
        if ( (abs(a-b) <= min(a,b)) && ((a+b)%3==0) ) 
            cout << "YES\n";
        else 
            cout << "NO\n";
        

    }

    return 0;
}