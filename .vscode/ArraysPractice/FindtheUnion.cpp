#include<iostream>
#include<vector>
#include<set>
using namespace std;

//Using Two Pointers Method 
vector<int> FindUnion(vector<int>& a, vector<int>& b) {
    // Initialize pointers to traverse through both arrays a and b
    int i = 0, j = 0;

    // Get the sizes of both arrays
    int n = a.size();  
    int m = b.size();  

    // Temporary vector to hold the union of arrays (may contain duplicates)
    vector<int> temp;

    // Traverse through both arrays using two pointers i and j
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            // If both elements are equal, add only one of them to the result
            temp.push_back(a[i]);
            i++, j++;  // Move both pointers forward
        } 
        else if (a[i] < b[j]) {
            // If a[i] is smaller, add it to the result and move pointer i
            temp.push_back(a[i]);
            i++;  // Increment pointer i
        } 
        else {
            // If b[j] is smaller, add it to the result and move pointer j
            temp.push_back(b[j]);
            j++;  // Increment pointer j
        }
    }

    // If there are remaining elements in array a, add them to temp
    while (i < n) {
        temp.push_back(a[i]);
        i++;  // Increment i to move to the next element in a
    }

    // If there are remaining elements in array b, add them to temp
    while (j < m) {
        temp.push_back(b[j]);
        j++;  // Increment j to move to the next element in b
    }

    // Final result vector to store the union without duplicates
    vector<int> ans;

    // Add the first element of temp to ans as it is guaranteed to be unique
    ans.push_back(temp[0]);

    // Iterate through temp and add unique elements to ans
    for (int i = 1; i < temp.size(); i++) {
        // If current element is different from the previous one, add it to ans
        if (temp[i] != temp[i - 1]) {
            ans.push_back(temp[i]);
        }
    }

    // Return the final result (union of a and b without duplicates)
    return ans;
}

//Using the Standard Library --> 'set'
vector<int> FindUnionof(vector<int>& a , vector<int>& b) {
     
    set<int>A(a.begin(),a.end());
     set<int>B(b.begin(),b.end());

     set<int> Unionof;

     Unionof.insert(A.begin(),A.end());
     Unionof.insert(B.begin(),B.end());

     vector<int> ans;

     for(int x : Unionof) {
         ans.push_back(x);
     }

     return ans;
}


int main() {
     
     vector<int>arr1 = {1,2,3,4,5};
     vector<int>arr2 = {1,2,3,6,7};

     vector<int> result = FindUnion(arr1,arr2);
}