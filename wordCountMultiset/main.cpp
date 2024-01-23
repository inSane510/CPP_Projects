#include <iostream>
#include <fstream>
#include <unordered_set>

using namespace std;

unordered_multiset<string> readFileWordsInto_MultiSet(string txtFileName){
    ifstream fileToRead;
    fileToRead.open(txtFileName);

    string output;

    unordered_multiset<string> newMultiSet;

    if(fileToRead.is_open()){
        while(!fileToRead.eof()){
            fileToRead >> output;
            newMultiSet.insert(output);
        }


        cout << "Successfully loaded words into a set!" << endl;
    }
    else{
        cout << "Error: Failed to open file, or file doesn't exist." << endl;
    }

    fileToRead.close();

    return newMultiSet;

}


int main()
{
    string txtFileName = "textFile.txt";

    unordered_multiset<string> wordCounts;

    wordCounts = readFileWordsInto_MultiSet(txtFileName);

    if(!wordCounts.empty()){
        string targetWord;

        cout << "Which word's count would you like to know?" << endl;
        cout << "Enter word: ";
        cin >> targetWord;

        cout << "The word \"" << targetWord << "\" shows up " << wordCounts.count(targetWord) << " times." << endl;
    }


    return 0;
}
