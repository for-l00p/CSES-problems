#include <iostream>
using namespace std;

int main()
{
    string sequence;
    cin >> sequence;
    long long int count = 1;
    long long int max_count = 1;

    for(long long int i=0; i<sequence.length()-1; i++)
    {
        if (sequence[i]==sequence[i+1])
        {
            count++;
            
            if (count > max_count)
            {
                max_count = count;
            }
        }
        else
        {
            count=1;
        }
        
    }
    cout << max_count;

    return 0;
}