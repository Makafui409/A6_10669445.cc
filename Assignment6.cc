include <iostream>
using namespace std;
int bin_search(int arr[],int fn,int a,int b)
{
	int c;
	if(a>b)
	return -1;
	else
	{
		c=(a + b)/2;
		if(fn<arr[c])
		bin_search(arr,fn,a,c-1);
		else if(fn>arr[c])
		bin_search(arr,fn,c+1,b);
		else return c;
	}

}
int main()
{
  int i,a,b,c,fn,arr[55];
  int number;
  cout<<"enter the number:";
  cin>> number;
  
  
  cout<<"enter the array elements:";
  for(i=0;i<number;i++)
  cin>> arr[i];
  
  cout<<"enter the elements to search:"<<endl;
  cin >>fn;
  
  int value=bin_search(arr,fn,0,number-1);
  
  if(value==-1)
  cout<<fn<<"Not found:";
  else
  {
  	cout<<"The elements"<<fn<<"found at position"<<value + 1;
  }
  
  return 0; 
}
