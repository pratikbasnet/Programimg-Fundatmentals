#include<stdio.h>
#include<conio.h>

int main()
{

int a,b;
printf("enter first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
a+=b;
printf("value is+=%d\n",a);
a-=b;
printf("value is-=%d\n",a);
a*=b;
printf("value is*=%d\n",a);
a/=b;
printf("value is/=%d\n",a);

getch();
return(0);

}
