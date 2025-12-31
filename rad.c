#include<stdio.h>

int getMax(int arr[],int n){
    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[],int n,int place){
    int output[n];
    int count[10] = {0};

    for(int i = 0;i<n;i++){
        count[(arr[i]/place)%10]++;
    }
    for(int i = 1;i < 10;i++){
        count[i] += count[i-1];
    }
    for(int i = n-1;i>=0;i--){
        output[count[(arr[i]/place)%10]-1] = arr[i];
        count[(arr[i]/place)%10]--;
    }

    for(int i =0;i<n;i++){
        arr[i] = output[i];
    }
}

void radixSort(int arr[],int n){
    int max = getMax(arr,n);

    for(int place = 1;max / place > 0;place *=10){
        countingSort(arr,n,place);
    }

}

void print(int arr[],int n){
    for(int i = 0;i < n;i++){
        printf("%d \t",arr[i]);
    }
}

int main(){
    int arr[] = {121, 432, 564, 23, 1, 45, 788};
    int n =sizeof(arr)/sizeof(arr[0]);

    radixSort(arr,n);
    printf("Sorted array:\n");
    print(arr,n);
    return 0;
}

