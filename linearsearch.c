#include <stdio.h>
int LinearSearch(int arr[],int size,int target)
{
for (int i=0;i<size;i++)
{
 if(arr[i]==target)
 {
  return i;
 }
}
return -1;
}
int main()
{
int arr[]={10,20,30,40,50};
int size = sizeof(arr);
int key;
printf("Enter the element to search:");
scanf("%d", &key);
int result = LinearSearch(arr,size,key);
if(result != -1)
{
printf("Element found at index %d\n",result);
}
else
{
printf("Element not found in the array\n");
}
return 0;
}
