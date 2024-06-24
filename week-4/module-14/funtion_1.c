#include <stdio.h>
// return_type name (parameter){
//     code
//     return what?
// }
int sum (int x, int y)// x=10 y= 20
{
    int sum = x + y;
    return sum;
}
int main(){
    // int s = sum (10,20);
    // printf("%d",s);

    printf("%d\n",sum(10,20));
    printf("%d",sum(200,100));
    return 0;
}