#include<iostream>
using namespace std;

int Sqrt(int n){
     
     int start = 0, end = n-1;
     int ans = -1;

     while(start <= end){
         
         int mid = start  + (end-start)/2;

         if(mid * mid == n){
             ans = mid;
             break;
         }
         else if(mid*mid < n){
             ans = mid;
             start = mid+1;
         }
         else {
            end = mid-1;
         }
     }
     return ans;
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout << Sqrt(n);
}