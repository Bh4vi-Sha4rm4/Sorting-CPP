#include<iostream>
using namespace std;
int lomutopartition(int arr[], int l, int h)
{
  int pivot=arr[h];
  int i= l-1;
  for(int j=l; j<=h; j++)
  {
    if(arr[j]<pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[h]);
  return (i+1);
}

int kthsmallest(int arr[], int n, int k)
{
  int l=0; int r=n-1;
  while(l<=r)
  {
    int p= lomutopartition(arr,l,r);
    if(p==k)
    return p;
    else if(p>k-1)
    r=p-1;
    else
    l=p+1;
  }
  return -1;
}
int main()
{
  int arr[7]={8,4,7,9,3,10,5};
  cout<<"kth smallest element in the array is: "<<kthsmallest(arr, 7, 3);
  return 0;
}