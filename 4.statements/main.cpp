#include <iostream>

int addNumbers( int first_param, int second_param){

    int result = first_param + second_param; //every statements end with ;
    return result;
}

int main(){
    int first_number {3}; //Statement
    int second_number {7}; 

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second_number : " << second_number << std:: endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(10, 100);
    std::cout << "Sum : " << sum << std::endl;
    std::cout << "Sum : " << addNumbers(10, 100) << std::endl;
    return 0; 
}