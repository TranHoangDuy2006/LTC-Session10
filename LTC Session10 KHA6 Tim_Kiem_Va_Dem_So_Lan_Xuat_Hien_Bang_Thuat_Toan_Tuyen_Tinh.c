#include <stdio.h>

int main () 
{
    int array[] = {1, 2, 3, 2, 4, 5, 2, 6};
    
    int length = sizeof(array) / sizeof(array[0]);

    int findValue;
    
    int index[length]; 
    
    int count = 0;        

    printf("\nNhap vao phan tu trong mang can tim: ");
    
    scanf("%d", &findValue);

    for (int i = 0; i < length; i++) 
    {
        if (array[i] == findValue) 
        {
            index[count] = i;
            
            count++;
        }
    }

    if (count > 0) 
    {
        printf("\nPhan tu %d xuat hien tai cac vi tri la: ", findValue);
        
        for (int i = 0; i < count; i++) 
            {
                printf("%d ", index[i]);
            }
        
        printf("\n\n");
    } 
        else
            {
                printf("\nKhong tim thay so %d trong mang!\n", findValue);
            }

    return 0;
}
