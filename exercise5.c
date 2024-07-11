#include <stdio.h>
#include <string.h>

void arrayrev(int arr[], int num)
{
    for (int i = 0; i < num/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i - 1] = temp;
    }
    
}

int main()
{
    int num;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Do you want to reverse the array? (yes/no)\n");
    char reply[10];
    scanf("%s", &reply);
    if (strcmp(reply, "Yes") == 0 || strcmp(reply, "yes") == 0)
    {
        arrayrev(arr, num);
    }
    printf("Here is your reversed array:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}