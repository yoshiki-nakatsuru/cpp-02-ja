// コードを入力してください
#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T>
void print_elements(std::vector<T> vector){
  for(T t : vector ){
        std::cout << t ;
    }
} 

template <typename T>
void print_elements(std::list<T> list){
  for(T t : list ){
        std::cout << t ;
    }
} 

template <typename T>
void print_elements(std::deque<T> deque){
  for(T t : deque){
        std::cout << t ;
    }
} 