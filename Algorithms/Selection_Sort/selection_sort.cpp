 #include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    
    vector< int > arr = {5,3,1,4,2,7,6,1,4,9,5};

    for(int i=0; i<arr.size();i++){
        int smallest_ele = i;
        for(int j=i; j<arr.size(); j++){
            if(arr[j]<arr[smallest_ele]){
                smallest_ele = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallest_ele];
        arr[smallest_ele] = temp;
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr[i];
    }
    cout << endl;
}