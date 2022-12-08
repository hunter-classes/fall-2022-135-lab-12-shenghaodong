#include <iostream>

vector<int> makeVector(int n){
    vector<int> returnVal;
    for(int i = 0; i < n - 1; i++){
        returnVal.push_back(i);
    }
    return returnVal;
}