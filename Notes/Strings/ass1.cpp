#include <bits/stdc++.h>
using namespace std;

int main() {
    int letterCount=0;
    int wordCount=0;
    int lineCount=0;

    
     string p ="Matt told her to reach for the stars, but Veronica thought it was the most ridiculous advice she'd ever received. Sure, it had been well-meaning when he said it, but she didn't understand why anyone would want to suggest something that would literally kill you if you actually managed to achieve it ." ;


if (getline(cin, p)) {
        lineCount++;
        for (char c : p) {
            if (isalpha(c)) {
                letterCount++;
            }
        }

        stringstream ss(p);
       string word;
        while (ss >> word) {
            wordCount++;
        }
    }

   cout << "Number of letters: " << letterCount << endl;
   cout << "Number of words: " << wordCount << endl;
   cout << "Number of lines: " << lineCount << endl;

    return 0;
}

