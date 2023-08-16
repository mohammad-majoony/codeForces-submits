#include <bits/stdc++.h>
using namespace std ;
int main(){
    int tc , length , num , dif , dif2 , flag , end , correct ;
    cin >> tc ;
    for(int test = 0 ; test < tc ; test++){
        cin >> length ;
        int arr1[length] ;

        dif = 0 ;
        flag = 0 ;
        correct = 1 ;
        end = 0 ;

        for(int i = 0 ; i < length ; i++){
            cin >> num ;
            arr1[i] = num ;
        }

        for(int i = 0 ; i < length ; i++){
            cin >> num ;
            if(correct){
                dif2 = num - arr1[i] ;
                if(dif2 < 0) correct = 0 ;
                else if(flag == 0 && dif2 == 0) continue;
                else if(flag == 0){
                    dif = dif2 ;
                    flag = 1 ;
                }
                else if(flag == 1 && dif2 == dif && end == 0) continue ;
                else if(flag == 1 && dif2 == 0 && dif != 0) end = 1 ;
                else if(flag == 1) correct = 0 ;
            }
        }
        if(correct) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
}