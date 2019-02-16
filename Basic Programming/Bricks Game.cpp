
// Sample code to perform I/O:

#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n,sum=3,count=1,i=3,d;
	cin >> n;
	while(sum>=n){
	     i=i+3;
     	sum=i+sum;
	    count+=1;}
	  
    d=n-sum;
    if (count==d || count==0)
    {cout<<"Patlu";}
    else
    {cout<<"Motu";}

// Reading input 

return 0;}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here
