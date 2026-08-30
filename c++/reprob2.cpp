#include <bits/stdc++.h>
using namespace std;
int i=0;
void print(int n){
    if (i>=n)
    return; 
    cout<<i;
    i++;
    print(n);
    
    
}
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    print(n);
    return 0;
}