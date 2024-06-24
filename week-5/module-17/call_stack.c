#include <stdio.h>
void world(){
    printf("world start\n");
    printf("world end\n");
}
void hi(){
        printf("hi\n");
        world();
        printf("hi\n");
    }
int main(){
    printf("main start\n");
    hi();
   printf("main End\n");
    return 0;
}
