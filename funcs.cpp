#include <iostream>

//Part A
vector<int> makeVector(int n){
    vector<int> returnVal;
    for(int i = 0; i < n - 1; i++){
        returnVal.push_back(i);
    }
    return returnVal;
}

//Part B
vector<int> goodVibes(const vector<int>& v){
    vector<int> returnVal;
    for(int = 0; i < v; i++){
        if(v[i] >= 0){
            returnVal.push_back(v[i]);
        }
    }
    return returnVal;
}

//Part C
void gogeta(vector<int> &goku, vector<int> &vegeta){
    //move everything from goku to vegeta and empty vegeta values
}