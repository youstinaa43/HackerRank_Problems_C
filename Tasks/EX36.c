/*write a program to binary search using recursion*/
#include<stdio.h>
#define MAX_SIZE 20
void print_array(int a[],int size);
int BinarySearch(int a[],int lower, int upper, int key);
void bubble_sort(int a[],int size);
int main (void)
{
    int size=0,sort,key;
    int Numbers[MAX_SIZE];
    printf("Please enter numbers up to 20 numbers to exit enter -1 \n");
    do
    {
        printf("\nEnter number %d :",size+1);
        scanf("%d",&Numbers[size]);
    }
    while(Numbers[size++]!= -1&&size<=20);
    size--;

    printf("=======The binary search ========\n");
    do
    {
        printf("\nPlease enter a value to search: ");
        scanf("%d",&key);
        sort=BinarySearch(Numbers,0,size,key);
        if(sort==-1)
            printf("%d not found\n",key);
        else
            printf("%d found in %d",key,sort);
        printf("\nPlease enter Y to continue and N to exit\n");
    }
    while(getch()=='Y');


}

int BinarySearch(int a[],int lower, int upper, int key)
{
    if(lower>upper)
        return -1;
    int mid=(lower+upper)/2;
    if(key==a[mid]) return mid;
    else if(key>a[mid])
        return BinarySearch(a,mid+1,upper,key);
    else
        return BinarySearch(a,lower,mid-1,key);

}
void print_array(int a[],int size)
{
    int i;
    for(i=0; i<size; i++) //traverse array
        printf("%d\n",a[i]);
}

