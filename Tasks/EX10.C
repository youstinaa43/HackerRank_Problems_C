#include <stdio.h>
#include <stdlib.h>

/*write a program get the student mark and print the grade depend on the table
<50===>fail
>=50 <65===>pass
>=65 <80===>good
>=80 <90===>very good
>=90====>excellent
*/
int main(void )
{
    float StudentDegree;
    do
    {
       printf("Please enter the student degree: ");
       scanf("%f",&StudentDegree);
    } while((StudentDegree<0)||(StudentDegree>100));

    if(StudentDegree<50)
        printf("Sorry, You fail");
    else if(StudentDegree<65)
        printf("Congrats, You pass");
    else if(StudentDegree<80)
        printf("Your grade is good");
    else if(StudentDegree<90)
        printf("Your grade is very good");
    else
        printf("Your grade is excellent");


    return 0;
}

