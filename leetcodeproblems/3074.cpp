#include <iostream>
#include <vector>
#include <algorithm> // reverse function ke liye

using namespace std;

class Solution {
public:
   // Humne void hi rakha hai kyunki abhi tum sirf seekh rahe ho aur print kar rahe ho
   int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
       
       //bubblesort start
       int n = capacity.size();
        for(int i = n - 1; i > 0; i--){
           int counter = 0;
            for(int j = 0; j < i; j++){
                if(capacity[j] > capacity[j + 1])
                {
                    int temp = capacity[j + 1];
                    capacity[j + 1] = capacity[j];
                    capacity[j] = temp;
                    counter = 1;
                }
            }
            if(counter == 0){
                break;
            }
        }
       //bubblesort end

       reverse(capacity.begin(), capacity.end());
       //descending order sorted

       //now calculating the totalapples
       int l = apple.size();
       int appleSum = 0;
       for (int b = 0; b < l; b++){ // n ki jagah l kiya kyunki apple ka size l hai
            appleSum += apple[b];
       }

       
       int cnt = 0;
        for(int i = 0 ; i < capacity.size() ; i++){
            appleSum -= capacity[i];
            cnt++;
            if(appleSum <= 0){
                return cnt;
            }
        }
        return cnt;
    }
};

