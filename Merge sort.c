#include<stdio.h> 

#include<stdlib.h

int n;

void main()

{

 int i,low,high;

 int A[10];

 void MergeSort(int A[10],int low,int high);

 void Display(int A[10]);

 printf("\n\t\tMerge Sort \n");

 printf("\n Enter the length of list:"); 

 scanf("%d",&n);

 printf("\nEnter list element:"); 

 for(i=0;i<n;i++)

 scanf("%d",&A[i]);

 low=0;

 high=n-1;

 MergeSort(A,low,high);

 Display(A);

}

void MergeSort(int A[10],int low,int high)

{

 int mid;

 void Combine(int A[10],int low,int mid,int high);

 if(low<high)

 {

 mid=(low+high)/2; 

 MergeSort(A,low,mid); 

 MergeSort(A,mid+1,high); 

 Combine(A,low,mid,high); 

 }

}

void Combine(int A[10],int low,int mid,int high)

{

 int i,j,k;

 int temp[10];

 k=low; 

 i=low; 

 j=mid+1; 

 while (i<=mid && j<=high)

 {

 if(A[i]<=A[j]) {

 temp[k]=A[i];

 i++;

 k++;

 } 

 else {
   temp[k]=A[j];

 j++;

 k++;

 } 

 }

 while (i<=mid)

 {

 temp[k]=A[i];

 i++;

 k++;

 }

 while (j<=high)

 {

 temp[k]=A[j];

 j++;

 k++;

 }

 for(k=low;k<=high;k++)

 A[k]=temp[k]; 

}

void Display(int A[10])

{

 int i;

 printf("\n\nThe Sorted Array Is...\n");

 for(i=0;i<n;i++)

 printf("%d\t",A[i]);

}

OUTPUT:-

PS C:\Users\ADMIN\Desktop\AOA> gcc .\Mergesort.c

PS C:\Users\ADMIN\Desktop\AOA> .\a.exe

Merge Sort 

Enter the length of list:5

Enter list element:

15

35

5

55

45

The Sorted Array Is...

5 15 35 45 55
