#include <iostream>
using namespace std;


/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
*/

int main()
{
    long long int n;
    cin >> n;
    long long int sum=0;
    long long int num;
    for (long long int i =1; i<n; i++)
    {
        cin >> num;
        sum = sum + num;
    }

    long long int sum_first_N = n*(n+1)/2;
    long long int diff = sum_first_N-sum;
    cout << diff;

    return 0;
}