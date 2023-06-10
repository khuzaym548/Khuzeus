#include<bits/stdc++.h>     
using namespace std;

// int maxSum(int arr[],int n){     //Naive Solution
//     int result = arr[0];
//     for(int i = 0;i<n;i++){
//         int curr_sum=0;
//         for(int j = i;j<n;j++){
//             curr_sum+=arr[j];
//             result = max(result,curr_sum);
//         }
//     }
//     return result;
// }
// _________________________________________________________________________________________

int maxSum(int arr[],int n){      //Kaiden's Algorithm
    int result = arr[0],maxEnding = arr[0];
    for(int i =1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        result = max(result,maxEnding);
    }
    return result;
}

int main()
{
    int arr[] = {2,3,-8,7,-1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_Sum = maxSum(arr, n);
    cout << "Maximum Contiguous Sum is " << max_Sum << endl;
    return 0;
}
