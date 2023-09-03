#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

string slove(){
    string str1 , str2 ;
    cin >> str1 >> str2 ;
    ll length = str1.size() , flag = 0 ;
    for(int index = 0 ; index < length - 1 ; index++){
        if(str1[index] == '0' && str2[index] == '0'  && str1[index + 1] == '1' && str2[index + 1] == '1'){
            flag = 1 ;
            break;
        }
    }
    if(flag) return "YES" ;
    return "NO" ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) cout << slove() << endl ;
}