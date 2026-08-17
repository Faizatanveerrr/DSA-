#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,20,30,40,50};
    int value,index;
    cout<<"Enter the value to be deleted";
    cin>>value;
    for(int i ;i<v.size();i++)
    {
        if(v.at(i)==value)  {
            index=i;
            break;
        }  }
        v.erase(v.begin()+index);
  for(int i=0;i<v.size();i++){
       cout<< v.at(i) << " ";
       }

}
