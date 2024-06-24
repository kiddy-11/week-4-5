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
    int flag = 0;
    if (row != col)
    {
        /* code */
        flag=0;
    }
    for (int i = 0; i <row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            if (i ==j )
            {
                /* code */
                if (a[i][j]!=1)
                {
                    /* code */
                    flag=0;
                }
                
            }
            
            else if (a[i][j]!=0)
            {
                /* code */
                flag = 0;
            }
            
        }
        
    }
    if (flag == 1)
    {
        /* code */
        printf("unit metrix\n");
    }
    
    else{
        printf("Not unit metrix\n");
    }
    return 0;
}