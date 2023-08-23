#include<bits/stdc++.h>
using namespace std ;
int main(){
    int tc , length , div , num , maxi ;
    long sum ;
    cin >> tc ;
    while(tc--){
        maxi = -1 , sum = 0;
        cin >> length >> div ;
        for(int index = 0 ; index < length ; index++){
            cin >> num ;
            sum += num ;
            if(sum % div != 0) maxi = max(maxi , max(length - index - 1 , index + 1)) ;
        }
        cout << maxi << endl ; 
    }
}