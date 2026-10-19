#include<stdio.h>
int main()
{
    int arr[100],n,i,key,mid,first,last,flag=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the %d numbers ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element : ");
    scanf("%d",&key);
    // binary search
    first=0;
    last=n-1;
    while(first<=last){
        mid=(first+last)/2;
        if(arr[mid]==key){
            printf("Element is found at %d position",mid+1);
            flag=1;
            break;
        }
        else if(arr[mid]>key)
        {
            last=mid-1;
        }
        else{
            first=mid+1;
            
        }
    }
}

