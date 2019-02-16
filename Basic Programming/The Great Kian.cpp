
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
	long int a[n],i,s1=0,s2=0,s3=0;
	for(i=0;i<n;i=i+1){
    	cin>>a[i];
	}
	for(i=0;i<n;i=i+3){
	    s1+=a[i];
	}
	for(i=1;i<n;i=i+3){
	    s2+=a[i];
	}
	for(i=2;i<n;i=i+3){
	    s3+=a[i];
	}
	cout<<s1<<" "<<s2<<" "<<s3;
	return 0;}
