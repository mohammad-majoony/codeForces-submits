#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    string txt ; cin >> txt ; 
    int len = txt.size() , mini = len ;
    pair<int , int> counter[len] ;
    int best2[len] ;

    for(int i = 0 ; i < len ; i++){
        if(txt[i] == 'b'){
            if(!i){
                counter[i].first = 0 ;
                counter[i].second = 1 ;
            }else{
                counter[i].first = counter[i - 1].first ;
                counter[i].second = counter[i - 1].second + 1 ;
            }
        }else{
            if(!i){
                counter[i].first = 1 ;
                counter[i].second = 0 ;
            }else{
                counter[i].first = counter[i - 1].first + 1 ;
                counter[i].second = counter[i - 1].second ;
            }
        }
    }
    mini = min(mini , counter[len - 1].first) ;
    mini = min(mini , counter[len - 1].second) ;
    ll lastBInd = 0 , lastBD = len , delC ;
    for(int i = 0 ; i < len ; i++){   
        mini = min(mini , counter[i].second + counter[len - 1].first - counter[i].first) ;
        mini = min(mini , counter[i].first + counter[len - 1].second - counter[i].second) ;
        for(int j = i + 1 ; j < len ; j++)
            mini = min(mini , counter[i].second + counter[j].first - 
                    counter[i].first + counter[len - 1].second - counter[j].second) ;
    }
    cout << len - mini ;
}

int main(){
    MMD 
    slove() ;
}