#include<bits\stdc++.h> 
using namespace std;
int main(){

    vector 
    <int> v={10,20,30,40,50};
    int position,number;
    cout<<"Enter the position ";
    cin>>position ;
    v.erase(v.begin()+position);
       for(int i=0;i<v.size();i++){
       cout<< v.at(i) << " ";
       }

}
