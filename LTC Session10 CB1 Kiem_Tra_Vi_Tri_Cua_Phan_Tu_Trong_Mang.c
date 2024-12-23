#include <stdio.h>

int main ()
{
    int array[] = {10, 20 ,30, 40, 50};
    
    int length = sizeof(array) / sizeof(array[0]);

    int x, found = 0;
    
    printf("\nNhap vao mot phan tu trong array ma ban muon tim kiem: ");
    
    scanf("%d", &x);
    
    printf("\n");

    for(int i = 0; i < length; i++)
    {
        if(array[i] == x)
        {
            printf("Phan tu %d da duoc tim thay tai vi tri %d trong mang!", x, i);
            
            found = 1;
                
                break;
        }
    }

    if(!found)
    {
        printf("\nKhong tim thay gia tri %d trong mang!", x);
    }

    return 0;
}
