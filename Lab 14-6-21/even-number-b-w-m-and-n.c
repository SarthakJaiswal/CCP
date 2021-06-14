#include<stdio.h>
int main()
{
    int M,N,i;
    printf("Enter the value of M and N:\n");
    scanf("%d\n %d",&M,&N);
    for(i=M;i<=N;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
