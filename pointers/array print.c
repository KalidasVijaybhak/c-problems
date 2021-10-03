#include <stdio.h>
void swap(int *, int *);
int main()
{
  int a[50];
   int i,n;
   int *p=a;
   printf("enter the array size:");
   scanf("%d",&n);
   printf("enter array elements:\n");
   for(i=0;i<n;i++)
     {
       scanf("%d",(p+i));
     }
  printf("array elements :\n");
    for(i=0;i<n;i++)
     {
       printf("%d\n",*(p+i));
     }
  return 0;
}
