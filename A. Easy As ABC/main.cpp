#include<bits/stdc++.h>
#define enl '\n' ;
using namespace std ;
char arr[3][3] , number[3] , mini[3] ;
stack<char> qu ;

void change(){
    mini[0] = number[0] ;
    mini[1] = number[1] ;
    mini[2] = number[2] ;
}

void compare(){
    if(number[0] < mini[0]) change() ;
    else if(number[0] == mini[0] && number[1] < mini[1]) change() ;
    else if(number[0] == mini[0] && number[1] == mini[1] && number[2] < mini[2]) change() ;
}

void solve(int ind1 ,int ind2 , int count) ;

void call(int ind1 , int ind2 , int count){
    number[count - 1] = arr[ind1][ind2] ;
    qu.push(arr[ind1][ind2]) ;
    arr[ind1][ind2] = 'W' ;
    solve(ind1 , ind2 , count) ;
    arr[ind1][ind2] = qu.top() ;
    qu.pop() ;
}

void solve(int ind1 ,int ind2 , int count){
    count++ ;
    if(count == 4){
        compare() ;
        return ;
    }

    if(ind2 + 1 < 3 && arr[ind1][ind2 + 1] != 'W') call(ind1 , ind2 + 1 , count) ;
    if(ind2 - 1 >= 0 && arr[ind1][ind2 - 1] != 'W') call(ind1 , ind2 - 1 , count) ;

    if(ind1 + 1 < 3 && arr[ind1 + 1][ind2] != 'W') call(ind1 + 1 , ind2 , count) ;
    if(ind1 - 1 >= 0 && arr[ind1 - 1][ind2] != 'W') call(ind1 - 1 , ind2 , count) ;

    if(ind1 + 1 < 3 && ind2 + 1 < 3 && arr[ind1 + 1][ind2 + 1] != 'W') call(ind1 + 1 , ind2 + 1 , count) ;
    if(ind1 - 1 >= 0 && ind2 - 1 >= 0 && arr[ind1 - 1][ind2 - 1] != 'W') call(ind1 - 1 , ind2 - 1 , count) ;

    if(ind1 + 1 < 3 && ind2 - 1 >= 0 && arr[ind1 + 1][ind2 - 1] != 'W') call(ind1 + 1 , ind2 - 1 , count) ;
    if(ind1 - 1 >= 0 && ind2 + 1 < 3 && arr[ind1 - 1][ind2 + 1] != 'W') call(ind1 - 1 , ind2 + 1 , count) ;
}

int main(){
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    string text ;
    for(int index = 0 ; index < 3 ; index++){
        cin >> text ;
        arr[index][0] = text[0] ;
        arr[index][1] = text[1] ;
        arr[index][2] = text[2] ;
    }

    mini[0] = arr[0][0] ;
    mini[1] = arr[0][1] ;
    mini[2] = arr[0][2] ;

    for(int ind1 = 0 ; ind1 < 3 ; ind1++)
        for(int ind2 = 0 ; ind2 < 3 ; ind2++) solve(ind1 , ind2 , 0) ;
    
    for(auto letter : mini) cout << letter ;
}