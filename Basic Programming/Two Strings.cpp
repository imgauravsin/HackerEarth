#include <stdio.h>
int main()
{
int a1[26];
char a[100000],b[100000];
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a);
scanf("%s",b);
if(strlen(a)==strlen(b))
{
for(j=0;j<26;j++)
a1[j]=0;
for( j=0;j<strlen(a);j++)
{
a1[a[j]-'a']++;
a1[b[j]-'a']--;
}
for(j=0;j<26;j++)
if(a1[j]!=0)
break;
if(j==26)
printf("YES\n");
else
printf("NO\n");
}
else
printf("NO\n");
}
return 0;
}