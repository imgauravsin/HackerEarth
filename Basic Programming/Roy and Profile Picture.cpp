


// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int w,n,i,j,a[1000],b[1000];	// Writing output to STDOUT
cin>>w;
cin>>n;
    
    
    for( i=0;i<n;i++)
   { cin>>a[i];
    for (j=0;j<n;j++)
    {cin>>b[j];

 if (a[i]<w || b[j]<w)
     {cout<<"UPLOAD ANOTHER"<<endl;
     break;}
     else
     {
         if(a[i]==w && b[j]==w || a[i]==b[j])
         {cout<<"ACCEPTED"<<endl;
             break;
         }
         else
         {cout<<"CROP IT"<<endl;
         
        break; }
     }}}
     return 0;}


    
    
    
    
    
    
    
    
    

 