#include<bits/stdc++.h>
#define enl '\n' ;
using namespace std ;

int main(){
    string txt1 , txt2 ;
    cin >> txt1 >> txt2 ;
    int count = 0 , index = 0 , len1 = txt1.size() , len2 = txt2.size() ; 

    while(count < len1 && index < len2) if(txt1[count] == txt2[index++]) count++ ;
    cout << ++count ;
}