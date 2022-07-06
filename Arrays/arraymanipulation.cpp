#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a,b,k;
    cin>>n>>m;
    long int *arr=new long int[n+1]();
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>k;
        arr[a]+=k;
        if(b+1<=n){
            arr[b+1]-=k;
        }
    }
    long long int sum=0,max=0;
    for(int j=1;j<=n;j++)
    {
        sum = sum+arr[j];
        if(sum>max)
        {
            max=sum;
        }
    }
   cout<<max<<endl;
}