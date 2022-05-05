#include<stdio.h>
void main()
{
 int n,j,key;
 printf("\n\t\tInsertion Sort");
 printf("\n Enter the number of elements"); 
 scanf("%d",&n);
 int arr[n];
 printf("\n Enter the element of array"); 
 for( int i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 for(int i=1;i<n;i++)
 {
 key=arr[i]; 
 j=i-1; 
 while(j>=0 && key<arr[j]) 
 { 
arr[j+1]=arr[j];
 j--; 
 }
 arr[j+1]=key;
 }
printf("\n The sorted array is...\n");
for(int i=0;i<n;i++)
 printf("%d ",arr[i]);
}
OUTPUT:-
PS C:\Users\ADMIN\Desktop\AOA> gcc .\Insertion.c
PS C:\Users\ADMIN\Desktop\AOA> .\a.exe
 Insertion Sort
Enter the number of elements 5
Enter the element of array
20
50
30
10
40
The sorted array is...
10 20 30 40 50





#include<stdio.h> 

void main() 

{

 int min,temp,n;

 printf("\n\t\tSelection Sort");

 printf("\n Enter the number of elements"); 

scanf("%d",&n);

 int arr[n];

 printf("\n Enter the element of the array"); 

 for( int i=0;i<n;i++)

 {

 scanf("%d",&arr[i]);

 }

 for(int i=0;i<n-1;i++)

 {

 min=i; 

for(int j=i+1;j<n;j++)

 {

 if(arr[j]<arr[min]) 

 {

 min=j; 

 }

 }

 temp=arr[i]; 

 arr[i]=arr[min]; 

 arr[min]=temp;

 }

 printf("\n The sorted array is...\n");

 for(int i=0;i<n;i++)

 {

 printf("%d ",arr[i]);

 }

}

OUTPUT:-

PS C:\Users\ADMIN\Desktop\AOA> gcc .\Selection.c

PS C:\Users\ADMIN\Desktop\AOA> .\a.exe

 Insertion Sort

Enter the number of elements 5

Enter the element of array

4

2

3

1

5

 The sorted array is...

1 2 3 4 5 

PS C:\Users\ADMIN\Desktop\AOA>
