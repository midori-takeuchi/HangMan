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
<<<<<<< HEAD
<<<<<<< HEAD
       // setting # of tries
=======
	// setting # of tries
>>>>>>> 6a7cdcc3ed4c1afc8c23f514d2048ca4d2c25652
=======
       // setting # of tries
>>>>>>> midoriBranch
	while (numberGuessed < word.length()) {
		cout << "Guess a letter in the word ";
		cout << output << " : ";
		char guess;
<<<<<<< HEAD
<<<<<<< HEAD
		// users input guess
=======
		// user's input guess
>>>>>>> 6a7cdcc3ed4c1afc8c23f514d2048ca4d2c25652
=======
		// users input guess
>>>>>>> midoriBranch
		cin >> guess;

		bool correctGuess = false;
		bool duplicate = false;
		for (int i = 0; i < word.length(); i++) 
			if (guess == word[i]) {
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> midoriBranch
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
		
<<<<<<< HEAD
=======
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
>>>>>>> 6a7cdcc3ed4c1afc8c23f514d2048ca4d2c25652
=======
>>>>>>> midoriBranch
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
<<<<<<< HEAD
<<<<<<< HEAD
	if (triesLeft != 0) {
	cout << "Correct! Word is " << word << "!" << endl;
	} 
=======
	
	cout << "Correct! Word is " << word << "!" << endl; 
>>>>>>> 6a7cdcc3ed4c1afc8c23f514d2048ca4d2c25652
=======
	if (triesLeft != 0) {
	cout << "Correct! Word is " << word << "!" << endl;
	} 
>>>>>>> midoriBranch
	return misses;
	
}

int main() {
	hangMan("compsci");
}

