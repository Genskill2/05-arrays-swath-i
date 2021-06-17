/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[],int n) 
{
int m= a[0]; 
for(int i=0;i<n;i++) 
{  if(a[i]>m) 
 m=a[i]; 
 } 
return m; } 
 
 
int min(int a[],int n) 
{
int m= a[0]; 
for(int i=0;i<n;i++) 
{  if(a[i]<m) 
 m=a[i]; 
 } 
return m; } 
 
float average(int a[], int n) 
{
float sum= 0.0; 
for(int i=0;i<n;i++) 
{ sum+= a[i]; 
} 
return sum/n; 
} 
 
int mode(int a[],int n) 
{
int m=0;
int mod=0; 
for(int i=0;i<10;i++) 
{
int c=0;
 
for(int j=0;j<n;j++) 
{
if(i==a[j]) 
c++; }
 
if(c>m) 
{m=c; 
mod= i; }
} 
 
return mod; } 
 
int factors(int n, int fact []) 
{
int x=0; 
int arr[100]; 
 
 
for(int i=2;i<=100;i++) 
{int f=0;
for(int j=1;j<=i;j++) 
{  if(i%j==0)
  f++; 
  } 
if(f==2) 
arr[x++]=i; 
 
} 
 
int i=0; 
int j=0; 
while(n>1) 
{
  if( n%arr[i]==0) 
{  fact[j++]=arr[i]; 
   n= n/arr[i];} 
   else 
   i++; 
  } 
return j; 
}
