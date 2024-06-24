#include <stdio.h>
  void fun (int x)
    {
          printf("fun x er address -%p\n",&x);
    }
int main(){
  int x = 10;
  printf("main x er address -%p\n",&x);
  fun(x);
    return 0;
}

// scope holo apni ekta variable kothai kothai access korte parben
// Ar call by reference holo function e parameter pathanor ekta system
//  jar maddhome apni main function theke j parameter ta pass korben , tar shudhu value na. , 
// address pass hobe. Erpor function e jodi apni oi parameter er upor kono kaj koren tahole main function
//  er variable tar o ek ee shathe change hobe