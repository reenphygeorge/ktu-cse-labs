#include<stdio.h>

int main()
{
    int r,c,nz_count=0;
    printf("Enter the total no of rows: ");
    scanf("%d" , &r);
    printf("Enter the total no of columns: ");
    scanf("%d" , &c);
    
    // Input Normal Matrix //
    printf("Enter the matrix elements: ");
    int mat[r][c];
    for(int i=0 ; i<r ; i++)
    {
    	for(int j=0 ; j<c ; j++)
    	{
    		scanf("%d" , &mat[i][j]);
    		if(mat[i][j] != 0)
    			nz_count++;
    	}
    }
	
	// Adding to Sparse Matrix //
    int sparse[nz_count+1][3];

    sparse[0][0] = r;
    sparse[0][1] = c;
    sparse[0][2] = nz_count;

    int k=1;

    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            if(mat[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = mat[i][j];
                k++;
            }
        }
    }

    // Printing //
    if(k == nz_count+1)
    {
        printf("\nNormal Matrix: \n");
        for(int i=0 ; i<r ; i++)
        {
            for(int j=0 ; j<c ; j++)
                printf(" %d" , mat[i][j]);
            printf("\n");
        }
        
        printf("\nSparse Matrix: \n");
        for(int i=0 ; i<=nz_count ; i++)
        {
            for(int j=0 ; j<3 ; j++)
                printf(" %d" , sparse[i][j]);
            printf("\n");
        }

        
    }
    
    return 0;
}
