#include <stdio.h>

int main() {
    int arr[10]={3,4,7,8,12,56,78,12,34,89};
    int min=arr[0];
    int max=arr[0];
    int sum=0;
    for (int i = 0; i < 10; ++i) {
        if(max<arr[i])
        {
            max=arr[i];
            
        }
        if(min>arr[i]){
            min=arr[i];
        }
        sum+=arr[i];
    }
    printf("Maximum in array is %d\n",max);
    printf("Minimum in array is %d\n",min);
    printf("Sum of elements in array is %d",sum);


    return 0;
}
