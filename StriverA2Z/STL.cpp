#include<iostream>
#include<vector>

using namespace std;

int main(){

    void explainVector(){
        vector<int> v;

        v.push_back(1);
        v.emplace_back(2);

        vector<pair<int,int>>vec;

        v.push_back({1,2});
        v.emplace_back(1,2);

        vector <int> v1(5,20); //container of 5 instances of 20
        vector <int> v(5);
        vector <int> v2<v1>; // v2 similar container, copy of v1(5 instances of 20)

vector<int>::iterator it =v.begin();
it++;
cout << *(it)<< " " ;

    }
    return 0;
}