#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

void slove(){
    map<int , vector<int>> table ;
    ll length , num , flag = 0;
    cin >> length ;
    for(ll i = 0 ; i < length ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> num ;
            if(num){
                table[j + 1].push_back(i + 1) ;
            }
        }
    }
    for(int day1 = 1 ; day1 < 5 ; day1++){
        if(flag) break;
        if(table[day1].size() < length / 2) continue;
        for(int day2 = day1 + 1 ; day2 < 6 ; day2++){
           if(table[day2].size() < length / 2) continue;
            vector<int> result;  
            set_union(begin(table[day1]),end(table[day1]),begin(table[day2]),end(table[day2]),inserter(result,end(result))) ;
            if(result.size() == length){
                flag = 1 ;
                break;
            }
        }
    }
    cout << ((flag)?"YES\n":"NO\n");
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) slove() ;
}