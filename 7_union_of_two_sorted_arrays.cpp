#include<iostream>
using namespace std;
void sortedunion(int a[], int b[], int m, int n)
{
  int i=0, j=0;
  while(i<m && j<n)
  {
    if(i>0 && a[i]==a[i-1])
    {
      i++; 
      continue;
    }
    if(j>0 && b[j]==b[j-1])
    {
      j++; 
      continue;
    }
    if(a[i]<=b[j])
    {
      cout<<a[i]<<" ";
      i++;
    }
    else if(a[i]>b[j])
    {
      cout<<b[j]<<" ";
      j++;
    }
    else
    {
      cout<<a[i]<<" ";
      i++;
      j++;
    }
  }
  while(i<m )
  {
    if(i==0 && a[i]!=a[i-1])
    {
      cout<<a[i]<<" ";
      i++;
    }
  }
  while(j<n)
  {
    if(j==0 && b[j]!=b[j-1])
  {
      cout<<b[j]<<" ";
      j++;
    }
  }
}
int main()
{
  int m,n;
  cout<<"Enter number of elements in array1: ";
  cin>>m;
  cout<<"Enter number of elements in array2: ";
  cin>>n;
  int a[m];
  cout<<"Enter sorted array1 elments: ";
  for(int i=0; i<m ; i++)
  cin>>a[i];
  int b[n];
  cout<<"Enter sorted array2 elments: ";
  for(int i=0; i<n ; i++)
  cin>>b[i];
  sortedunion(a,b,m,n);
  return 0;

}