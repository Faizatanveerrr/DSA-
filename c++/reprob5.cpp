#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void reverse(int l,int r,vector<int> &a)
{
    if(l>=r)
    return;
    swap(a[l],a[r]);
    reverse(l+1,r-1,a);
}
int main()
{
    int n;
    vector<int> a;
    cout<<"Enter the number of elements ";
cin>>n;
cout<<"Enter elements";
for(int i=0;i<n;i++)
{
 int x;
 cin>>x;
    a.emplace_back(x);
}

reverse(0,n-1,a);
cout<<"The reversead array is";
for(int i=0;i<n;i++)
{
 
    cout<<a[i];
}


return 0;
}