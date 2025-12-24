//get the minimum value, replace(swap)

#include <iostream>

using namespace std;


void swap(int &i, int &j){
 int temp; 
 temp = i;
 i = j;
 j = temp;
}

void selectionSort( /*here you will put inputs of the function */ int arr[],int n){
for(int i = 0; i < n-1; i++){
    int mini = i;
    for(int j =i+1; j<n;j++){
        if (arr[j]< arr[mini]) {
            mini = j;
        }
        
    }
    swap(arr[mini], arr[i]);
}
}

int main(){
int n;
cin >> n;
int arr[n];
for(int i =0; i <n; i++){
    cin >> arr[i];
}

selectionSort(arr, n);
for(int i = 0; i <n; i++){
    cout << arr[i] << " ";
}

return 0;
}



