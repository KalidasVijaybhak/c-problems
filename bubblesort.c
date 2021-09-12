//Experiment: Bubble Sort
//Name:Kalidas VB
//Roll no. 338




#include <stdio.h>
  int main()
{
  int a[100],i,n,j,t;
  printf ("Enter the integers: ");
  scanf ("%d",&n);
  for(i=0;i<n;i++) 
    {
        printf ("enter the number %d : ",i+1);
        scanf("%d",&a[i]);
    }
 for (i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
         {
            if (a[j]> a[j+1])
              {
                   t= a[j];
                  a[j]= a[j+1];
                  a[j+1]=t;
               }
          }
      }
 printf("Sorted list in ascending order:");
  for (i=0;i<n;i++){
     printf("%d",a[i]);}
 return 0;
}
            