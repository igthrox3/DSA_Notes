#include <iostream>
using namespace std;

int main(){
    int no = 35;

    int low = 1;
    int high = 36;
    int flag = 0;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(mid*mid == no){
            flag = 1;
            break;
        }else if(mid * mid > no){
            high = mid - 1;
        }else{
            low = mid+1;
        }
    }

    if(flag == 1){
        cout << "it is perfect square number" << endl;
    }else{
        cout << "it is not perfect square number" <<endl;
    }

    return 0;
}
