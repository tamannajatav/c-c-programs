#include<stdio.h>
#include<conio.h>

int main()

{
    int i,j,n;
    printf("enter no. two show similar no. of star");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {

            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}

