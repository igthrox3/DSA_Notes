#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string st = "AZYZXBYDXJK";
    string str="";
    for(int i=0; i<st.size();i++){
        if(st[i]>='X'){
            str.push_back(st[i]);
        }
    }

    for(int i=0;i<str.size();i++){
        for(int j=0; j<str.size()-i-1;j++){
            if(str[j]>str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    cout << str << endl;
}