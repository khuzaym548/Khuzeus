//Iterative method

#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int x,int low,int high){
    while(low<=high)
    {
        int mid = low+(high - low )/2;
        if(arr[mid] == x)
        return mid;
        if(arr[mid]<x)
        low =  mid+1;
        else
        high = mid - 1;
    }
    return -1;
}
int main(){
    int arr[] = {12,15,17,20,25,29,33};
    int x;
    cin>>x;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = BinarySearch(arr,x,0,n-1);
    if(result == -1)
    printf("not found");
    else
    printf("Element is found at index  %d",result);
    return 0;
}

//Recursive Method

// #include<bits/stdc++.h>
// using namespace std;
// int BinarySearch(int arr[],int x,int low,int high){
//     if(high>=low){
//         int mid = low+(high-low)/2;
//         if(arr[mid]==x) //if mid value is present
//         return mid;
//         if(arr[mid]>x)
//         return BinarySearch(arr,x,mid-1,low);
//         return BinarySearch(arr,x,mid+1,high);
//     }
//     return 1;

// }
// int main(){ 
//     int arr[] = {12,15,17,20,25,29,33};
//     int x;  
//     cin>>x;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int result = BinarySearch(arr,x,0,n-1);
//     if(result == -1)
//     printf("not found");
//     else
//     printf("Element is found at index %d ",result);
//     return 0;
// }

