#include<stdio.h>

void FindMiMx(int arr[],int n,int *Max,int *Min){
    if(n==1){
        *Min=arr[0];
        *Max = arr[0];
        return ;
    }
    
    FindMiMx(arr,n-1,Max,Min);
    
    if(arr[n-1]>*Max){
        *Max = arr[n-1];
    }
    if(arr[n-1]<*Min){
        *Min = arr[n-1];
    }
}

int main(){
    int arr[] = {765,3,43,3244,234,-454,5474-56745};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Max,Min;
    
    FindMiMx(arr,n,&Max,&Min);
    printf("Max : %d\n",Max);
    printf("Min : %d",Min);
    return 0;
}