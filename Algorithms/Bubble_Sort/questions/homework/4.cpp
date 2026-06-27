#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {5,3,4,2,1};
    int swaps{0};

    for (int i=0; i<arr.size(); i++){
        for(int j=arr.size()-2; j>=0; j--){
            if(arr[j]<arr[j+1]){
                int tmep = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmep;
                swaps++;
                if(swaps>1){
                    break;
                }
            }
           
        }
    }
    if(swaps>1){
               cout << "not almost sorted";
               cout << swaps << endl;
    }else{
        cout << "yes its almost sorted";
        cout << swaps << endl;
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr[i];
    }
    cout <<endl;
}