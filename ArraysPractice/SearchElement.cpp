#include<iostream>
#include<algorithm>
using namespace std;

int SearchElement(int arr[],int n, int target){
     
     for(int i=0; i<n; i++){
         
         if( arr[i] == target){
             return i;
         }
     }
     return -1;
}

int main(){

    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
         cin>>arr[i];
    }

    int target;
    cout<<"Enter the target element: ";
    cin>>target;


    int result = SearchElement(arr,n,target);

    if(result != -1){
         cout<<"Element found at index " << result<<endl;
    }
    else{ 
        cout<<"Element not found";
    }

}