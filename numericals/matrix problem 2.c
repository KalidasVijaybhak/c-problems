// Write the algorithm and develop the C code to find the element 
// which occurs maximum (element with maximum frequency) in an integer array of N elements.


#include<stdio.h>

int getMaxRepeatingElement(int array[], int n) 
{
    int i, j, maxElement, count;
     int maxCount = 0;
  
    for(i = 0; i< n; i++)   //For loop to hold each element
    {
        count = 1;
        for(j = i+1; j < n; j++)  //For loop to check for duplicate elements
        {
            if(array[j] == array[i])
            {
                count++;     //Increment  count
                /* If count of current element is more than 
                maxCount, then update maxElement */
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}

int main(){
    
    int x[10];
    int i,j,k;
    printf("enter the no. of elements: ");
    scanf("%d",&k);
    
    for(int i = 0;i< k;i++){
        printf("Enter element[%d]",i+1);
        scanf("%d",&x[i]);
    }
    printf("Most Repaeated: %d",getMaxRepeatingElement(x,k));
}