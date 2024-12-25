#include<iostream>
#include<vector>
using namespace std;

void GreaterOnRight(vector<int>& arr) {

    int n = arr.size();
    int greatest = arr[n-1];
    arr[n-1] = -1;

    for(int i=n-2; i>=0; i--){
         
         int temp = arr[i];
         arr[i] = greatest;
         greatest = max(temp,greatest);
    }

}

int main() {
     
     vector<int> arr = {17,18,5,4,6,1};

     GreaterOnRight(arr);

     for(int i=0; i<arr.size(); i++){

         cout << arr[i] << " " ;
     }
}