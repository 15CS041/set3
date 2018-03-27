#include <stdio.h>



int main()
{
    
    int i, min, size,arr[50];
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    min = arr[0];

   
    for(i=1; i<size; i++)
    {
       

      
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum element = %d", min);

    return 0;
}
