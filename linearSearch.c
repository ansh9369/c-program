#include<stdio.h>
int linearSearch(int* arr, int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] ={1,2,12,13,234,54,21,45,22,32};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the key value: ",key);
    scanf("%d",&key);
    int index = linearSearch(arr,size,key);
    if(index == -1)
        printf("The key value is not present in the array.");
    else
    printf("The key value present at arr[%d]", index);
}