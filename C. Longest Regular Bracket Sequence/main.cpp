#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main(){
    string text ; 
    cin >> text ;
    stack<char> stc ; 
    ll count = 0 , maxi = 0 , maxiCount = 0;

    for(ll index = 0 ; index < text.size() ; index++){
        if(stc.size() != 0 && text[index] == ')' && stc.top() == '('){
            count += 2 ;
            if(count == maxi) maxiCount += 1 ;
            if(count > maxi){
                maxi = count ;
                maxiCount = 1 ;
            }
        }
        else if(text[index] == ')'){
            if(count == maxi) maxiCount += 1 ;
            if(count > maxi){
                maxi = count ;
                maxiCount = 1 ;
            }
            count = 0 ;
        }
        else if(text[index] == '(') stc.push('(') ;
    }

    cout << maxi << " " << ((maxi != 0) ? maxiCount : 1)  ;
}