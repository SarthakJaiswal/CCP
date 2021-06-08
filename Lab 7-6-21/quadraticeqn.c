#include<stdio.h>
#include<math.h>
int roots(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    roots(a,b,c);
    return 0;
}
int roots(int a,int b,int c)
{
int d;
float x1,x2,img;
d=b*b-4*a*c;
if(d>0)
{
x1=(-b + sqrt(d))/(2*a);
x2=(-b - sqrt(d))/(2*a);
printf("Roots of quadratic are:%f %f",x1,x2);
}
else if(d==0)
{
    x1=x2=(-b)/(2*a);
    printf("Roots are:%f %f",x1,x2);
}
else
{
    x1=(-b)/(2*a);
   img=sqrt(-d)/(2*a);
    printf("Roots are imagimary:%0.2f + %0.2fi ,%0.2f - %0.2fi",x1,img,x1,img);
}
}
