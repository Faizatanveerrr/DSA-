#include<bits/stdc++.h>
using namespace std;
void subsequence(vector<int> &ds,vector <int> &ar,int i,int n)
{
    if(i==n)
    {
        for(auto it:ds)
        cout<< *it;
        return;
    }
    if(ar.size()==0)
    {
        cout<<endl;
        return;
        

    }
    ar.push_back(ar[i]);
    subsequence(ds,ar,i+1,n);
    ar.pop_back();
    
}
int main(){

    return 0;
}  