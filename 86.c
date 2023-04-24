#include <stdio.h>
// int func(int x){
//     int count = 0;
//     while (x){
//         count++;
//         x = x&(x - 1);//与运算
//     }
//     return count;
// }
int main() {
    // int count = 0;
    // count = func(9999);
    // printf("%d\n",count);

    unsigned int uia,b,c,d;
    //uia = (0xAB & 0xCD) ^ (0xEF | 0xAB);
    uia = 0xAA ;  
    b=(0xBB << 8) ;
    c = (0xCC<<16) ;
    d = (0xDD<<24);
    return 0;
}