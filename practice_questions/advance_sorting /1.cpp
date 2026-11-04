#include <iostream>
#include <vector>

void merge(vector<int> & v, vector)

void mergesort(vector<int> & v){
    int a = v.size()/2;
    int b = v.size() - a;

    vector<int> v1(a);
    vector<int> v2(b);

     for(int i=0; i<v1.size(); i++){
        v1[i] = v[i];
     }
     
     for(int i=0; i<v2.szie(); i++){
        v2[i] = v[i+a];
     }

     mergesort(v1);
     mergesort(v2);

     merge(v, v1, v2);
}

int main(){
    vector<int> v = {7,0,2,2,9,5,0,2,0,0};
    mergesort(v);

}