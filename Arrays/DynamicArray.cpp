#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, q;
    cin>> n >>q;
    vector<int> arr[n];
    int lastAnswer =0;
    for(int i=0;i<q; i++)
    {
        int choice,x,y;
        cin>> choice >> x >> y;
        int idx = ((x^lastAnswer)%n); 
        if(choice==1)
        {
            arr[idx].push_back(y);
        }
        else if(choice==2)
        {
            int pos = y % ((int)arr[idx].size());
            lastAnswer = arr[idx][pos];
            cout<<lastAnswer<<endl;
        }
    }
    return 0;
    
}