#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main()
{

    int a[100];
    int i,n,b;
    b=INT_MIN;
    printf("enter the no. of value to calculate");
    scanf("%d",&n);
    //if(n>100)		//while  -->  if
    //{
      // return;
   // }
    //printf("enter no. again");
    //scanf("%d",&n);
     printf("enter the no.");
    for(i=0;i<=n;i++)
    {

        gets(a[i]);//a --> a[i]

        if(b<a[i])
        {
            b=a[i];
        }
    }
    printf("largest of all no. is %d",b);
    getch();

}
