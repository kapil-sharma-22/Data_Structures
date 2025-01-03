#include<iostream>
#include<vector>
using namespace std;

bool DivideArray(vector<int> arr) {

    int n = arr.size();
     
    int Total_sum = 0;
    for(int i=0; i<n; i++){
         Total_sum += arr[i];
    }

    int prefix = 0;

    for(int i=0; i<n-1; i++){
         
         prefix += arr[i];
         int ans = Total_sum - prefix;

         if(ans == prefix) {
             return true;
         }
    }
    return false;
}

int main() {
     
     vector<int>arr = {3,4,-2,5,8,20,-10,8};

     if(DivideArray(arr))
        cout<<"YES";
    else
       cout<<"NO";


}