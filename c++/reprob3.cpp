#include<bits\stdc++.h>
using namespace std;
void print(int n,string name)
{
    if(n==0)
    return;
    cout<<name;
    print(n-1,name);
}

int main(){
    int n;
    string s;

    cout<<"Enter your name";
    cin>>s;
    cout<<"Enter no of times you want to print your name";
    cin>>n;
    print(n,s);
    return 0;

}