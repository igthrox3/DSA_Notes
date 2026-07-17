#include <iostream>
using namespace std;

int main(){
    int no_of_coins = 15;
    int low = 1;
    int high = no_of_coins/2;

    while(low <= high){
        int mid = (low + high)/2;
        if((mid*(mid+1))/2 == no_of_coins){
            break;
        }else if((mid*(mid+1))/2 > no_of_coins){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    
    cout << "the number of coins: " << high << "are same as  row: " << high << endl;
    return 0;
}