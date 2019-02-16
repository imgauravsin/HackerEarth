 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[10000];
    int i,n,sum=0;
    cin>>a;
    n=strlen(a);
    for(i=0;i<n;i++)
    {sum=sum+a[i]-96;
}
cout<<sum;
return 0;
}
