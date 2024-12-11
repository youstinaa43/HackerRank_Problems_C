/*write a program to draw this  *
                                * *
                                * * *
                                * * * *
                                * * * * *         */
#include<stdio.h>

int main(void)
{
    int iterator1,iterator2,NumberofStars;
    printf("Please enter the number of starts: ");
    scanf("%d",&NumberofStars);

    for(iterator1=1;iterator1<=NumberofStars;iterator1++)
    {
        for(iterator2=1;iterator2<=iterator1;iterator2++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

