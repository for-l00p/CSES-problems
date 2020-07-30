#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cube;
    vector<int> towers;
    cin >> n;
    cin >> cube;
    towers.push_back(cube);
    for(int i=1; i<n; i++)
    {
        cin >> cube;
        int req_tower=0;
        auto it = upper_bound(towers.begin(), towers.end(), cube);
        if(it!=towers.end())
        {
            req_tower = it-towers.begin();
            towers[req_tower] = cube;
        }
        else                                                        
        {
            towers.push_back(cube);
        }
    }
    cout << towers.size() << "\n";
    return 0;
}