#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*write a program to solve quadratic equation depend on a,b,c coefficient of the equation */
int main(void )
{
    double a,b,c,root1,root2,SqrResult,realpart,imaginepart;
    printf("Please enter value of coefficient a: ");
    scanf("%lf",&a);
    printf("Please enter value of coefficient b: ");
    scanf("%lf",&b);
    printf("Please enter value of coefficient c: ");
    scanf("%lf",&c);

     SqrResult= b*b-4*a*c;
     if (SqrResult>0){
        root1=(-b+sqrt(SqrResult))/(2*a);
        root2=(-b-sqrt(SqrResult))/(2*a);
        printf("root 1=%0.3f, root 2=%0.3f",root1,root2);
     }
     else if (SqrResult==0)
     {
         root1=root2=-b/(2*a);
         printf("root1=root2=%0.3f",root1);
     }
     else{
        SqrResult*=-1;
        realpart=-b/(2*a);
        imaginepart=sqrt(SqrResult)/(2*a);
        printf("root1 = %0.3f + %0.3f i, root2 = %0.3f - %0.3f i",realpart,imaginepart,realpart,imaginepart);
     }

    return 0;
}
