#include <string>
#include <vector>
// #include <variant>
#include <iostream>

#include "RepWord.h"

std::vector<RepWord> RepWord::wordList;

RepWord::RepWord(std::string wor, int num) {
    this->word=wor;
    this->number=num;
    wordList.push_back(*this);
}

RepWord::~RepWord(){}

std::vector<std::string> RepWord::FizzBuzz(int maxNum){
    // list of fizz,buzz,or ints
    std::vector<std::string> fbLs;
    for (int i = 1; i <= maxNum; i++)
    {
        /* code */
        std::string curWord = "";
        for (int j = 0; j < wordList.size(); j++)
        {
            /* code */
            RepWord wor = wordList[j];
            if (i % wor.number == 0) {curWord+=wor.word;}
        }
        if (curWord == "") {curWord = std::to_string(i);}
        fbLs.push_back(curWord);
        
    }
    return fbLs;
    
}

RepWord fizz = RepWord("Fizz", 3);
RepWord buzz = RepWord("Buzz", 5);

void printStrVect(std::vector<std::string> strVect){
    std::cout << "{ ";
    for (int i = 0; i < strVect.size(); i++)
    {
        /* code */
        std::string item = strVect[i];
        if (i > 0) {std::cout << ", ";}
        std::cout << item;
    }
    std::cout << " }\n";
    
}

int main() {
    printStrVect(RepWord::FizzBuzz(3));
    printStrVect(RepWord::FizzBuzz(5));
    printStrVect(RepWord::FizzBuzz(15));
    printStrVect(RepWord::FizzBuzz(100));
}