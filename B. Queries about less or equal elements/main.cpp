#include<bits/stdc++.h>
using namespace std ;

int binary_search(int arr[] , int start , int end , int num){
    int last = end ;
    while(start <= end){
        int mid = (end + start) / 2 ;

        // system("pause") ;
        // cout << start << " " << mid << " " << end << '\n'  ;

        if(arr[mid] > num && mid != 0 && arr[mid - 1] <= num) return mid ;
        else if(arr[mid] > num && mid == 0) return 0 ;

        else if(arr[mid] <= num && mid == last) return last + 1 ;
        else if(arr[mid] > num) end = mid - 1 ;
        else if(arr[mid] <= num) start = mid + 1 ; 

    }
    return -1 ;
}

int main(){
    int len1 , len2 , num ;
    cin >> len1 >> len2 ;

    int arr1[len1] ;
    for(int index = 0 ; index < len1 ; index++) cin >> arr1[index] ;
    sort(arr1 , arr1 + len1) ;

    for(int index = 0 ; index < len2 ; index++){
        cin >> num ;
        cout << binary_search(arr1 , 0 , len1 - 1 , num) << " " ;
    }

}