#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long length , count{0} , num , maxi{0};
    cin >> length ;
    map<long,long> nums ;
    for(int index = 0 ; index <  length ; index++){
        cin >> num ;
        nums[num] += 1 ;
    }
    queue<int> queueInd ;
    for(auto [key , value] : nums){
        queueInd.push(key) ;
        count += value ;
        while(queueInd.size() > 1 && key - queueInd.front() > 5){
            count -= nums[queueInd.front()] ;
            queueInd.pop() ;
        }
        if(count > maxi) maxi = count ;
    }
    cout << maxi << endl ;
}