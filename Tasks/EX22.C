/*write a program to generate odd magic square*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void goto_row_col(int r,int c)
{
    COORD coord= {0,0};
    coord.X=c;
    coord.Y=r;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main(void){
    int row, column, number,value,delaytime;
    do
    {
        printf("Please enter an odd number ");
        scanf("%d",&number);

    }while(number%2==0);

    system("cls");
    row=1;
    column=(number+1)/2;
    value=1;

    do
    {
            goto_row_col(row,column*3);
            printf("%3d",value);

            if(value%number==0)
                row++;
            else
            {
                row--;
                column--;
                if(row==0) row=number;
                if(column==0) column=number;
            }
            value++;

            for(delaytime=1;delaytime<6000000;delaytime++);
    }while(value<=number*number);
return 0;
}

