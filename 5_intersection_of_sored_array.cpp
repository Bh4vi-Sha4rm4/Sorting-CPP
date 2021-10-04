#include<iostream>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
  int i=0, j=0;
  while(i<m && j<n)
  {
    if(i>0 && a[i]==a[i-1])
    {
      i++;
      continue;
    }
    if(a[i]<b[j])
    i++;
    else if (b[j]<a[i])
    j++;
    else
    {
      cout<<a[i]<<" ";
      i++;
      j++;
    }
  }
}

int main()
{
  int m,n;
  cout<<"Enter the first input: ";
  cin>>m;
  cout<<"Enter the second input: ";
  cin>>n;


  int a[m];
  cout<<"Enter first sorted array with "<<m<<" inputs: ";
  for(int i=0; i<m; i++)
  cin>>a[i];
  int b[n];
  cout<<"Enter second sorted array with "<<n<<" inputs: ";
  for(int i=0; i<n; i++)
  cin>>b[i];

  cout<<"Common elements in both sorted arrays are: ";
  intersection(a,b,m,n);
  return 0;
}