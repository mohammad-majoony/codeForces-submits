#include <bits/stdc++.h>
using namespace std ;

int main(){
    int testCount{} ;
    cin >> testCount ;
    for(int i = 0 ; i < testCount ; i++){
        int length {} ;
        cin >> length ;
        vector<int> vec1 ;
        vector<int> vec2 ;
        for(int i = 0 ; i < length ; i++){
            int num ;
            cin >> num ;
            vec1.push_back(num) ;
        }
        for(int i = 0 ; i < length ; i++){
            int num ;
            cin >> num ;
            vec2.push_back(num) ;
        }

        int v1 {} ;
        int v2 {} ;

        for(int i = 0 ; i < length ; i++){
            int mini = min(vec1[i] , vec2[i]) ;
            int maxi = max(vec1[i] , vec2[i]) ;
            if (mini > v1) 
                v1 = mini ;
            if (maxi > v2) 
                v2 = maxi ;
        }

        cout << v1 * v2 << "\n";
    }
}