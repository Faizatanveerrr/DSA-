#include<bits/stdc++.h>
using namespace std;
int main(){
    int position,number;
    vector<int> v={10,20,30,40,50};
    cout<<"Enter the position and the number to insert";

    
    cin>> position >> number;
    v.insert(v.begin()+position,number);
    for(int i=0;i<v.size();i++){
       cout<< v.at(i) << " ";
       

    }
}

