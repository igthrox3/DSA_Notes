#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    
    vector< int > arr = {5,3,1,4,2,7,6,1,4,9,5};

    for(int i=0; i<arr.size(); i++){
        cout << arr[i];
    }
    cout << endl;
  
    // insertion sort
    //Time complexity :-n*n
    // Best case:- n
    //it is stable sort
    for(int i=1; i<arr.size();i++){
        int j = i;
        while(j>=1 && arr[j]<=arr[j-1]){
            if(arr[j] <= arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr[i];
    }
    cout << endl;
}