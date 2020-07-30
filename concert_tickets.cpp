#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<int64_t, int, std::greater<int>> tickets;
    vector<int64_t> people(m);
    int64_t temp;

    for(int i=0; i<n; i++)
    {
        cin >> temp;
        tickets[temp]++;
    } 

    for(int j=0; j<m; j++)
    {
        cin >> people[j];
    }   

    for(int i=0; i<m; i++)
    {
        auto it = tickets.lower_bound(people[i]);
        if( it!= tickets.end() && it->second!=0)
        {
            cout << it->first << "\n";
            tickets[it->first]--;
            if(tickets[it->first]==0)
                tickets.erase(it->first);
        }
        else
        {
            cout << -1 << "\n";
        }
    }
        
    return 0;
}