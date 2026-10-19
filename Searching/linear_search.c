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


// Algorithm :-
// 1.Start
// 2.Declare an array arr[100] and variables n, i, key, and flag = 0.
// 3.Enter the size of the array n.
// 4.Enter n elements into the array.
// 5.Enter the element key to be searched.
// 6.Set i = 0.
// 7.Compare arr[i] with key.
// - If arr[i] == key, print the position i + 1, set flag = 1, and go to Step 9.
// - Otherwise, increment i by 1.
// 8.If i < n, repeat Step 7. Otherwise, continue to Step 9.
// 9.If flag == 0, print "Element is not found".
// 10.Stop