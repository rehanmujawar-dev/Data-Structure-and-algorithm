#include<stdio.h>
int main()
{
    int arr[100],n,i,key,flag=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the %d numbers ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //linear search
    printf("Enter the the key element :");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element is found at %d position",i+1);
           flag=1;
            break;
        }
        
        
    }
    if (flag==0){
        printf("Element is not found");
    }
    return 0;
}