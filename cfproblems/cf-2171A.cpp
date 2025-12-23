//link for the problem: https://codeforces.com/problemset/problem/2171/A

#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

int countLegs(int n) {
   //if legs are odd then answer automatically is zero
   if (n %2 != 0){
    return 0;
   }

   //number of cows can be anywhere from 0 to n/4
   // the number of chicken then for each specific number of cow is fixed
   // total configurations will always be n/4 + 1
   return(n/4 ) + 1;
}
int main(){
    int t;
    if (!(cin >> t)) return 0;
    while(t--){
        int n;
        cin >>n ;
        cout << countLegs(n)<< endl;
    }
    return 0;
}
