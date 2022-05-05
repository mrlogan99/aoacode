#include <stdio.h>

#define SIZE 10

int main()

{

 int A[SIZE],KEY,i,pos,low,high,n;

 int BinSearch(int A[SIZE],int KEY,int low,int high,int n);

 printf("\n How Many element in an array?");

 scanf("%d",&n);

 printf("\n Enter the elements");

 for(i=0;i<n;i++)

 scanf("%d",&A[i]);

 printf("\n Enter the element which is to be searched");

 scanf("%d",&KEY);

 pos=BinSearch(A,KEY,low=0,high=n-1,n);

 if (pos==-1)

 printf("\n element is not present");

 else

 printf("\n The element is present at %d",pos);

}

int BinSearch(int A[SIZE],int KEY,int low,int high,int n)

{

 int m;

 m=(low+high)/2;

 if(KEY==A[m])

 return m;

 else if(KEY<A[m])

 BinSearch(A,KEY,low,m-1,n);

 else 

 BinSearch(A,KEY,m+1,high,n);

}

OUTPUT:-

PS C:\Users\ADMIN\Desktop\AOA> gcc .\Binary.c

PS C:\Users\ADMIN\Desktop\AOA> .\a.exe

How Many element in an array?6

Enter the elements 10 20 30 40 50 60

Enter the element which is to be searched 50

The element is present at 4
