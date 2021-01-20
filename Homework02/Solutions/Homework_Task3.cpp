#include <iostream>
using namespace std;

int chArrayLength(const char* array) {
    int length = 0;
    while(array[length] != '\0') {
        length++;
    }

    return length;
}

void promoteLetter(const char* sentence, char &letter) {
    if(letter >= 'A' && letter <= 'Z') 
        return;
    
    for (int i = 0;  sentence[i] != '\0'; i++) {
        if(sentence[i] == letter) 
            letter -= 32;
    }
}

void promoteToUpper(char* sentence1, char* sentence2) {
    int length = chArrayLength(sentence1);
    for (int i = 0; i < length; i++) {
        if(sentence1[i] >= 'a' && sentence1[i] <= 'z') 
            promoteLetter(sentence2,sentence1[i]);
    }
}


int main() {
    char sentence1[100] = "goodbook";
    char sentence2[100] = "o";

    promoteToUpper(sentence1,sentence2);

    cout << sentence1;
}