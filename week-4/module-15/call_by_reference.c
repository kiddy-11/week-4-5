#include <stdio.h>
void fun(int *p){
    printf("p er value - %p\n",p);
}
int main(){
    int x =100;
    fun(&x);
     printf("p er value - %p\n",&x);
    return 0;
}