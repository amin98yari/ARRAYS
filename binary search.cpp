#include<iostream>
void b_search(int a[] , int n)
{
int flag=0;
int i=0;
int j=n-1;
int mid=(i+j)/2;
while((i<j) && !(flag))
{
 if(x==a[mid])
 { cout<<"found";
 flag=1; }
else if(x<a[mid])
 j=mid-1;
else
 i=mid+1;
mid=(i+j)/2;
