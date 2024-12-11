/*write a program to insert new value in the array (sorted list)*/
#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 20
void print_array(int a[],int size);
void bubble_sort(int a[],int size);
void insert_item(int a[],int size,int item,int pos);
void Get_Position(int data[],int value,int size);

int main (void)
{
    int size=0,insertedvalue,position;
    int Numbers[MAX_SIZE];
    printf("Please enter numbers up to 20 numbers to exit enter -1 \n");
    do
    {
        printf("\nEnter number %d :",size+1);
        scanf("%d",&Numbers[size]);
    }while(Numbers[size++]!= -1&&size<=20);
    size--;

    printf("=======The sorted numbers are ========\n");
    bubble_sort(Numbers,size);
    printf("=======The insert a number in a position ========\n");
    do
    {
        printf("\nPlease enter a value to insert: ");
        scanf("%d",&insertedvalue);
        Get_Position(Numbers,insertedvalue,size);
        printf("\nPlease enter Y to continue and N to exit\n");
        size++;
    }while(getch()=='Y'&&size<20);


}
void bubble_sort(int a[],int size)
{
    int sorted,temp,iterator;
    do
    {
        sorted=1;
        for(iterator=0;iterator<size-1;iterator++)
        {
            if (a[iterator]>a[iterator+1])
            {
                sorted=0;
                temp=a[iterator];
                a[iterator]=a[iterator+1];
                a[iterator+1]=temp;
            }


        }
    }while(!sorted);
    print_array(a,size);
}
void Get_Position(int data[],int value,int size)
{
     int pos=-1,i,insertpos;
     for (i=0;i<size;i++)
     {
         if(data[i]>value)
         {
             pos=0;
             break;
         }
         if(data[i]<value&&value<=data[i+1])
            {
                pos=i+1;
                break;
                }
     }
     if(pos==-1) insertpos=size;
     else
        insertpos=pos;

     insert_item(data,size,value,insertpos);

}
void insert_item(int a[],int size,int item,int pos)
{
    int iterator;
    for (iterator=size-1; iterator>=pos; iterator--)
    {
        a[iterator+1]=a[iterator];
    }
    a[pos]=item;
    print_array(a,size+1);
}

void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}

