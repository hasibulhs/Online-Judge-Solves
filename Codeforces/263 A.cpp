#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int mat[5][5], i, j, x, y, c = 0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &mat[i][j]);

            if(mat[i][j] == 1)
                {
                    x = i;
                    y = j;
                }
        }
    }

    while(x != 2 || y != 2)
    {
        if(x < 2)
            {
                swap(mat[x][y], mat[x+1][y]);
                x =  x + 1;
            }
        else if(x > 2)
            {
                swap(mat[x][y], mat[x-1][y]);
                x = x - 1;
            }
        else if(y > 2)
            {
                swap(mat[x][y], mat[x][y-1]);
                y = y - 1;
            }
        else if(y < 2)
            {
                swap(mat[x][y], mat[x][y+1]);
                y = y + 1;
            }

            c++;
    }
    printf("%d\n", c);
    return 0;
}
