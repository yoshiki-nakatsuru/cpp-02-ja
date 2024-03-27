// コードを入力してください
#pragma once

#include <vector>

template <typename T>
class StackVector {
public:
    void push(const T& value){
        stack.push_back(value);
    }
    void pop(){
        if(!stack.empty()){
            stack.pop_back();
        }
    }
    T top() const{
        return stack.back();
    }
    bool is_empty() const{
        return stack.empty();
    }
private:
    std::vector<T> stack;
};

