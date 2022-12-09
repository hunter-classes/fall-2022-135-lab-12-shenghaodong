#include <iostream>
#include <vector>

//Part A
std::vector<int> makeVector(int n){
    std::vector<int> returnVal;
    for(int i = 0; i < n; i++){//Dont need -1 because it counts from 0
        returnVal.push_back(i);
    }
    return returnVal;
}

//Part B
std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> returnVal;
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 0){
            returnVal.push_back(v[i]);
        }
    }
    return returnVal;
}

//Part C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta.at(i));
    }
    vegeta.clear();
    //move everything from goku to vegeta and empty vegeta values
}

//Part D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    bool firstSizeLarger = false;
    std::vector<int> returnVal;
    if(v1.size() >= v2.size()){
        firstSizeLarger = true;
    }
    if(firstSizeLarger = true){
        for(int i = 0; i < v1.size(); i++){
            if(i > v2.size() - 1){
                returnVal.push_back(v1.at(i));
            }else{
                returnVal.push_back(v1.at(i)+v2.at(i));
            }
        }
    }
    return returnVal;
}

