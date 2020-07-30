#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y, curr=0, max_customer=0;
    cin >> n;
    vector<pair<int, bool>> customer;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        customer.push_back(make_pair(x, true));
        customer.push_back(make_pair(y, false));
    }
    sort(customer.begin(), customer.end());
    for (int i = 0; i < customer.size(); i++)
    {
        curr+= customer[i].second ? 1 : -1;
        max_customer = max(max_customer, curr);
    }
    cout << max_customer <<"\n";
    return 0;
}