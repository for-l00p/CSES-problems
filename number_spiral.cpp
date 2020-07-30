#include <iostream>

using namespace std;

long long int first_func(long long int y, long long int x)
{
    return y*(y-2) + 1 + x;
}

long long int second_func(long long int y, long long int x)
{
    return x*x - (y-1);
}

int main()
{
    long long int n, y, x;
    cin >> n;
    for (long long int i = 0; i<n; i++ )
    {
        cin >> y;
        cin >> x;
        if (y>=x && y%2==1)
        {
            cout << first_func(y,x) << endl;
        }
        else if (x>=y && x%2==1)
        {
            cout << second_func(y,x) << endl;
        }
        else if (x>=y && x%2==0)
        {
            cout << first_func(x,y) << endl;
        }
        else if (y>=x && y%2==0)
        {
            cout << second_func(x,y) << endl;
        }
    }

    return 0;
}