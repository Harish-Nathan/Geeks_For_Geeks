//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    void reverse(int i, int j, vector<int> &arr) {
        int temp=0;
        if(i>=j){
            return;
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        reverse(i+1,j-1,arr);
    }
    void reverseArray(vector<int> &arr) {
        
        // code here
        reverse(0,arr.size()-1,arr);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends