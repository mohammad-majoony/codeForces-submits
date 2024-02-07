#include<bits/stdc++.h>
using namespace std ; 

void solve(){
    unordered_map<int , vector<int>> table ;
    string num , pr ; 
    cin >> num ;
    for(int i = 0 ; i < num.size() ; i++) table[num[i] - '0'].push_back(i) ;
    int lastInd , res , count ;
    for(int i = 0 ; i < 1000 ; i += 8){
        num = to_string(i) ;
        lastInd = -1 , res = 0 , count = 0 ; 
        for(int i = 0 ; i < num.size() ; i++){
            if(table.contains(num[i] - '0')){
                for(auto ind : table[num[i] - '0']){
                    if(ind > lastInd){
                        lastInd = ind ; 
                        count++ ; 
                        break ;
                    } 
                }
            }else break ;
        }
        if(count == num.size()) res = 1 ;
        if(res){
            pr = num ; 
            break ;
        }
    }
    if(res) cout << "YES\n" << pr ;
    else cout << "NO" ;
}

int main(){
    solve() ;
}