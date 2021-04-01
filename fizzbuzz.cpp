#include<iostream>

int main(){

    for(int i=1; i<=100; i++){

        std::string word = "";

        if(i % 3 == 0) word += "fizz";
        if(i % 5 == 0) word += "buzz";

        if(word != ""){
            std::cout << word << "\n";
            continue;
        }
        std::cout << i << "\n";
    }

    return 0;
}
