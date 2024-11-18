#include<iostream>
using namespace std;

string DefangingIP(string address) {
     
     int index = 0;
     string ans;

     while(index < address.size()){
        
        //If '.' encountered then insert it into the ans;
         if(address[index] == '.') {
             ans += "[.]";
         }
         //Or else add the num as it is
         else{
            ans += address[index];
         }
         //Increment the index after inserting 
         index++;
     }
     //Return the defanged string 
     return ans;
}

int main() {
     
     string s;
     cout<<"Enter the string: ";
     getline(cin,s);

     string result = DefangingIP(s);

     cout<<"After Defanging the IP Address: ";
     for(int i=0; i<result.size(); i++) {
         cout<<result[i];
     }
}