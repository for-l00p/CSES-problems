#include <bits/stdc++.h>
using namespace std;

bool compare_interval(pair<int, int> a, pair<int, int> b)
{
    
    return a.second<b.second;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> timing;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        timing.push_back(make_pair(a,b));
    }
    sort(timing.begin(), timing.end(), compare_interval);
    int i=1, ans=1, curr=0;
    while(i<n)
    {
        if(timing[curr].second<=timing[i].first)
        {
            ans++;
            curr=i;
            i++;
        }
        else if(timing[curr].second>timing[i].first)
        {
            i++;
        }
    }
    cout << ans;
    // cout << "\n";
    // cout << "start end interval_length" <<"\n";
    // for(auto x : timing)
    //     cout << x.first << " " << x.second <<" "<< x.second-x.first <<"\n";
    return 0; 
}