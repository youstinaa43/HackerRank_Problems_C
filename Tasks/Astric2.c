/*write a program to draw this  * * * * *
                                  * * * *
                                    * * *
                                      * *
                                        *         */
#include<stdio.h>

int main(void)
{
    int iterator1,stars,space,NumberofStars;
    printf("Please enter the number of starts: ");
    scanf("%d",&NumberofStars);

    for(iterator1=1;iterator1<=NumberofStars;iterator1++)
    {
        for(space=2;space<=iterator1;space++)
        {
            printf("  ");
        }
        for(stars=NumberofStars;stars>=iterator1;stars--)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
