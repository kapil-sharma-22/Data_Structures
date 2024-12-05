#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int LongestSubArray(vector<int>& arr) {
     
     int maxi = INT_MIN;
     int prefix = 0;

     for(int i=0; i<arr.size(); i++){
         
          prefix += arr[i];

          maxi = max(prefix , maxi);

          if(prefix < 0) {
             prefix = 0;
          }

     }
     return maxi;
}

int main() {
     
     vector<int> arr = {};

    cout << "The sum is: " <<  LongestSubArray(arr);
}