#include <stdio.h>
int main(){
    // declaree 2d array
    int a[5][3];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
        }
        
    }
      for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}