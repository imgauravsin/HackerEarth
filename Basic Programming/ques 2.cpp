

#include <iostream>

using namespace std;

int main()
{
    int n,x,y,a[1000];
    cin>>n;
    cin>>x;
    cin>>y;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(x<=a[0] && y>=a[n-1])
    cout<<"YES";
else
    cout<<"NO";
    
    return 0;
}
