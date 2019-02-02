#include <iostream>
using namespace std;
int main()
{
 int num;
 int sum;
 int i;
 int j;
 int flag;
 cin>>num;

 for(i=2;i<=num;i++)
 {
 flag=0;
 
 for(j=2;j<i;j++){
 
 
 if(i%j==0)
 {
 flag=1;
 }
 }
 
 
 if(flag==0)
 {
 cout<<" "<<i;
 }
 
 }
}