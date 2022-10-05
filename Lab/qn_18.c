
/*****************************************************************

CREATOR - REENPHY GEORGE

TITLE -  Menu driven program for performing matrix calculations.

DATE - 21st SEPTEMBER, 2021

*****************************************************************/

#include<stdio.h>

// Global Variables //
int mat1[100][100];
int mat2[100][100];
int mat3[100][100];
int r1 , c1 , r2 , c2;

// Function Declarations //
void read1();
void read2();
void sum();
void multi();
void trans();
void print(int mat[100][100] , int r , int c);

// Driver Function //
int main()
{
    int choice;
    while(choice != 4)
    {
        printf("\nMatrix Calculation\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Multiplication\n");
        printf("3. Matrix Transpose\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
                sum();
                break;
            case 2:
                multi();
                break;
            case 3:
                trans();
                break;
            case 4:
                break;
            default:
                printf("Wrong Choice!!\nHit enter and try again");
        }
    }
    return 0;
}

// Function Definitions //

void read1()  // To read matrix 1 //
{
    printf("Enter the no: of rows: ");
    scanf("%d" , &r1);
    printf("Enter the no: of columns: ");
    scanf("%d" , &c1);
    printf("Enter the matrix elements: \n");
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            scanf("%d" , &mat1[i][j]);
        }
    }
}

void read2()  // To read matrix 2 //
{
    printf("Enter the no: of rows: ");
    scanf("%d" , &r2);
    printf("Enter the no: of columns: ");
    scanf("%d" , &c2);
    printf("Enter the matrix elements: \n");
    for(int i=0 ; i<r2 ; i++)
    {
        for(int j=0 ; j<c2 ; j++)
        {
            scanf("%d" , &mat2[i][j]);
        }
    }
}

void sum() // To find the sum of two matrices //
{
    printf("First Matrix: \n");
    read1();
    printf("Second Matrix: \n");
    read2();
    if(r1 != r2 || c1 != c2)
    {
        printf("Sum can't be found!!\n");
        return;
    }
    printf("\nFirst Matrix:\n");
    print(mat1 , r1, c1);
    printf("\nSecond Matrix:\n");
    print(mat2 , r2, c2);
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nResult:\n");
    print(mat3 , r1 , c1);
}

void multi()  // To find the product of two matrices //
{
    printf("First Matrix: \n");
    read1();
    printf("Second Matrix: \n");
    read2();
    if(c1 != r2)
    {
        printf("Multiplication is'nt possible!!");
        return;
    }
    printf("\nFirst Matrix:\n");
    print(mat1 , r1, c1);
    printf("\nSecond Matrix:\n");
    print(mat2 , r2, c2);
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c2 ; j++)
        {
            mat3[i][j] = 0;
            for(int k=0 ; k<r2 ; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\nResult:\n");
    print(mat3 , r1 , c1);
    
}

void trans()  // To find transpose of a matrix //
{
   read1();
   int trans_mat[100][100];
   printf("Entered Matrix: \n");
   print(mat1 , r1, c1);
   printf("\nResult:\n");
   for(int i=0 ; i<c1 ; i++)
   {
       for(int j=0 ; j<r1 ; j++)
       {
           printf("%d " , mat1[j][i]);
       }
       printf("\n");
   }
}

void print(int mat[100][100] , int r , int c)  // To print the matrix //
{
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)
        {
            printf("%d " , mat[i][j]);
        }
        printf("\n");
    }
}