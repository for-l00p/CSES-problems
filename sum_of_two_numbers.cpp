#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    vector<pair<int, int>> m;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        m.push_back(make_pair(arr[i], i+1));
    }
    bool found=false;
    sort(arr.begin(), arr.end());
    sort(m.begin(), m.end());
    for(int i=0; (arr[i]<x && i<n); i++)
    {
        auto it = lower_bound(arr.begin()+i+1, arr.end(), x-arr[i]);
        int temp = it-arr.begin();
        if(it!=arr.end() && m[i].first+m[temp].first==x)
        {
            cout << m[i].second << " " << m[temp].second;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout << "IMPOSSIBLE";
    }
    return 0;
}