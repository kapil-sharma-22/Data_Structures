#include<iostream>
using namespace std;

void RotateClockWise(string &s) {
     
      char ch = s[s.size()-1];

       int index = s.size()-2; 

       while(index >= 0) {
         
           s[index+1] = s[index];
           index--;
       }
       s[0] = ch;
}

void RotateAntiClockWise(string& s) {
     
      char ch = s[0];

     int index = 1;

     while(index < s.size()) {
         
         s[index-1] = s[index];
         index++;
     }
     s[s.size()-1] = ch;
}

int main() {
      
     string s1 = "amazon";
     string s2 = "azonam";

     string clockwise, anticlockwise;
     clockwise = s1;
     RotateClockWise(clockwise);
     RotateClockWise(clockwise);

     if(clockwise == s2){
        cout<<"Rotated by 2 places";
     }

     anticlockwise = s1;
     RotateAntiClockWise(anticlockwise);
     RotateAntiClockWise(anticlockwise);

     
    //  if(anticlockwise == s2){
    //     cout<<"Rotated by 2 places";
    //  }

     
}