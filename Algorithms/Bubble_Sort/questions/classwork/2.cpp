#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {5,0,1,2,0,3,0,4,0,3};
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-i-1;j++){
            if(arr[j]==0){
                arr[j] = arr[j+1];
                arr[j+1] = 0;
            }
        }
    }
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    cout << endl;
}