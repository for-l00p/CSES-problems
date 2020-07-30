#include <iostream>
typedef long long int integer;

using namespace std; 

integer no_ways(integer n)
{
    return n*n*(n*n-1)/2 - 4*(n-2)*(n-1);
}

int main()
{
    integer n;
    cin >> n;
    for (integer i=1; i<=n; i++)
    {
        cout << no_ways(i) << endl;
    }

    return 0;
}