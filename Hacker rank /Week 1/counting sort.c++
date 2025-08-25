#include <iostream>
#include <vector>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    vector<int> freq(100, 0);
    for (int num : arr) {
        freq[num]++;
    }
    return freq;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    vector<int>freq=countingSort(arr);

    // Print the sorted array
    for (int i=0; i<100; i++) {
       cout<<freq[i]<<" ";
    }
   
}