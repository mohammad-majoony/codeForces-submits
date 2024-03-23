// https://codeforces.com/problemset/problem/515/C

#include<bits/stdc++.h>
#define MAJOONI ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void solve(){
    ll len ; 
    string txt ; 
    cin >> len >> txt ; 
    map<int , int , greater<int>> count ; 

    for(auto l : txt){
        if(l == '2') count[2]++ ; 
        else if(l == '3'){
            count[2]++ ; 
            count[3]++ ; 
        }
        else if(l == '4'){
            count[3]++ ; 
            count[2] += 3 ; 
        }
        else if(l == '5'){
            count[5]++ ; 
            count[3]++ ; 
            count[2] += 3 ; 
        }
        else if(l == '6'){
            count[5]++ ; 
            count[3] += 2 ; 
            count[2] += 4 ; 
        } 
        else if(l == '7'){
            count[7]++ ; 
            count[5]++ ; 
            count[3] += 2 ; 
            count[2] += 4 ; 
        }
        else if(l == '8'){
            count[7]++ ; 
            count[5]++ ; 
            count[3] += 2 ; 
            count[2] += 7 ; 
        }
        else if(l == '9'){
            count[7]++ ; 
            count[5]++ ; 
            count[3] += 4 ; 
            count[2] += 7 ;  
        }     
    }

    for(auto k : count){
        if(k.first == 7 && k.second){
            while(count[7]){
                count[7]-- ;
                count[5]-- ;
                if(!count[6]){
                    count[6]++ ;
                    count[2]-- ;
                    count[3]-- ;
                } count[6]-- ;
                if(!count[4]){
                    count[2] -= 2 ;
                    count[4]++ ;
                }
                count[4]-- ;
                count[3]-- ; 
                count[2]-- ; 
                cout << "7" ;
            }
        }
        else if(k.first == 5 && k.second){
            while(count[5]){
                count[5]-- ;
                if(!count[4]){
                    count[2] -= 2 ;
                    count[4]++ ;
                }
                count[4]-- ;
                count[3]-- ; 
                count[2]-- ; 
                cout << "5" ;
            }
        }
        else if(k.first == 3 && k.second){
            while(count[3]){
                count[3]-- ;
                count[2]-- ; 
                cout << "3" ;
            }
        }
        else{
            for(int i = 0 ; i < k.second ; i++) cout << "2" ;
        }
    }
}

int main(){
    MAJOONI
    solve() ;
}