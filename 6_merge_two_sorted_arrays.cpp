#include<iostream>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
  int i=0;
  int j=0;
  while(i<m && j<n)
  {
    if(a[i]<=b[j])
    {
      cout<<a[i]<<" ";
      i++;
    }
    else
    {
      cout<<b[j]<<" ";
      j++;
    }
  }
  while(i<m)
  {
    cout<<a[i]<<" ";
    i++;
  }
  while(j<n)
  {
    cout<<b[j]<<" ";
    j++;
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
  merge(a,b,m,n);
  return 0;

}