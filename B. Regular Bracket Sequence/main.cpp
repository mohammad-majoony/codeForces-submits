#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main(){
    string text ;
    cin >> text ;
    stack<char> table ;
    ll maxi = 0 , count = 0 ;

    for(ll index = 0 ; index < text.size() ; index++){
        if(text[index] == '(') table.push('(') ;
        else{
            if(!table.empty() && table.top() == '('){
                count += 2 ;
                table.pop() ;
            }
        }
    }

    maxi = ((maxi < count) ? count : maxi) ;

    cout << maxi ;
}