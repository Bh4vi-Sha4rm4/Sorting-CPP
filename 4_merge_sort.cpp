#include<iostream>
using namespace std;
void mergesort(int a[], int b[], int m,  int n)
{
  int i=0, j=0;
  while(i<m && j<n)
  {
    if(a[i]<b[j])
    { cout<<a[i]<<" "; i++;}
    else{cout<<b[j]<<" "; j++;}
  }
  while(i<m)
  {
    cout<<a[i]<<" ";
  }
  while(j<n)
  {
    cout<<b[i]<<" ";
  }
}

  
int main()
{
  int m,n;
  cin>>m>>n;
  int arr[m];
  for(int i=0; i<m; i++)
  cin>>arr[i];
  int brr[n];
  for(int i=0; i<n; i++)
  cin>>brr[i];
  mergesort(arr,brr, m,n);
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
}
