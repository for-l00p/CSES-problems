#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, point, left, right;
    cin >> x >> n;
    set<int> lights;
    multiset<int> lengths;
    lights.insert(0);
    lights.insert(x);

    lengths.insert(x);
        
    for(int i=0; i<n; i++)
    {
        cin >> point;
        auto it = lights.upper_bound(point);
        right = *it;
        left = *prev(it);

        lengths.erase(lengths.find(right-left));
        lengths.insert(point-left);
        lengths.insert(right-point);

        lights.insert(point);

        cout << *lengths.rbegin() << " ";
        
    }
    return 0;
}