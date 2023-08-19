#include<bits/stdc++.h>
using namespace std ;
int main(){
    string text ;
    vector<int> count ;
    cin >> text ; 
    int last = 0 , length ;
    count.push_back(last) ;
    for(int index = text.size() - 1 ; index >= 0 ; index--){
        if(text[index] == text[index - 1]) last++ ;
        count.push_back(last) ;
    }

    cin >> length ;
    int l , r ;
    int vecLen = count.size() ;
    for(int index = 0 ; index < length ; index++){
        cin >> l >> r ;
        cout << count[vecLen - l - 1] - count[vecLen - r - 1] << endl ;
    }
}