#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int sum=0,i,n;
    char a[1000000];
    cin>>a;
    n=strlen(a);
    for (i=0;i<n;i++)
    {
    	sum=sum+a[i]%96;
    }
    cout<<sum;
    return 0;}