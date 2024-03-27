// コードを入力してください
#pragma once

#include <deque>

template <typename T>
class StackDeque {
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
    std::deque<T> stack;
};

