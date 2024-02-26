#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
using namespace std ;
typedef long long ll ;

void solve(){
    string txt ; 
    cin >> txt ;
    stack<int> open ; 
    ll maxi = 0 , maxiCount = 0 , len = txt.size() , o , last ;
    ll arr[len] ;
    for(ll i = 0 ; i < len ; i++){
        arr[i] = 0 ;
        if(txt[i] == '(') open.push(i) ;
        else if(txt[i] == ')' && open.size()){
            o = open.top() ;
            open.pop() ;
            last = (o - 1 >= 0) ? arr[o - 1] : 0 ;
            arr[i] = i - o + 1 + last ;

            if(arr[i] > maxi){
                maxi = arr[i] ; 
                maxiCount = 1 ;
            }else if(arr[i] == maxi) maxiCount++ ;
        }
    }

    cout << maxi << " " << ((maxi != 0) ? maxiCount : 1)  ;
}

int main(){
    MMD 
    solve() ;
}