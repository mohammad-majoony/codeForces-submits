#include<bits/stdc++.h>
#define MMD ios_base::sync_with_stdio(0) ; cin.tie(0) ;
typedef long long ll ;
using namespace std ;

void slove(){
    int len , odd , n1 , n2 ; 
    string get ; 
    char t ; cin >> len >> t ;
    priority_queue<int> c ;
    priority_queue<int> d ;
    priority_queue<int> h ;
    priority_queue<int> s ;
    for(int i = 0 ; i < len * 2 ; i++){
        cin >> get ;
        if(get[1] == 'C') c.push(get[0] - '0') ;
        else if(get[1] == 'D') d.push(get[0] - '0') ;
        else if(get[1] == 'H') h.push(get[0] - '0') ;
        else if(get[1] == 'S') s.push(get[0] - '0') ;
    }
    
    if(t == 'C'){
        if(d.size() % 2 + h.size() % 2 + s.size() % 2 > c.size()) cout << "IMPOSSIBLE\n" ;
        else{
            while(d.size()){
                if(d.size() > 1){
                    n1 = d.top() ; 
                    d.pop() ;
                    n2 = d.top() ;
                    d.pop() ; 
                    cout << n2 << "D" << " " << n1 << "D" << '\n' ;
                }else{
                    n1 = c.top() ; n2 = d.top() ;
                    c.pop() ; d.pop() ;
                    cout << n2 << "D" << " " << n1 << "C" << '\n' ;
                }
            }
            while(h.size()){
                if(h.size() > 1){
                    n1 = h.top() ; 
                    h.pop() ; 
                    n2 = h.top() ;
                    h.pop() ;
                    cout << n2 << "H" << " " << n1 << "H" << '\n' ;
                }else{
                    n1 = c.top() ; n2 = h.top() ;
                    c.pop() ; h.pop() ;
                    cout << n2 << "H" << " " << n1 << "C" << '\n' ;
                }
            }
            while(s.size()){
                if(s.size() > 1){
                    n1 = s.top() ; 
                    s.pop() ; 
                    n2 = s.top() ;
                    s.pop() ;
                    cout << n2 << "S" << " " << n1 << "S" << '\n' ;
                }else{
                    n1 = c.top() ; n2 = s.top() ;
                    c.pop() ; s.pop() ;
                    cout << n2 << "S" << " " << n1 << "C" << '\n' ;
                }
            }
            while(c.size()){
                n1 = c.top() ; 
                c.pop() ; 
                n2 = c.top() ;
                c.pop() ;
                cout << n2 << "C" << " " << n1 << "C" << '\n' ;
            }
        }
    }
    else if(t == 'D'){
        if(c.size() % 2 + h.size() % 2 + s.size() % 2 > d.size()) cout << "IMPOSSIBLE\n" ;
        else{
            while(c.size()){
                if(c.size() > 1){
                    n1 = c.top() ; 
                    c.pop() ;
                    n2 = c.top() ;
                    c.pop() ; 
                    cout << n2 << "C" << " " << n1 << "C" << '\n' ;
                }else{
                    n1 = d.top() ; n2 = c.top() ;
                    d.pop() ; c.pop() ;
                    cout << n2 << "C" << " " << n1 << "D" << '\n' ;
                }
            }
            while(h.size()){
                if(h.size() > 1){
                    n1 = h.top() ; 
                    h.pop() ;
                    n2 = h.top() ;
                    h.pop() ; 
                    cout << n2 << "H" << " " << n1 << "H" << '\n' ;
                }else{
                    n1 = d.top() ; n2 = h.top() ;
                    d.pop() ; h.pop() ;
                    cout << n2 << "H" << " " << n1 << "D" << '\n' ;
                }
            }
            while(s.size()){
                if(s.size() > 1){
                    n1 = s.top() ; 
                    s.pop() ; 
                    n2 = s.top() ;
                    s.pop() ;
                    cout << n2 << "S" << " " << n1 << "S" << '\n' ;
                }else{
                    n1 = d.top() ; n2 = s.top() ;
                    d.pop() ; s.pop() ;
                    cout << n2 << "S" << " " << n1 << "D" << '\n' ;
                }
            }
            while(d.size()){
                n1 = d.top() ; 
                d.pop() ; 
                n2 = d.top() ;
                d.pop() ;
                cout << n2 << "D" << " " << n1 << "D" << '\n' ;
            }
        }
    }
    else if(t == 'H'){
        if(d.size() % 2 + c.size() % 2 + s.size() % 2 > h.size()) cout << "IMPOSSIBLE\n" ;
        else{
            while(d.size()){
                if(d.size() > 1){
                    n1 = d.top() ; 
                    d.pop() ; 
                    n2 = d.top() ;
                    d.pop() ;
                    cout << n2 << "D" << " " << n1 << "D" << '\n' ;
                }else{
                    n1 = h.top() ; n2 = d.top() ;
                    h.pop() ; d.pop() ;
                    cout << n2 << "D" << " " << n1 << "H" << '\n' ;
                }
            }
            while(c.size()){
                if(c.size() > 1){
                    n1 = c.top() ; 
                    c.pop() ; 
                    n2 = c.top() ;
                    c.pop() ;
                    cout << n2 << "C" << " " << n1 << "C" << '\n' ;
                }else{
                    n1 = h.top() ; n2 = c.top() ;
                    c.pop() ; h.pop() ;
                    cout << n2 << "C" << " " << n1 << "H" << '\n' ;
                }
            }
            while(s.size()){
                if(s.size() > 1){
                    n1 = s.top() ; 
                    s.pop() ; 
                    n2 = s.top() ;
                    s.pop() ;
                    cout << n2 << "S" << " " << n1 << "S" << '\n' ;
                }else{
                    n1 = h.top() ; n2 = s.top() ;
                    h.pop() ; s.pop() ;
                    cout << n2 << "S" << " " << n1 << "H" << '\n' ;
                }
            }
            while(h.size()){
                n1 = h.top() ; 
                h.pop() ; 
                n2 = h.top() ;
                h.pop() ;
                cout << n2 << "H" << " " << n1 << "H" << '\n' ;
            }
        }
    }
    else if(t == 'S'){
        if(d.size() % 2 + h.size() % 2 + c.size() % 2 > s.size()) cout << "IMPOSSIBLE\n" ;
        else{
            while(d.size()){
                if(d.size() > 1){
                    n1 = d.top() ; 
                    d.pop() ;
                    n2 = d.top() ;
                    d.pop() ; 
                    cout << n2 << "D" << " " << n1 << "D" << '\n' ;
                }else{
                    n1 = s.top() ; n2 = d.top() ;
                    s.pop() ; d.pop() ;
                    cout << n2 << "D" << " " << n1 << "S" << '\n' ;
                }
            }
            while(h.size()){
                if(h.size() > 1){
                    n1 = h.top() ; 
                    h.pop() ; 
                    n2 = h.top() ;
                    h.pop() ;
                    cout << n2 << "H" << " " << n1 << "H" << '\n' ;
                }else{
                    n1 = s.top() ; n2 = h.top() ;
                    s.pop() ; h.pop() ;
                    cout << n2 << "H" << " " << n1 << "S" << '\n' ;
                }
            }
            while(c.size()){
                if(c.size() > 1){
                    n1 = c.top() ; 
                    c.pop() ; 
                    n2 = c.top() ;
                    c.pop() ;
                    cout << n2 << "C" << " " << n1 << "C" << '\n' ;
                }else{
                    n1 = s.top() ; n2 = c.top() ;
                    c.pop() ; s.pop() ;
                    cout << n2 << "C" << " " << n1 << "S" << '\n' ;
                }
            }
            while(s.size()){
                n1 = s.top() ; 
                s.pop() ; 
                n2 = s.top() ;
                s.pop() ;
                cout << n2 << "S" << " " << n1 << "S" << '\n' ;
            }
        }
    }
}

int main(){
    MMD 
    int tc ;
    cin >> tc ;
    while(tc--) slove() ;
}