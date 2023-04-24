#include <stdio.h>

#include <stddef.h>

#define OFFSETOF(struct_name,member) (int)&( ((struct_name*)0)->member)

struct S
{
    char a;
    int b;
    char c;
};
int main()
{
    printf("%d\n",offsetof(struct S,a));
    printf("%d\n",offsetof(struct S,b));
    printf("%d\n",offsetof(struct S,c));

    printf("%d\n",OFFSETOF(struct S,a));
    printf("%d\n",OFFSETOF(struct S,b));
    printf("%d\n",OFFSETOF(struct S,c));
    return 0;
}