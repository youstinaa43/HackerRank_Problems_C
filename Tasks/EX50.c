/*write a program in c to create a light bar menu using array of strings and handling the arrow keys from keyboard.
(hint: use the system call function SetConsoleTextAttribute()in window.h)*/
#include<stdio.h>
#include<windows.h>
void draw_box(void);
void gotoxy(int x,int y);
void ShowConsoleCursor(int showFlag);

void main ()
{
    int pos=1;
    HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
    draw_box();
    ShowConsoleCursor(0);
    do
    {
       SetConsoleTextAttribute(console,15);
       gotoxy(40,6); printf("1-Add");
       gotoxy(40,7); printf("2-Update");
       gotoxy(40,8); printf("3-Delete");
       gotoxy(40,9); printf("4-Exit");
       printf("\n\n\n\n");

       switch(pos)
       {
       case 1:
           SetConsoleTextAttribute(console,240);
           gotoxy(40,6); printf("1-Add");
           break;
       case 2:
           SetConsoleTextAttribute(console,240);
           gotoxy(40,7); printf("2-Update");
           break;
       case 3:
           SetConsoleTextAttribute(console,240);
           gotoxy(40,8); printf("3-Delete");
           break;
        case 4:
            SetConsoleTextAttribute(console,240);
           gotoxy(40,9); printf("4-Exit");
           break;

       }
       char ch=getch();
       if(ch==32) ch=getch();
       if(ch==72)
       {
           pos--;
           if(pos==0) pos=4;
       }

       if(ch==80)
       {
           pos++;
           if(pos==5) pos=1;
       }


    }while(1);

}
void gotoxy(int x,int y)
{
    COORD coord={0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void draw_box(void)
{
    int i;
    gotoxy(39,5); printf("%c",201);
    for(i=1;i<30;i++) printf("%c",205);
    printf("%c",187);
    gotoxy(39,6); printf("%c",186);
    for(i=1;i<30;i++) printf("%c",32);
    printf("%c",186);
    gotoxy(39,7); printf("%c",186);
    for(i=1;i<30;i++) printf("%c",32);
    printf("%c",186);
    gotoxy(39,8); printf("%c",186);
    for(i=1;i<30;i++) printf("%c",32);
    printf("%c",186);
    gotoxy(39,9); printf("%c",186);
    for(i=1;i<30;i++) printf("%c",32);
    printf("%c",186);
    gotoxy(39,10); printf("%c",186);
    for(i=1;i<30;i++) printf("%c",32);
    printf("%c",186);

    gotoxy(39,11); printf("%c",200);
    for(i=1;i<30;i++) printf("%c",205);
    printf("%c",188);
    gotoxy(39,12); printf("%c",' ');
    for(i=1;i<30;i++) printf("%c",' ');
    printf("%c",' ');
}

void ShowConsoleCursor(int showFlag)
{
    HANDLE out=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorinfo;
    GetConsoleCursorInfo(out,&cursorinfo);
    cursorinfo.bVisible=showFlag;
    SetConsoleCursorInfo(out,&cursorinfo);
}
