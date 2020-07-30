#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int64_t n, m, k;
    cin >> n >> m >> k;

    vector<int64_t> appl(n);
    vector<int64_t> apar(m);

    for(int i=0; i<n; i++)
        cin >> appl[i];

    for(int i=0; i<m; i++)
        cin >> apar[i];

    sort(appl.begin(), appl.end());
    sort(apar.begin(), apar.end());

    int i=0, j=0;
    int ans=0;

    while(i<n && j< m)
    {
        if(apar[j]-k<=appl[i] && appl[i]<=apar[j]+k )
        {
            ans++;
            i++;
            j++;
        }
        else if(appl[i]>apar[j]+k)
        {
            j++;
        }
        else if(apar[j]-k > appl[i])
        {
            i++;
        }
    }

    cout << ans << "\n";


    return 0;
}