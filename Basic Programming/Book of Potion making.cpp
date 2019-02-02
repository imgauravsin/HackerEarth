
// Sample code to perform I/O:

#include <iostream>


using namespace std;

int main() {
long	int num,a=0,i=10,r,p,sum,z,count=0;
cin>>num;
while(num>0)
{
num=num/10;
a++;
}

	if (a==10)
	{
		while (num!=0 && i!=0)
		{
			r=num%10;
			num=num/10;
			sum=r*i;
			i=i-1;
			break;
		}
					
if (sum%11==0)

{cout<<"Legal ISBN";
}
else
{
cout<<"Illegal ISBN";
}}



else
{cout<<"Illegal ISBN";} 
return 0;}


	