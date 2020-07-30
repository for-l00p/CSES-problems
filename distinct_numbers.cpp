#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int64_t n, temp;
    cin >> n;
    set<int64_t> s;

    for(int64_t i = 0; i<n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();

    return 0;
}