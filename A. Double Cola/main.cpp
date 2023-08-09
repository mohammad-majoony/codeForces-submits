#include <bits/stdc++.h>
using namespace std ;
int main(){
    int num ;
    cin >> num ;
    string names[] = {"Sheldon" , "Leonard" , "Penny" , "Rajesh" , "Howard"} ;
    int count {5} ;
    int mul {1} ;
    while(count < num){
        count += 5 * pow(2 , mul++) ;
    }
    int floor = count - (pow(2 , --mul) * 5) + 1 ;
    count = 0 ;
    while(true){
        if(floor <= num && num < floor + pow(2 , mul)) break;
        else{
            floor += pow(2 , mul) ;
            count++ ;
        }
    }
    cout << names[count] ;
}