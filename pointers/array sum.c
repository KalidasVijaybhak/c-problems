#include <stdio.h>
 int arraysum(int *a,int n);
 int main()
 {
   int a[20];
   int i,n;
   int *p=a;
   printf("enter the array size:");
   scanf("%d",&n);
   printf("enter array elements:\n");
   for(i=0;i<n;i++)
     {
       scanf("%d",(p+i));
     }
  printf("sum is %d: ",arraysum(a,n));
 return 0;
}

int arraysum(int *a,int n)
{
   int sum=0,i;
   for(i=0;i<n;i++)
   {
    sum=sum+ *(a+i);
   }
 return sum;
}
