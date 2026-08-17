#include<bits/stdc++.h>
using namespace  std;
int main(){

    vector <int> v;
    int n;
    cout<<"Enter no of elements";
    cin>> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    } 
    vector<int>::iterator it=v.begin();
   int  max=*it;
   for(it=v.begin();it!=v.end();it++)
   {
    if(max<*it)
    max=*it;
   }
   cout<< "the maximum element is:"<< max;
}