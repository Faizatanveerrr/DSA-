#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n==0)
    return 0;
    if(n==1 || n==2)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}


int main(){
    int n;
    cout<<"Entet which fibonaacii term you want ";
    cin>>n;
    int num=fibonacci(n);
    cout <<" The " << n<<"th fibonacci term is :"<< num; 
return 0;
}