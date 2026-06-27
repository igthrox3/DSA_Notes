#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int value ;
    for(int i=0; i<6; i++){
        cin>>value;
        v.push_back(value);
    }

    for(int i=0; i<v.size(); i++){
        bool swap = false;
        for(int j=0; j<v.size()-i-1; j++){
            if(v[j]>v[j+1]){
                int temp = v[j+1];
                v[j+1] = v[j];
                v[j] = temp;
                swap = true;
            }
        }
        if(!swap) {
            cout << "its alredy arrranged";
            break;
        }
    }
    cout<< endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<< endl;
}