#include <iostream>
using namespace std;

bool wordCheckRec(const char* word1, const char* word2, int index2) {
    if(word1[0] == '\0') {
        return true;
    }

    if(word1[0] != '\0' && word2[index2] == '\0') {
        return false;
    }

    if(word1[0] == word2[index2]) {
        return wordCheckRec(word1 + 1, word2, 0);
    }

    if(word1[0] != word2[index2]) {
        return wordCheckRec(word1,word2, index2 + 1);
    }
}

int main() {
    char word1[100] = "goodbook";
    char word2[100] = "gbkod";
    if(wordCheckRec(word1,word2,0)) {
        cout << "YES";
    }else {
        cout << "NO";
    }
}