#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 int t,i,a,b,n,sh[1000000],sm[10000],eh[10000],
 em[100000],h[10000],m[10000];
    cin>>t;
    
    for (i=0;i<t;i++)
    {
    	cin>>sh[i]>>sm[i]>>eh[i]>>em[i];
    	a=60*sh[i]+sm[i];
    	b=60*eh[i]+em[i];
    	n=abs(a-b);
    	h[i]=n/60;
    	m[i]=n%60;
    
    cout<<h[i];
    cout<<" ";
    cout<<m[i];
    cout<<"\n";}
    return 0;}