#include<iostream>
#include<vector>
#include<map>
using namespace std;

//Finding the unqiue number using the XOR operator 
//a^a = 0;
//a^0 = a;
int Singlenum(vector<int>& arr) {
     
     int unique = 0;

     for(int num: arr) {
         
         unique ^= num;
     }

     return unique;
}

int SingleNumber(vector<int>& arr) {

    map<int,int>myMap;

    for(int i=0; i<arr.size(); i++){
         
         myMap[arr[i]]++;
    }

    for(auto x : myMap) {
         
         if(x.second == 1) {
             return x.first;
         }
    }

}

int main() {
      
     int n;
     cout<<"Enter the number of elements: ";
     cin>>n;

     vector<int> arr;
     cout<<"Enter the elements :";
     for(int i=0; i<n; i++){
         int x;
         cin>>x;
         arr.push_back(x);
     }

    cout << "The single number is: " <<  SingleNumber(arr);
}