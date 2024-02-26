#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    int len1 , len2 , maxi = 0 , last = 0 ;
    cin >> len1 >> len2 ;
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    int arr[len2] ;

    for(int i = 0 ; i < len2 ; i++){
        for(int j = last ; j < len1 ; j++){
            if(s2[i] == s1[j]){
                arr[i] = j ;
                last = j + 1 ;
                break ;
            }
        }
    }
    last = len1 - 1 ;
    for(int i = len2 - 1 ; i > 0 ; i--){
        for(int j = last ; j >= 0 ; j--){
            if(s2[i] == s1[j]){
                arr[i] = j ;
                maxi = max(maxi , arr[i] - arr[i - 1]) ;
                last = j - 1 ;
                break ;
            }
        }
    }
    cout << maxi ;
}

int main(){
    MMD 
    slove() ;
}