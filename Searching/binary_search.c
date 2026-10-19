#include<stdio.h>
int main()
{
    int arr[100],n,i,key,mid,first,last;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the %d numbers in ascending order :",n);
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
    if (first>last){
        printf("element is not found ")
    }
}

// Algorithm: Binary Search

// Step 1: Start.

// Step 2: Declare array arr[100] and variables n, i, key, mid, first, last, flag = 0.

// Step 3: Enter the size of the array n.

// Step 4: Enter n elements in sorted order.

// Step 5: Enter the key element to be searched.

// Step 6: Set first = 0 and last = n - 1.

// Step 7: Repeat while first <= last.

// Step 8: Calculate mid = (first + last) / 2.

// Step 9: If arr[mid] == key, print "Element is found at position mid + 1", set flag = 1, and go to Step 12.

// Step 10: If arr[mid] > key, set last = mid - 1. Otherwise, set first = mid + 1.

// Step 11: Repeat Steps 7 to 10 until the element is found or first > last.

// Step 12: If flag == 0, print "Element is not found".

// Step 13: Stop.
