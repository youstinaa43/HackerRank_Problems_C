/*write a c program to create 2 variables that can hold student information which is nonhomogeneous
type: student code, student name, gender, age read information for two students and print information for the eldest student*/

#include<stdio.h>
typedef struct
{
    int code;
    char name[20];
    char gender;
    int age;

}student;
void swap(student *p1, student *p2);
void main(void)
{
    student *ptr[2];
    int i,j;

    for(i=0;i<2;i++)
    {
        ptr[i]=(student *)malloc(sizeof(student));
        if(ptr[i]==NULL)
        {
            printf("out of memory\n");
            exit(1);
        }
        else
        {
            printf("\ndata of student %d\n",i+1);
            printf("\ncode: ");
            scanf("%d",&ptr[i]->code);
            fflush(stdin);
            printf("\nPlease name:");
            fflush(stdin);
            gets(ptr[i]->name);
            fflush(stdout);
            printf("\nPlease gender:");
            fflush(stdin);
            scanf("%c",&ptr[i]->gender);
            printf("\nPlease age: ");
            scanf("%d",&ptr[i]->age);
        }
    }
    for(i=0;i<1;i++)
        for(j=i+1;j<2;j++)
    {
        if (ptr[i]->age > ptr[j]->age)
            swap(ptr[i],ptr[j]);
    }
     printf("===============data of students from smallest to oldest===============\n");
    printf("\ncode \tname \tgender \tage\n");
    for(i=0;i<2;i++)
    {
        printf("%d\t%s\t%c\t%d\n",ptr[i]->code,ptr[i]->name,ptr[i]->gender,ptr[i]->age);
    }

}

void swap(student *p1, student *p2)
{
    student temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
