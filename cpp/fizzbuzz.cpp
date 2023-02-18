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
        if (curWord == "") {curWord = i;}
        fbLs.push_back(curWord);
        
    }
    return fbLs;
    
}

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

}