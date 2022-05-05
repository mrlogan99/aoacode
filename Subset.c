
#include<stdio.h>

int count, d=11, a[10];

int w[] = {1,3,5,6,7,8,9};

void sumsubset(int sum , int index, int remainsum)

{

int i;

a[index]=1;

if (sum+w[index]==d)

{

printf("\n Solution = %d: ",++count);

for ( i = 0; i <= index; i++)

{

if(a[i]==1)

printf("%d, ",w[i]);

}

}

else if(sum+w[index]+w[index+1]<=d)

sumsubset(sum+w[index],index+1,remainsum-w[index]);

if ((sum+remainsum-w[index]>=d)&&(sum+w[index+1])<=d)

{

a[index]=0;

sumsubset(sum, (index+1),remainsum-w[index]);

}

}

int main()

{

int sum=0,i,n;

n=5;

for ( i = 0; i < n; i++)

{

sum=sum+w[i];

}

if(sum<d)

printf("\nThere is no solution");

printf("\nSolution Exists");

count=0;

sumsubset(0,0,sum);

return 0;

}/*

OUTPUT:-

Solution Exists

 Solution = 1: 1, 3, 7, 

 Solution = 2: 5, 6,
