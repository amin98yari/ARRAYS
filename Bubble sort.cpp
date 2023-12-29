#include<iostream.h>
#define n 100
main()
{ int j,i,a[n],temp;
for(i=0;i<=n-1;i++)
cin>>a[i];
for(i=0;i<=n-1;i++)
 for(j=0;j<=n-i;j++)
 if(a[j]>a[j+1])
 { temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp; }
}
