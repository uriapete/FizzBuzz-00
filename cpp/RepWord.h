#include <string>
#include <vector>

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

    std::vector<int> FizzBuzz(int maxNum);
};

// RepWord::RepWord(/* args */)
// {
// }

// RepWord::~RepWord()
// {
// }
