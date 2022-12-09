#include <iostream>
#include <vector>
#include "funcs.h"

int main(){
    //Part A
    std::cout << "Part A" << std::endl;
    std::vector<int> newVector = makeVector(40);
    for(int y = 0; y < newVector.size(); y++){
        std::cout << newVector.at(y) << " ";
    }

    //Part B
    std::cout << "\n\nPart B" << std::endl;
    std::vector<int> v{1,2,-1,3,4,-1,6};
    std::vector<int> newV = goodVibes(v);
    for(int i = 0; i < newV.size(); i++){
        std::cout << newV.at(i);
    } // returns [1,2,3,4,6]

    //Part C
    std::cout << "\n\nPart C" << std::endl;
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    gogeta(v1, v2);
    for(int j = 0; j < v1.size(); j++){
        std::cout << v1.at(j) << " ";
    }
    std::cout << "\n";
    std::cout << v2.size() << std::endl;

    //Part D
    std::cout << "\n\nPart D" << std::endl;
    std::vector<int> v3{1,2,3};
    std::vector<int> v4{4,5};

    std::vector<int> v5 = sumPairWise(v3, v4); // returns [5, 7, 3]
    for(int x = 0; x < v5.size(); x++){
        std::cout << v5.at(x) << " ";
    }
    std::cout << "\n";
    return 0;
}