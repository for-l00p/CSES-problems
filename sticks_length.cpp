#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int64_t sum=0, median, sum_till_median=0;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
        sum+=nums[i];
    }
    median = n/2;
    sort(nums.begin(), nums.end());
    
    for(int i=0; i<=n/2; i++)
    {
        sum_till_median+=nums[i];
    }
    int64_t sum_till_median2 = sum_till_median - nums[median];
    int64_t ans1 = (nums[median]*(median+1)-sum_till_median) + (sum-sum_till_median-nums[median]*(n-median-1));
    int64_t ans2 = (nums[median-1]*(median)-sum_till_median2) + (sum-sum_till_median2-nums[median-1]*(n-median));

    if(n%2==1)
    {
        cout << ans1;
    }
    else
    {
        cout << min(ans1, ans2);
    }
    return 0;
}