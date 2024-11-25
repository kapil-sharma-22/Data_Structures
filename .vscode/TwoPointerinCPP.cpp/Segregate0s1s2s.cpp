#include<iostream>
#include<vector>
using namespace std;

void Segregate(vector<int>& arr) {
     
     int low = 0;
     int mid = 0;
     int high = arr.size()-1;

     while(mid <= high) {
         
         if(arr[mid] == 0) {
            swap(arr[low],arr[mid]);
            low++,mid++;
         }
         else if(arr[mid] == 1){
             mid++;
         }
         else {
             swap(arr[mid],arr[high]);
             high--;
         }
     }

}


int main() {
     
     vector<int>v = {0,1,2,0,1,2};

     Segregate(v);

     //After Segregating 
     for(int i=0; i<v.size(); i++) {
         cout<< v[i] << " " ;
     }
}