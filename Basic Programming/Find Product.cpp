
// Sample code to perform I/O:

#include <iostream>
#include<math.h>

using namespace std;

int main() {
	int a[100],n,ans=1,b;
	cin>>n;
	b=pow(10,7);
	for(i=0;i<=n;i++)
	{cin>>a[i];
	    ans=ans*a[i]%(b+7);
	    
	}
	
	
	
 