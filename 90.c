#include <stdio.h>

int missnumb(int* arr,int arrsize)
{
    int x=0;
    for(int i=0 ; i<=arrsize ; i++)
    {
        x ^= i;
    }
    for(int i=0 ; i<arrsize ; i++)
    {
        x ^= arr[i];
    }
    return x;
}

int main()
{
    int arr[] = {0,3,6,8,4,2,5,9,7};
    int sz = sizeof(arr)/sizeof(arr[1]);
    int tep = missnumb(arr,sz);
    printf("%d",tep);
    return 0;
}