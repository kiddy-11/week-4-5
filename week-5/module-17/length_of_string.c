// #include <stdio.h>
// int fun(char a[] , int i){
//     if(a[i]=='\0') return 0;
//     int l = fun(a,i+1);
//     return l+1;
// }
// int main(){
//     char a[6]="gello";
//     int length = fun(a,0);
//     printf("%d\n",length);
//     return 0;
// }

// #include <stdio.h>
// void gello()
// {
//     printf("Gello ");
// }
// void hello()
// {
//     gello();
//     printf("Hello ");
// }
// int main()
// {
//     printf("Main ");
//     hello();
// }

// #include <stdio.h>
// void fun()
// {
//     printf("fun\n");
//     fun();
// }
// int main()
// {
//     fun();
// }

#include <stdio.h>
void f2()
{
    printf("f1 ");
}
void f1()
{
    printf("f2 ");
    f2();
}
int main()
{
    printf("Main ");
    f1();
}

