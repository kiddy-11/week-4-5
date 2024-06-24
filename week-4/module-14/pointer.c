// #include <stdio.h>
// int main(){
//     int x=10;
//     // printf("%p\n",&x);
//     int *p = &x;
//     printf("%p\n",p);
//     // dereference
//     return 0;
// }

#include <stdio.h>
int sum(int x, int y)
{
    int res = x + y;
    return res;
}
int main()
{
        printf("%d\n",sum(5,6));
    // sum(5, 6);
    return 0;
}




