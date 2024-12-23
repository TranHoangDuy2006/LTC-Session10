#include <stdio.h>

int main ()
{
    int array[5] = {11 ,31 , 2, 4, 74};
    
    int n = sizeof(array) / sizeof(array[0]);

    for( int i = 0; i < n - 1; i++)
    {
        int min_index = i;
            
            for( int j = i + 1; j < n ; j++)
            {
                if (array[j] < array[min_index])
                {
                    min_index = j;
                }
            }
    
        int temp = array[min_index];
        
        array[min_index] = array[i];
        
        array[i] = temp;
    
    }

        printf("Mang sau khi duoc sap xeplai bang thuat toan SelectionSort la: ");
        
        for( int i = 0; i < n; i++)
        {
            printf("%d ", array[i]);
        }

        printf("\n\n");

    return 0;
}