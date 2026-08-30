#include<bits/stdc++.h>
using namespace std;
int check(int l,int r,string s)
{
    if(l>=r )
    return 1;
    if(s[l]!=s[r])
    return -1;
     return check(l+1,r-1,s);
}
int main(){
    string s;
    cout<<"Enter a string";
    cin>>s;
    int i=check(0,s.size()-1,s);
    if (i==-1)
    {
        cout<<"The string "<<s<<"is not palindrome";
    
    }
    else{
        cout<<"The string "<<s<<"is palindrome";
    
    }
    return 0;
}