#include<stdio.h>
int binarysearch(int arr[] ,int n, int target){
    int start =0,end=(n-1),mid;
    while(start<=end){
         mid=(start+end)/2;

        if(target>arr[mid]){
            start= mid+1;
    }
    else if(target<arr[mid]){
        end=mid-1;
    }
    else{
        return mid;
    }
       

    }
    return -1;
}
 int main(){
    
    int arr[100],target,n,i;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the sorted array:\n");
    for(int i=0;i<n;i++){
        printf("Enter the element in the arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element in the array:");
    scanf("%d",&target);

      int result= binarysearch(arr,n,target);

    if (result==-1){
        printf("Element not found");
    }
    else{
        printf("the element is found on the %d",result); 
    }
    return 0;
 }