#include <stdio.h>

int main ()
{
    int arr[5] = {9, 12, 2, 8, 10};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[ j ] > arr[ j + 1 ])
            {
                int temp = arr[j]; 
                
                arr[j] = arr[ j + 1 ]; 
                
                arr[ j + 1 ] = temp; 
            }
        }
    }

    printf("\nMang sau khi duoc sap xep lai bang thuat toan BubbleSort la: ");
        for( int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
                printf("\n\n");

        return 0;
}