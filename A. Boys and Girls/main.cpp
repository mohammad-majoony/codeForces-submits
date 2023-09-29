#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
ifstream in("input.txt");
ofstream out("output.txt");
int main(){
    int b , g ;
    in >> b >> g ;
    int pos = (b > g) ? 1 : 0 ;
    while(b > 0 || g > 0){
        if(b > 0 && pos) {out << "B" ; pos = 0 ; b-- ;}
        else if(g > 0 && !pos) {out << "G" ; pos = 1 ; g-- ;} 
        else if (b > 0) {out << "B" ; b-- ;}
        else {out << "G" ; g-- ;}
    }
}