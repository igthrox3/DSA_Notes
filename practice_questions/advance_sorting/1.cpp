#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> & v, vector<int> v1, vector<int> v2){
   int i=0, j=0, k=0;

   while(i<v1.size() && j<v2.size()){
      if(v1[i] >= v2[j]){
         v[k] = v1[i];
         i++;
         k++;
      }else{
         v[k] = v2[j];
         j++;
         k++;
      }
   }

   if(i >= v1.size()){
      while(j < v2.size()){
         v[k] = v2[j];
         j++;
         k++;
      }
   }

   if(j >= v2.size()){
      while(i < v1.size()){
         v[k] = v1[i];
         i++;
         k++;
      }
   }

   return;
}

void mergesort(vector<int> & v){
   if(v.size() == 1){
      return;
   }
    int a = v.size()/2;
    int b = v.size() - a;

    vector<int> v1(a);
    vector<int> v2(b);

     for(int i=0; i<v1.size(); i++){
        v1[i] = v[i];
     }
     
     for(int i=0; i<v2.size(); i++){
        v2[i] = v[i+a];
     }

     mergesort(v1);
     mergesort(v2);

     merge(v, v1, v2);

     v1.clear();
     v2.clear();
}

int main(){
    vector<int> v = {7,0,2,2,9,5,0,2,0,0};
    mergesort(v);
    for(int i=0; i<v.size(); i++){
      cout << v[i] << " ";
    }
    cout << endl;
}