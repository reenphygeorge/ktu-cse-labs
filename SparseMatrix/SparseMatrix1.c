/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - SPARSE MATRIX

DATE - 6th DECEMBER, 2021

***********************************************************/

#include<stdio.h>

int main()
{
    int r,c,nz_count;
    printf("Enter the total no of rows: ");
    scanf("%d" , &r);
    printf("Enter the total no of columns: ");
    scanf("%d" , &c);
    printf("Enter the no of non-zero values: ");
    scanf("%d" , &nz_count);

    int sparse[nz_count+1][3];

    sparse[0][0] = r;
    sparse[0][1] = c;
    sparse[0][2] = nz_count;

    int temp,k=1;

    // Input //
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            scanf("%d" , &temp);
            if(temp != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = temp;
                k++;
            }
            if(k>nz_count+1)
            {
                break;
            }
        }
    }

    // Printing //
    if(k == nz_count+1)
    {
        printf("\nSparse Matrix: \n");
        for(int i=0 ; i<=nz_count ; i++)
        {
            for(int j=0 ; j<3 ; j++)
                printf(" %d" , sparse[i][j]);
            printf("\n");
        }

        printf("\nNormal Matrix: \n");
        int l=1;
        for(int i=0 ; i<r ; i++)
        {
            for(int j=0 ; j<c ; j++)
            {
                if(i == sparse[l][0] && j == sparse[l][1])
                {
                    printf(" %d" , sparse[l][2]);
                    l++;
                }
                else
                {
                    printf(" 0");
                }
            }
            printf("\n");
        }
    }
    else
        printf("Sparse Matrix Error");
    
    return 0;
}
