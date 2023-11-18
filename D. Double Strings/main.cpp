#include<bits/stdc++.h>
using namespace std ;
void solve(){
    int len , flag , textLen , count2 ; 
    cin >> len ;
    string arr[len] ;
    map<string , bool> table ;

    for(int index = 0 ; index < len ; index++){
        cin >> arr[index] ;
        table[arr[index]] = true ;
    }

    for(int ind1 = 0 ; ind1 < len ; ind1++){
        textLen = arr[ind1].size() ;
        flag = 0 ; 
        for(int ind2 = 0 ; ind2 < textLen ; ind2++){
            count2 = arr[ind1].size() - ind2 ;
            if(table[arr[ind1].substr(0 , ind2)] && table[arr[ind1].substr(ind2 , count2)]){
                flag = 1 ;
                break;
            }
        }
        cout << (flag) ? 1 : 0 ;
    }
    cout << "\n" ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) solve() ;
}