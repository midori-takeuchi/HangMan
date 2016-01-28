#include <iostream>
#include <string>

using namespace std;

int hangMan(string word) {
	int misses = 0;
	int numberGuessed = 0;
	string output = word;
	int triesLeft = word.length(); 
	for (int i = 0; i < output.length(); i++) {
		output[i] = '_';
	}
       // setting # of tries

	while (numberGuessed < word.length()) {
		cout << "Guess a letter in the word ";
		cout << output << " : ";
		char guess;

		// users input guess
		cin >> guess;

		bool correctGuess = false;
		bool duplicate = false;
		for (int i = 0; i < word.length(); i++) 
			if (guess == word[i]) {
			   // solving problem of user having already guessed that character
			   if (output[i] == word[i]) {
			      cout << guess << " has already been guessed. \n" << endl;
			      duplicate = true;
				  break;
			    } else {
				output[i] = word[i];
				numberGuessed++;
				correctGuess = true;
			     }
			}
			   if (output[i] == word[i]) {
			      cout << guess << " has already been guessed. \n" << endl;
			      duplicate = true;
			      break;
			   } else {
				output[i] = word[i];
				numberGuessed++;
				correctGuess = true;
				}
			}

			if (duplicate)
			   continue;

			if (correctGuess == false) {
				misses++;
				triesLeft--;	
				cout << guess << " is not in the word! You have " << triesLeft<< " tries left. \n" << endl;
				}
			
			if (triesLeft == 0) {
				cout << "You lose! \n" << endl;
				break;
			}
		}
	if (triesLeft != 0) {
	cout << "Correct! Word is " << word << "!" << endl;
	} 

	return misses;
	
}

int main() {
	hangMan("compsci");
}

