#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{/*
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL); */
ll n,q,x,s=0,l,r;
cin>>n>>q;
ll a[n];
a[0]=0;
for(int i=1;i<=n;i++)
{
cin>>x;
s+=x;
a[i]=s;
}
while(q--)
{
cin>>l>>r;
cout<<(a[r]-a[l-1])/(r-l+1)<<endl;
}
return 0;
}