#include<stdio.h>

#include<math.h>

// int n;

int board[20];

int abs();

void print_board(int n)

{

 int i,j;

 for(i=1;i<=n;i++)

 { 

 printf("\t%d",i);

 }

 for(i=1;i<=n;i++)

 {

 printf("\n\n%d",i);

 for(j=1;j<=n;j++)

 {

 if(board[i] == j)

 printf("\tQ");

else

 printf("\t-");

 }

 printf("\n");

 }

 printf("\n");

}

int place(int row,int col)

{

 int i;

 for(i=1;i<=row-1;i++)

 {

 if (board[i] == col)

 return 0;

 else if (abs(board[i]-col) == abs(i-row))

 return 0;

 }

 return 1;

}

void queen(int row,int n)

{

 int col;

 for (col =1 ;col<=n;col++)

 {

 if(place(row,col))

 {

 board[row] = col;

 if(row == n)

 // printf("row is %d col is %d",row,col);
 print_board(n);

 else

 queen(row+1,n);

 } 

 } 

}

void main()

{

 int n; // storing the size of board.

 printf("Enter the number of queens::");

 scanf("%d",&n);

 queen(1,n);

}

OUTPUT:-

PS C:\Users\ADMIN\Desktop\AOA> gcc .\8queen.c

PS C:\Users\ADMIN\Desktop\AOA> .\a.exe

Enter the number of queens::4

 1 2 3 4

1 - Q - -

2 - - - Q

3 Q - - -

4 - - Q -

 1 2 3 4

1 - - Q -

2 Q - - -

3 - - - Q

4 - Q - -

PS C:\Users\ADMIN\Desktop\AOA>
