#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr)
{
    long long Sum = 0; 
    for (int i = 0; i < 5; i++)
    {
        Sum += arr[i];
    }

    int minElement = *min_element(arr.begin(), arr.end());
    int maxElement = *max_element(arr.begin(), arr.end());

    long long max_num = Sum - minElement;
    long long min_num = Sum - maxElement;

    cout << min_num << " " << max_num << endl;
}

int main()
{
    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}