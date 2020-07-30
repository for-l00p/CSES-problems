#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int64_t max_so_far=INT_MIN, max_ending_here=0, temp;
    cin >> n;
    int maxm=INT_MIN;
    
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        if(temp > maxm)
            maxm = temp;
        max_ending_here = max_ending_here+temp>=0 ? max_ending_here+temp : 0;
        if(max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
    }
    if(max_so_far==0)
        max_so_far = maxm;
    cout << max_so_far;
    return 0;
    
}