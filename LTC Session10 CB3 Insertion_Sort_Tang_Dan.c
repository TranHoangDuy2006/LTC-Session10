#include <stdio.h>

int main()
{
    int array[5] = {9, 2, 1, 5, 7};
    
    int n = sizeof(array) / sizeof(array[0]);

    for(int i = 1; i < n; i++)
    {
        int key = array[i];
        
        int j = i - 1;
        
        while(j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            
            j = j - 1;
        }
        
        array[j + 1] = key;
    }

        printf("\nMang sau khi duoc sap xep lai bang thuat toan InsertionSort la: ");
        
            for(int i = 0; i < n; i++)
            {
                printf("%d ", array[i]);
            }
    
        printf("\n\n");

    return 0;

}