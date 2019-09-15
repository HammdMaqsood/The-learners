#include<stdio.h>
#include<math.h>
main()
{   int a,b,c,d,e,f;
    float g,h,i;
    a=100;
    b=50;
    c=100;
    printf("Enter obt marks in fcp:\n");
    scanf("%d",&d);
    printf("enter obt marks in math\n");
    scanf("%d",&e);
    printf("Enter obt marks in EE:\n");
    scanf("%d",&f);
    g=d*100/a;
    h=e*100/b;
    i=f*100/c;
    printf("Total marks in fcp are : %f\n",g);
    printf("Total marks in math are: %f\n",h);
    printf("Total marks in EE are : %f\n",i);

    return 0;
}
