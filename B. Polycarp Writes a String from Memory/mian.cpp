#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){
    string text ;
    vector<char> words ;
    ll count = 0 , index = 0 , wordCount = 0;
    cin >> text ;

    while(index < text.size()){
        while(wordCount <= 3 && index < text.size()){
            if(find(words.begin() , words.end() , text[index]) == words.end()){
                wordCount++ ;
                words.push_back(text[index]) ;
            }
            index++ ;
        }

        if(wordCount > 3){
            words.clear() ;
            words.push_back(text[index - 1]) ;
            wordCount = 1 ;
        }else{
            words.clear() ;
            wordCount = 0 ;
        }
        count++ ;
    }

    if(wordCount != 0) count++ ;

    cout << count << "\n" ;
}

int main(){
    ll tc ;
    cin >> tc ;
    while(tc--) solve() ;
}