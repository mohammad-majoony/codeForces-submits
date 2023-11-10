#include<bits/stdc++.h>
using namespace std ;

string solve(){
    char arr[] = {'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p' , 'q' , 'r' , 's' , 't' , 'u' , 'v' , 'w' , 'x' , 'y' , 'z'} , letter ;
    string text ;
    cin >> text ;
    map<char , int> table ;
    int tail , head ; 

    for(int index = 0 ; index < text.size() ; index++){
        letter = text[index] ;
        table[letter] = index ;
    }

    for(int index = 0 ; index < text.size() ; index++){
        if(index == 0){
            if(table.contains('a')){
                head = table['a'] ; 
                tail = head ;
            }else return "NO" ;
        }
        else if(table.contains(arr[index])){
            if(table[arr[index]] - 1 == head) head++ ;
            else if(table[arr[index]] + 1 == tail) tail-- ; 
            else return "NO" ;
        }else return "NO" ;
    }

    return "YES" ;
}

int main(){
    int tc ;
    cin >> tc ;
    while(tc--) cout << solve() << "\n" ;
}