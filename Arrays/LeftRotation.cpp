#include<iostream>
#include<vector>
using namespace std;
 vector<int>leftrot(vector<int> &arr, int d)
    {
        vector<int>rotatedarray;
        for(int i=d; i<arr.size(); i++)
        {
            rotatedarray.push_back(arr[i]);
        }
        for(int i =0; i<d; i++)
        {
            rotatedarray.push_back(arr[i]);
        }
        return rotatedarray;
        
    }
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>result;
    result= leftrot(a,d);
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }

}