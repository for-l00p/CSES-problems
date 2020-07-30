#include <bits/stdc++.h>
using namespace std;

int64_t find_minimum(int64_t min_time, vector<int64_t>& machine, int64_t t)
{
    int64_t l=0, r=min_time*t+1, mid, curr_output, ans;
    while (l<=r)    
    {
        mid = l + (r-l)/2;
        curr_output=0;
        for(int64_t x : machine)
        {
            curr_output+= mid/x;
        }
        if(curr_output>=t)
        {
            ans=mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
        
    }
    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int64_t n, t, min_time=INFINITY;
    cin >> n >> t;
    vector<int64_t> machine(n);
    for(int64_t i=0; i<n; i++)
    {
        cin >> machine[i];
        min_time = min(min_time, machine[i]);
    }

    cout << find_minimum(min_time, machine, t);
    
    return 0;
}