
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	long int a[1000000],sum=0,n,i,j;
	cin>>n;
	for (i=0;i<n;i++)
	{
	    cin>>a[i];
	sum=sum+a[i];
	}
	cout<<sum;
	return 0;
}
	 
