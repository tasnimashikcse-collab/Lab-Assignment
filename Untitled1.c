#include <stdio.h>

void selectionSort(int arr[], int n)
{
int i,j,minIndex,temp;

for(i=0;i<n-1;i++)
    {
minIndex =i;
for(j=i+1;j<n;j++)
{
if(arr[j]<arr[minIndex])
{
minIndex =j;
}


}

if(minIndex !=i)
        {
 temp = arr[i];
arr[i] = arr[minIndex];
 arr[minIndex] = temp;
 }
}
}

void printArray(int arr[], int n)
{
int i;

for(i=0;i<n;i++)
    {
printf("%d ", arr[i]);
}

printf("\n");
}

int main()
{
int arr[] = {45,18,72,9,31,56};   // Test Case 1: Unsorted Array
    // int arr[]={10,20,30,40,50};    // Test Case 2:Already Sorted Array
    // int arr[]={50,40,30,20,10};  // Test Case 3:Reverse Sorted Array
    // int arr[]={7,3,7,2,3};        // Test Case 4:Duplicate Values
    // int arr[]={99};   // Test Case 5:Single Element Array

    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Before Sorting:");
printArray(arr,n);

selectionSort(arr,n);

printf("After Sorting:");
printArray(arr,n);

return 0;
}
