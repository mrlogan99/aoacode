#include<stdio.h>

void main()

{

 int m[20][20],i,j,n;

 printf("Enter the number of vertices : \n");

 scanf("%d",&n);

 printf("Enter the matrix : \n");

 for(i=1;i<=n;i++){

 for(j=1;j<=n;j++)

 {

 printf("/nm[%d][%d]: ",i,j);

 scanf("%d",&m[i][j]);

 }}

 Allpairshortestpath(m,n);}

int min(int a,int b)

{

 if(a<b) {

 return a; }

 return b; }

void Allpairshortestpath(int m[20][20],int n)

{

 int a[10][10][10],i,j,k;

 for(i=1;i<=n;i++){

 for(j=1;j<=n;j++)

 {

 a[0][i][j]=m[i][j];

 }}

 for(k=1;k<=n;k++){

 for(i=1;i<=n;i++) {

 for(j=1;j<=n;j++)

 {

 a[k][i][j]=min((a[k-1][i][j]),(a[k-1][i][k]+a[k-1][k][j]));

 } }}

 for(k=0;k<=n;k++){

 printf("\nA(%d):\n",k);

 for(i=1;i<=n;i++)

 {

 for(j=1;j<=n;j++)

 {

 printf("%d\t",a[k][i][j]);

 }

 printf("\n");

 } }}
