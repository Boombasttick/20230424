//质数
#include <stdio.h>
#include <math.h>
int is_prime(int x)
{
    int j=0;
    for(j=2;j<=sqrt(x);j++)
    {
        if(x%j==0)
        return 0;     
    }
    //if(j>sqrt(x))
       // {
        return 1;//}
}
int main()
{
    int i=0;
    for(i=100;i<=201;i++)
    {
        if(is_prime(i)==1)
        printf("%d ",i);
    }
    return 0;
}