#include <stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
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
        for (int j = 0; j < col; j++)
        {
            /* code */
            scanf("%d",&b[i][j]);
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
           c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
       printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}