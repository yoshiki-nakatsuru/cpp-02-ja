// コードを入力してください
#include <iostream>
#include <chrono>

#include "stack_deque.hpp"
#include "stack_list.hpp"
#include "stack_vector.hpp"


int main(){
    StackDeque<int> stackDeque;
    StackList<int> stackList;
    StackVector<int> stackVector;

    auto start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++){
        stackDeque.push(i);
        if( (i%3) == 1 ){
            stackDeque.pop();
        }
    }

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "deque duration:" << duration << std::endl;

    start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++){
        stackList.push(i);
        if( (i%3) == 1 ){
            stackList.pop();
        }
    }

    end = std::chrono::high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "list duration:" << duration << std::endl;

    start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < 1000000; i++){
        stackVector.push(i);
        if( (i%3) == 1 ){
            stackVector.pop();
        }
    }

    end = std::chrono::high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "vector duration:" << duration << std::endl;


}