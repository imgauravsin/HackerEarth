
// Sample code to perform I/O:

#include <iostream>
#include<string>
#include<cstring>

using namespace std;

int main() {
	int n; 
	char a[1000];
	cin >>a;
	n=strlen(a);
	
	if(a[0]==a[n-1])
	cout<<"YES";
	else
	cout<<"NO";
	return 0;



}

// Warning: Printing unwanted or ill-formatt