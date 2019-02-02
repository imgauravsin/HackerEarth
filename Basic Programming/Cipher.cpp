#include<bits/stdc++.h>
 
using namespace std;
int main()
{
long	int i,j,n,m;
	char a[10000],b[10000];
	cin>>a;
	cin>>n;
	
	m=strlen(a);
	for (i=0;i<m;i++)
	{ j=n%26;
		if (a[i]>=97 && a[i]<=122)
		
{      a[i]=a[i]+j;
		if ( a[i]>122)
		a[i]= a[i]-26;}
		
		if (a[i]>=65 && a[i]<=90)
	{ j=n%26;
		a[i]=a[i]+j;
			if ( a[i]>90)
		a[i]= a[i]-26;
		
	}
	
		if (a[i]>=48 && a[i]<=57)
		{
		  j=n%10;
			a[i]=a[i]+j;
			if ( a[i]>57)
			
		a[i]= a[i]-10;
	
		}

	
		}
	
	cout<<a;
		return 0;}