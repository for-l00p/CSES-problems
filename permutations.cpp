#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n==1)
    {
        cout << n;
    }
    if (n==2 or n==3)
    {
        cout << "NO SOLUTION" << endl;
    }
    if (n==4)
    {
        cout << "3 1 4 2" << endl;
    }
    if (n>4)
    {
        for (long long int i = 2*(n/2); i>=2; i-=2)
        {
            cout << i << " "; 
        }

        for (long long int i = n - (n-1)%2; i>=1; i-=2)
        {
            cout << i << " "; 
        }
        
    }

    return 0;
}