#include<iostream>
#include<vector>
using namespace std;

void Seg0s1s(vector<int>& arr){
     
     int start = 0;
     int end = arr.size()-1;

     while(start < end){

        if(arr[start] == 0 && arr[end] == 1){
            start++,end--;
        }
        else if(arr[start] == 0){
             start++;
        }
        else {
             swap(arr[start] , arr[end]);
                end--;
        }
     }
}

int main() {
     
     int n;
     cout<<"Enter the no. of elements: ";
     cin>>n;

     vector<int>arr;

     cout<<"Enter the elements: ";
     for(int i=0; i<n; i++){
         int x;
         cin>>x;
         arr.push_back(x);
     }

     Seg0s1s(arr);

     cout<<"After Segregating: ";
     for(int i=0; i<n; i++){
         cout<<arr[i] << " ";
     }
    
}