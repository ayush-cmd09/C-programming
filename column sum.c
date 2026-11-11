#include<stdio.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int col;
    scanf("%d",&col);

    int sum=0;

    for(int i=0;i<r;i++)
    {
        sum+=a[i][col];
    }

    printf("%d",sum);

    return 0;
}
