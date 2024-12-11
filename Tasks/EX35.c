/*write a program to get the position of a value in array using linear search*/
#include<stdio.h>
#define MAX_SIZE 20
void Linear_Search(int a[],int size,int key);
int main (void)
{
    int size=0,key;
    int Numbers[MAX_SIZE];
    printf("Please enter numbers up to 20 numbers to exit enter -1 \n");
    do
    {
        printf("\nEnter number %d :",size+1);
        scanf("%d",&Numbers[size]);
    }while(Numbers[size++]!= -1&&size<=20);
    size--;

    printf("=======The binary search ========\n");
    do
    {
        printf("\nPlease enter a value to search: ");
        scanf("%d",&key);
        Linear_Search(Numbers,size,key);

        printf("\nPlease enter Y to continue and N to exit\n");
    }
    while(getch()=='Y');
}

void Linear_Search(int a[],int size,int key)
{
    int pos=-1,i;
    for(i=0;i<size;i++)
    {
        if (key==a[i])
            {
                pos=i;
                break;
            }
    }

    if(pos==-1)
            printf("\n%d not found\n",key);
        else
            printf("\n%d found in %d\n",key,pos);
}


