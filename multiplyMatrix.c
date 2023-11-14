//wap to multiply two matrices
#include<stdio.h>
void input_matrix(int a[][3],int row,int column)
{
    for(int i=0;i < row ; i++)
    {
        for(int j=0; j < column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display_matrix(int a[][3],int row,int column)
{
    for(int i =0 ; i< row ;i++){
        for(int j=0;j<row;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void multiply_matrix(int a[][3],int b[][3],int c[][3],int m ,int n,int p,int q)//mxn is order of a and m X n is order of b
{
    if(n != p)
        printf("Multiplication not possible!!");
    else
    {
        int sum =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                for(int k=0;k<n;k++){
                    sum = sum + a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                sum=0;
            }
        }
    }
}

void main()
{
    int rowa,columna,rowb,columnb;
    printf("Enter the order of matrix A \n");
    printf("Rows: ");
    scanf("%d",&rowa);
    printf("\nColumns: ");
    scanf("%d",&columna);
    int a[rowa][columna];
    printf("Enter the values of matrix A:\n");
    input_matrix(a,rowa,columna);

    printf("Enter the order of matrix B \n");
    printf("Rows: ");
    scanf("%d",&rowb);
    printf("\nColumns: ");
    scanf("%d",&columnb);
    int b[rowb][columnb];
    printf("Enter the values of matrix B:\n");
    input_matrix(b,rowb,columnb);

    int c[rowa][columnb];
    multiply_matrix(a,b,c,rowa,columna,rowb,columnb);
    printf("The Resultant matrix after multiplication is : \n");
    display_matrix(c,rowa,columna);
}
