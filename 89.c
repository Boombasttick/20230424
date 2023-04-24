//斐波那契数
#include <stdio.h>
//O(N)
int Fit1(int n)
{
    int i=0;
    int a=1;
    int b=1;
    int c=1;
    if (n<=2)
    return 1;
    else
    {
        for(i=1;i<=n-2;i++)
        {
            c=a+b; 
            b=c;
        }
        return c;
    }
}

//O(2^N)
// int Fit2(int n)
// {
//     if (n<=2)
//     return 1;
//     return Fit2(n-1)+Fit2(n-2);
// }

int main()
{
    int n=0;
    int s1=0;
    // int s2=0;
    scanf("%d",&n);
    s1=Fit1(n);
    // s2=Fit2(n);
    printf("%d",s1);
    return 0;
}