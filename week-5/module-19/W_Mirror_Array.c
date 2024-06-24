#include <stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            scanf("%d",&a[i][j]);
        }
        
    }

        for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = col-1; j >=0; j--)
        {
            /* code */
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}