#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int sock(int n, vector<int>ar)
{
    unordered_set<int> unmatched ;
    int pair=0;
    for(int color : ar)
    {
        if(unmatched.count(color))
        {
            unmatched.erase(color);
            pair++;
        }
        else
        {
            unmatched.insert(color);
        }
    } 
    
    return pair;
    }



int main() {
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int result=sock(n,ar);
    cout<<result;
}
