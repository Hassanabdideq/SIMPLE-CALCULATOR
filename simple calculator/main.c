#include<stdio.h>
#include<stdio.h>
int main()
{
    //variable declaration
    char name[100];
    int n1,n2,sum,product,diff;
    float quot;
    printf("simple calculator!\n");

    //inputs
    printf("Enter your name:");
    gets(name);
    printf("Enter two integer:");
    scanf("%d%d",&n1,&n2);

    //computation
    sum = n1 + n2;
    diff = n1 - n2;
    product = n1 * n2;
    quot = (float) n1/n2;
    //inputs
    printf("Hey %s, here are the results: \n",name);
    printf("%d+%d=%d\n",n1,n2,sum);
    printf("%d-%d=%d\n",n1,n2,diff);
    printf("%d*%d=%d\n",n1,n2,product);
    printf("%d/%d=%f\n",n1,n2,quot);
    return 0;

}
