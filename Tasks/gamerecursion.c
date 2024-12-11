#include<stdio.h>
void move(int Numberofplates,char a, char c, char b);
void main(void)
{
    int Numberofplates;
    printf("Enter the number of plates to move: ");
    scanf("%d",&Numberofplates);
    char Ta='A';
    char Tb='B';
    char Tc='C';
    move(Numberofplates,Ta,Tc,Tb);

}

void move(int Numberofplates,char a, char c, char b){
    if (Numberofplates==1)
        printf("Move plates from %c to %c\n",a,c);
    else
    {
        move(Numberofplates-1,a,b,c);
        printf("Move plates from %c to %c\n",a,c);
        move(Numberofplates-1,b,c,a);


    }
}
