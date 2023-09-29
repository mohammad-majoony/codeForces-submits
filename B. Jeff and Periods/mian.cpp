#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
ifstream in("input.txt");
ofstream out("output.txt");
int main(){
    map<ll , vector<ll>> table ;
    map<ll , ll> distanse ;
    map<ll , bool> validition ;
    ll length , num , validCount = 0;
    cin >> length ;
    for(ll index = 0 ; index < length ; index++){
        cin >> num ;
        if(table.find(num) == table.end()){
            table[num].push_back(index) ;
            validition[num] = true ;
            validCount++ ;
        }
        else if(table[num].size() == 1){
            table[num].push_back(index) ;
            distanse[num] = table[num][1] - table[num][0] ;
        }else{
            if(index - table[num][table[num].size() - 1] == distanse[num]) table[num].push_back(index) ;
            else{
                if(validition[num]) validCount-- ;
                validition[num] = false ;
            }
        }
    }
    cout << validCount<< endl ;

    for(auto value : table){
        if(!validition[value.first]) continue ;
        cout << value.first << " " ;
        if(value.second.size() == 1) cout << 0 << endl ;
        else cout << value.second[1] - value.second[0] << endl ;
    }
}