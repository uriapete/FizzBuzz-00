#include <string>
// #include <variant>
#include <vector>

#pragma once

//class for words to replace words with
class RepWord
{
private:
    /* data */
public:
    std::string word;
    int number;

    static std::vector<RepWord> wordList;

    RepWord(std::string wor, int num);
    ~RepWord();

    static std::vector<std::string> FizzBuzz(int maxNum);
};

// RepWord::RepWord(/* args */)
// {
// }

// RepWord::~RepWord()
// {
// }
