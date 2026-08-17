#include <bits\stdc++.h>
using namespace std;
int main(){
    vector <int> v ={10,20,30,40,50};
    for(vector<int>::reverse_iterator it=v.rbegin();it!=v.rend();it++)
    {
        cout<< *it<<" ";
    }

}