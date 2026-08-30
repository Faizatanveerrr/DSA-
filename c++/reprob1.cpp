#include<bits\stdc++.h>
using namespace std;
int cnt=0;
void print(string name)
{
    if(cnt==5)
    return;
    cout<<name <<endl;
    cnt++;
    print(name);
    
}
int main()
{
    string s;
    cout<<"Enter your name";
    cin>>s;
    print(s);

   return 0;

} 

