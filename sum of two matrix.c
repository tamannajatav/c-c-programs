
#include<stdio.h>
#include<conio.h>


 int main()
 {
     int i,j;
     int a[3][3],b[3][3],c[3][3];
     printf("enter value of 1 st matrix");
     for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     printf("enter value of 2 nd matrix");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     printf("enter value of 3 rd matrix");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=2;j++)
         {
             c[i][j]=a[i][j]+b[i][j];
             printf("%d",c[i][j]);
         }
         printf("\n");
     }
     getch();
}
