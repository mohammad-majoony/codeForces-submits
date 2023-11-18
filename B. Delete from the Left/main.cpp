#include<bits/stdc++.h>
using namespace std ;

int main(){
    string t1 , t2 ;
    cin >> t1 >> t2 ;
    int s1 = t1.size() , s2 = t2.size() , count = 0 ;
    int size1 = t1.size() , size2 = t2.size() ;

    while(s1 > 0 && s2 > 0){
        if(t1[--s1] == t2[--s2]) count++ ;
        else break ;
    }
    cout << size1 + size2 - (2 * count) ;
}