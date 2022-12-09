#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// Tests
TEST_CASE("Task A"){
    std::vector<int> test = makeVector(40);
    std::vector<int> test2 = makeVector(28);
    CHECK(test.at(39) == 39);
    CHECK(test.at(27) == 27);
}

TEST_CASE("Task B"){
    std::vector<int> b{-3, 5 , -3, 2, 6, 9};
    std::vector<int> newB = goodVibes(b);
    CHECK((newB) == std::vector<int> {5, 2, 6, 9});
    std::vector<int> b2{3, 9, -3, 3, 9};
    std::vector<int> newB2 = goodVibes(b2);
    CHECK(newB2 == std::vector<int> {3, 9, 3, 9});
}

TEST_CASE("Task C"){
    std::vector<int> v1{3, 9, 2, 7};
    std::vector<int> v2{3, 9};
    gogeta(v1, v2);
    CHECK(v1 == std::vector<int> {3, 9, 2, 7, 3, 9});
    CHECK(v2.size() == 0);
}

TEST_CASE("Task D"){
    std::vector<int> v3{3, 9, 9, 6};
    std::vector<int> v4{2, 7, 9};

    std::vector<int> v5 = sumPairWise(v3, v4);
    CHECK(v5 == std::vector<int> {5, 16, 18, 6});
}


/*
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
*/