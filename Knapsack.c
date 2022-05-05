#include<stdio.h>

void knapsack(int n,float weight[],float profit[],float capacity)

{

    float X[20],tp=0;

    int i,j,u;

    u=capacity;

    for(i=0;i<n;i++)

    X[i]=0.0;

    for(i=0;i<n;i++)

    {

        if(weight[i]>u)

        break;

    else

    {

        X[i]=1.0;

        tp=tp+profit[i];

        u=u-weight[i];

    }

}

    if(i<n)

    X[i]=u/weight[i];

    tp=tp+(X[i]*profit[i]);

    printf("The result is:- ");

    for(i=0;i<n;i++)

        printf("%f\t",X[i]);

    printf("\nMaximum profit is:- %f",tp);

}

int main()

{

    float weight[20],profit[20],capacity;

    int num,i,j;

    float ratio[20],temp;

    printf("\nEnter the number of objects:- ");

    scanf("%d",&num);

    printf("\nEnter the weight and profit of each object:- ");

    for(i=0;i<num;i++)

    {

        scanf("%f %f",&weight[i],&profit[i]);

    }

    printf("\nEnter the capacity of knapsack:- ");

    scanf("%f",&capacity);

    for(i=0;i<num;i++)

    {

        ratio[i]=profit[i]/weight[i];

    }

    

    for(i=0;i<num;i++)

    {

        for(j=i+1;j<num;j++)

        {

            if(ratio[i]<ratio[j])

            {

                temp=ratio[j];

                ratio[j]=ratio[i];

                ratio[i]=temp;

                temp=weight[j];

                weight[j]=weight[i];

                weight[i]=temp;

                temp=profit[j];

                profit[j]=profit[i];

                profit[i]=temp;

            }

        }

    }

    knapsack(num,weight,profit,capacity);

    return(0);

}

OUT PUT:-

Windows PowerShell

Copyright (C) Microsoft Corporation. All rights reserved.

Try the new cross-platform PowerShell https://aka.ms/pscore6

PS C:\Users\ADMIN> cd .\Desktop\AOA\

PS C:\Users\ADMIN\Desktop\AOA> gcc .\knapsack.c

PS C:\Users\ADMIN\Desktop\AOA> .\a.exe

Enter the number of objects:- 3

Enter the weight and profit of each object:- 

18 30

15 21

10 18

Enter the capacity of knapsack:- 20

The result is:- 1.000000      0.555556        0.000000

Maximum profit is:- 34.666668

