//ABHINAV CHAUDHARY
//2100320130007

#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("ENTER THE VALUE IN MATRIX A ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("ENTER THE VALUE IN MATRIX B ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

        {
            scanf("%d",&b[i][j]);
        }
    }

     printf( "MATRIX ADDITION" );
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=a[i][j]+b[i][j];

        }

    }
 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
 printf("%d",c[i][j]);
        }
        printf(" \n");
       }
}
