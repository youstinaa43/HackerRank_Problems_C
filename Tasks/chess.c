#include<stdio.h>

void main(void)
{
    int n;//size of chess 4*4
    printf("please size of board:");
    scanf("%d",&n);

    int sol[n+1];   //save a one size more, to start from 1 to n store in it the solution

    int row[n+1];    //check if the row be stored or available 0 or 1
    int d1[2*n];    //no of diagonals right  actual number= 2*n-1 but add one and not use it
    int d2[2*n];   //no of diagonals left
    int c,r,found,i;      //for column and row
    for(i=1;i<=n;i++) row[i]=1;
    for(i=1;i<=n;i++) sol[i]=0;
    for(i=1;i<=2*n;i++) d1[i]=d2[i]=1;
    c=1;
    r=1;
    do
    {
        found=0;
        while(r<=n&& !found)
        {
            if (row[r]==1&&d1[r+c-1]==1&&d2[n-c+r]==1)
            {
                row[r]=0;
                d1[r+c-1]=0;
                d2[n-c+r]=0;
                found=1;
                sol[c]=r;
            }
            else
                r++;
        }
        if(found==1)
            {
                c++;
                r=1;
            }
        else
        {
                    c--;
                    r=sol[c];
                    row[r]=1;
                    d1[r+c-1]=1;
                    d2[n-c+r]=1;
                    r++;

        }

    }while(c>=1&&c<=n);

    if(c==0)
        printf("no solution");
    else
       for(i=1;i<=n;i++)
    {
        printf("put queen number %d in row number %d \n",i,sol[i]);
    }

}
