#include <bits/stdc++.h>
using namespace std;

struct node
{
    int value=-1;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, temp, max_unique=1;
    cin >> n;
    map<int, node> last_index;
    int j=0;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        j = max(j, last_index[temp].value+1);

        max_unique = max(max_unique, i-j+1);
        last_index[temp].value = i;
        
    }
    cout << max_unique;
    return 0;
}