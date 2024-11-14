#include<iostream>
#include<vector>
using namespace std;

void FindPeaks(vector<int>& arr){
     
     for(int i=1; i<arr.size()-1; i++){
         
         if( (arr[i] > arr[i-1]) &&  (arr[i] > arr[i+1]) ){
             
             cout << arr[i] << " " ;
         }
     }
}
int main(){
     
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements in increasing order: ";
    for(int i=0; i<n; i++){
         int x;
         cin>>x;
         arr.push_back(x);
    }

    FindPeaks(arr);


}