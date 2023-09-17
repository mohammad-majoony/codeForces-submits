#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main(){
    ll lenght , bakelen , timeforbake , oventime ;
    cin >>  lenght >> timeforbake >> bakelen >> oventime ;
    ll cake = lenght - (ceill(oventime / (double)(timeforbake)) * bakelen) ;
    if(timeforbake <= oventime && oventime % timeforbake == 0) cake -= bakelen ;
    cout << ((cake>0)?"YES":"NO");
}