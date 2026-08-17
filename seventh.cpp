#include <bits/stdc++.h>
using namespace std;
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
    int maximum=v.at(0);
    for(int i=0;i<v.size();i++){
        if(v.at(i)>maximum)
        maximum=v.at(i);
    }
    cout<< "Maximum element is :"<< maximum;
    return 0;
}