// コードを入力してください
#pragma once

#include <list>

template <typename T>
class StackList {
public:
    void push(const T& value){
        stack.push_front(value);
    }
    void pop(){
        if(!stack.empty()){
            stack.pop_front();
        }
    }
    T top() const{
        return stack.front();
    }
    bool is_empty() const{
        return stack.empty();
    }
private:
    std::list<T> stack;
};

