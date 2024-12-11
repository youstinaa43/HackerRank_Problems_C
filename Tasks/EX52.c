/*write a c program to store information for max 100 students each student has the following structure:
struct student
{
char id_num[5];
char name[10];
char gender;
int age;
};
a-print the student's information stored based on name
b-write the program using array of pointer to struct
instead of array of struct and calculate the memory used to store information for 20 student from 100 student
*/

#include<stdio.h>
#include<string.h>
typedef struct
{
    char id_num[5];
    char name[10];
    char gender;
    int age;

}student;
void array_pointers(void);
void struct_array(void);
void swap(student *p1, student *p2);

void main(void)
{   printf("==============Storing info of students using array of struct================\n");
    struct_array();
    printf("\n==============Storing info of students using array of pointers=================\n");
    array_pointers();
}
void struct_array(void)
{
    student ptr[100];
    int n,i,j;
    printf("number of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

            printf("\ndata of student %d\n",i+1);
            printf("\nID number: ");
            fflush(stdin);
            scanf("%s",ptr[i].id_num);
            fflush(stdin);
            printf("\nPlease name:");
            fflush(stdin);
            gets(ptr[i].name);
            fflush(stdout);
            printf("\nPlease gender:");
            fflush(stdin);
            scanf("%c",&ptr[i].gender);
            printf("\nPlease age: ");
            scanf("%d",&ptr[i].age);
    }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
    {
        if (strcmp(ptr[i].name, ptr[j].name)==1)
            swap(&ptr[i],&ptr[j]);
    }
     printf("===============data of students ordered Alphabetic  ===============\n");
    printf("\nid_num \tname \tgender \tage\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%c\t%d\n",ptr[i].id_num,ptr[i].name,ptr[i].gender,ptr[i].age);
    }
}
void array_pointers(void)
{

    student *ptr[100];
    int n,i,j,size=0;
    printf("number of students:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        size+=sizeof(student);
        ptr[i]=(student *)malloc(sizeof(student));
        if(ptr[i]==NULL)
        {
            printf("out of memory\n");
            exit(1);
        }
        else
        {
            printf("\ndata of student %d\n",i+1);
            printf("\nID number: ");
            fflush(stdin);
            scanf("%s",ptr[i]->id_num);
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
    printf("\nThe size of data of %d students is %d\n",n,size);
}


void swap(student *p1, student *p2)
{
    student temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
