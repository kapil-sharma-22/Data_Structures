#include<iostream>
#include<algorithm>
using namespace std;

string AddString(string num1, string num2) {
     
     int index1 = num1.size()-1;
     int index2 = num2.size()-1;
     int carry = 0 , sum = 0;
     string ans;

     while(index2 >= 0){
        
         sum = num1[index1] - '0' + num2[index2] - '0' + carry; //convert the character into integer by -'0'
         carry = sum/10; 
         ans += (sum%10) + '0'; //(16%10) + '0'(ascii -> 48) --> 6 + 48 --> 54(ascii value for 6);
         index1--;
         index2--;
     }

     while(index1 >= 0){
         
         sum = num1[index1] - '0' + carry;
         carry = sum/10;
         ans += (sum%10) + '0';
         index1--;
     }

     if(carry){  
        ans += '1'; //add '1' to the beginning if any carry is leftout --> In this case only 1 will be remaining
     }

     reverse(ans.begin(),ans.end());  //reverse the order of the added string

     return ans; 
}

int main() {
     
     string num1  = "45678";
     string num2  = "678";

     if(num1.size() > num2.size()){
        cout<<AddString(num1,num2);
     }
     else {
         cout<<AddString(num2,num1);
     }
}