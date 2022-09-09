#include <stdio.h>
#include <math.h>
int main()

{
    int a, b, c;
    char op;
    printf("type your operation using x(+,-,,/)y form \n");
    scanf("%d c% %d",&a,&op,&b);

    if(op=='/'){
        c = a / b;
        printf(" = %d\n", c);
    }

    if(op=='*'){
        c = a * b;
        printf(" = %d\n", c);
    }
    if(op=='+'){
        c = a + b;
        printf(" = %d\n", c);
    }
    if(op=='-'){
         c = a - b;
        printf(" = %d\n", c);
    }
return 0 ;
}
