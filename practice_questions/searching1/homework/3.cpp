#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector <int>> arr = {{0,0,1,1}, {1,1,1,1}, {0,0,0,0}};
    int n = arr.size();
    int result = -1;
    int result_row = 0;

    for(int i=0; i<n; i++){
        int size = arr[i].size();
        int low = 0, high = size - 1;
        int x = 1;
        int flag = 0;
        int idx = 0;
        int size_ele = 0;
        while(low <= high){
            int mid = (high + low)/2;
            if(arr[i][mid] == x){
                idx = mid;
                high = mid - 1;
                flag = 1;
            }else if(arr[i][mid] < x){
                low = mid + 1;
            }
        }
        if(flag == 1){
            size_ele = size - idx;
        }else{
            size_ele = 0;
        }
        if(size_ele > result){
            result = size_ele;
            result_row = i;
        }
    }
    cout << "the highest row is: " << result_row << " containing: " << result << endl;
}