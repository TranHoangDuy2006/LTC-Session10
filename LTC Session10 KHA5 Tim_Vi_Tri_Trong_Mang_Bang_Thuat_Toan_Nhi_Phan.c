#include <stdio.h>

int main () 
{
    int n;
    
    printf("\nNhap so luong phan tu cua mang: ");
    
    scanf("%d", &n);

    int arr[n];
    
    printf("\nNhap cac phan tu cua mang:\n");
    
    for (int i = 0; i < n; i++) 
    {
        printf("\nNhap phan tu thu [%d]: ", i);
        
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                
                arr[j] = arr[j + 1];
                
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nMang sau khi duoc sap xep theo thu tu tang dan:\n\n");
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    int findValue;
    
    printf("\nNhap phan tu can tim trong mang: ");
    
    scanf("%d", &findValue);

    int l = 0, r = n - 1;
    
    int pos = -1;
    
    while (l <= r) 
    {
        int m = (l + r) / 2;
        
        if (arr[m] == findValue) 
        {
            pos = m;
            
            r = m - 1; 
        } 
            else if (arr[m] < findValue) 
                {
                    l = m + 1;
                } 
                    else 
                        {
                            r = m - 1;
                        }
    }

    if (pos != -1) 
    {
        printf("\nPhan tu %d duoc tim thay tai vi tri %d trong mang.\n\n", findValue, pos);
    } 
        else 
            {
                printf("\nPhan tu %d khong co trong mang!\n\n", findValue);
            }
    
    return 0;
}
