/*write a program restrict the user when input integer value from keyboard to limited to digits only and with max 5 digits*/

#include<stdio.h>
#include<conio.h>
int main(void){

    char ch;
    int counter=0,number=0;


    printf("Please enter 5 digits number: ");

    while((ch=getch())!=13)
    {
        switch(ch)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            if (counter<5)
            {
                printf("%c",ch);
                counter++;
                number=number*10+(ch-'0');
            }
            else
            {
                printf("\a");
            }
            break;
        case '\b':
            if (counter>0)
            {
                printf("%c%c%c",'\b',' ' ,'\b');
                counter--;
                number/=10;
            }
            break;
        default:
            printf("%c",007);
            break;

        }
    }
    printf("\nnumber = %d",number);

return 0;
}
