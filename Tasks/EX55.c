/*Write a program to structure to store the name, account number and balance of customers and store their information.
1
Write a function to print the names of all the customers having balance less than $200.
2-Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print
the incremented value of their balance.*/


#include<stdio.h>
#define MAX 100
typedef struct
{
    int account_number;
    char name[20];
    float balance;

}customer;
void print_customer_name(customer *ptr[], int n);
void increment_balance(customer *ptr[], int n);

void main(void)
{
    customer *ptr[MAX];
    int n,i;
    printf("number of customers:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        ptr[i]=(customer *)malloc(sizeof(customer));
        if(ptr[i]==NULL)
        {
            printf("out of memory\n");
            exit(1);
        }
        else
        {
            printf("\ndata of customer %d\n",i+1);
            printf("\naccount number: ");
            scanf("%d",&ptr[i]->account_number);
            fflush(stdin);
            printf("\nPlease name:");
            fflush(stdin);
            gets(ptr[i]->name);
            fflush(stdout);
            printf("\nPlease balance: ");
            scanf("%f",&ptr[i]->balance);
        }
    }
    print_customer_name(ptr,n);
    increment_balance(ptr, n);


    for (i = 0; i < n; i++) {
        free(ptr[i]);
    }
}

void print_customer_name(customer *ptr[], int n)
{
        int found = 0,i;

    printf("===============name of customer that it balance less than 200$===============\n");
    for(i=0;i<n-1;i++)
    {
        if (ptr[i]->balance <200)
            printf("The name of customer : %s\n",ptr[i]->name);
            found=1;
    }
    if (!found) {
        printf("No customers with balance less than $200.\n");
    }

}

void increment_balance(customer *ptr[], int n)
{
        printf("===============updated balance that more than 1000$===============\n");
        int i;
    for(i=0;i<n-1;i++)
    {
        if (ptr[i]->balance >1000)
        {
            ptr[i]->balance+=100;
            printf("The updated balance of customer %s is %.5f\n",ptr[i]->name,ptr[i]->balance);

        }
    }
}
