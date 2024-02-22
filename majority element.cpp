#include<stdio.h>
#include<stdbool.h>
bool ismajority(int arr[],int n, int x)
{
  int i;
  int last_index = n%2? (n/2+1): (n/2);
  for(i=0;i<last_index;i++)
  {
    if (arr[i] == x && arr[i+n/2]==x)
      return 1;
  }
  return 0;
}
int main()
{
  int arr[]={1,2,3,4,4,4,4};
  int n= sizeof(arr)/sizeof(arr[0]);
  int x =4;
  if(ismajority(arr,n,x))
    printf("%d appears more than %d times in arr[]",x,n/2);
  else
    printf("%d does not appears more than %d times in arr[]",x,n/2);
return 0;
}