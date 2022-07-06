#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    string queries[q];
    for(int i=0; i<q; i++)
    {
        cin>>queries[i];
    }
for(int j=0; j<q; j++)
{
    int count=0;
    for(int k=0; k<n; k++)
    {
        if(queries[j]==a[k])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
}