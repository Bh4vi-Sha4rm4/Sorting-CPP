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
}

int main() {
	
    int arr[]={5,13,6,9,12,11,8};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	lomutopartition(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
}