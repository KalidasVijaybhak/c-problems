#include <stdio.h>
#include <math.h>    
struct Dist
{
   float x;
   float y;
};
  
int main()
{
   struct Dist point1 = {0,0};
   struct Dist point2 = {0,0};
    
    
   printf("Enter coordinates of First point:\n");
   printf("x = ");
    scanf("%f",&point1.x);
     printf("y = ");
    scanf("%f",&point1.y);
    printf("Enter coordinates of Second point:\n");
 printf("x = ");
    scanf("%f",&point2.x);
     printf("y = ");
    scanf("%f",&point2.y);
    float distance  = sqrt(pow(point2.x-point1.x,2) +pow(point2.y-point1.y,2));
    printf("Euclidean distance : %f",distance);
    return 0;
}
