#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter the no of elements";
    cin >>n;
     int x;
    cout<<"Enter "<< n <<"elements";
    for (int i=0;i<n;i++)
    {
       
        cin>>x;
        v.push_back(x);
    }
    cout<<" Enter the number to be searched";
    cin>>x;
for(vector<int>::iterator it=v.begin();it!=v.end();it++)
if (*it==x){
    cout<< "Element found at";
    break;

}
}