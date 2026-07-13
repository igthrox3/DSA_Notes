#include <iostream>
#include <climits>
using namespace std;

float max(float a, float b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

float min(float a, float b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int arr[] = {5,3,5};
    int n = 3;

    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);

    int flag = 0;

    for(int i=0; i<n; i++){
        if(arr[i]>=arr[i+1]){
            kmin = max(kmin, (arr[i]+arr[i+1])/2.0);
        }else{
            kmax = min(kmax, (arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "the range is -1" << endl;
    }else if(kmin == kmax){
        if(kmin-(int)kmin == 0){
            cout << "the range is:" << kmin << endl;
        }else{
            cout << -1 << endl;
        }
    }
    else{
        if((int)kmin+1 == (int)kmax){
            cout << "the range is : " << (int)kmin+1 << endl; 
        }else{
            cout << "the range is [" << (int)kmin+1 << "," << (int)kmax << "]" << endl;
        }
    }
}