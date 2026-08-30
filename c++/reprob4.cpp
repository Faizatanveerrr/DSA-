#include<bits\stdc++.h>
using namespace std;
int sum=0;
int  summ(int n)
{
    if (n==0)
    return n;
    return n+summ(n-1);
}
int main(){
    int n;
cout<<"Enter the range";
cin>>n;

sum=summ(n);
cout<<"the sum is:"<<sum;
return 0;
}