#include<stdio.h>

void FindMiMx(int arr[],int n,int *Max,int *Min){
    *Max = arr[0];
    *Min = arr[0];
    
    for(int i=1;i<n;i++){
        if(*Max<arr[i]){
            *Max=arr[i];
        }
        
        if(*Min>arr[i]){
            *Min=arr[i];
        }
    }
}

int main(){
    int arr[] = {6,7,86,25,22,-75,34,32};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Max,Min;
    
    FindMiMx(arr,n,&Max,&Min);
    printf("Max : %d\n",Max);
    printf("Min : %d",Min);
    return 0;
}