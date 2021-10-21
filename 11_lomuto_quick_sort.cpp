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

void qsort(int arr[], int l, int h)
{
  if(l<h)
  {
    int p= lomutopartition(arr,l,h);
    qsort(arr,l,p-1);
    qsort(arr, p+1, h);
  }
}

int main()
{
  int arr[7]={8,4,7,9,3,10,5};
  qsort(arr, 0, 6);
  for(int i=0; i<7; i++)
    cout<<arr[i]<<" ";
  return 0;
}