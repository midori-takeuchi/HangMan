#include <iostream>
#include <string>

using namespace std;

int hangMan(string word) {
	string output = word;
	int triesLeft = word.length(); 
	for (int i = 0; i < output.length(); i++) {
		output[i] = '_';
	}
       // setting # of tries

	while (triesLeft != 0) {
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
				triesLeft--;
				correctGuess = true;
			     }
			}
		
			

		if (duplicate)
		     continue;

		if (correctGuess == false) {
		   triesLeft--;	
		   cout << guess << " is not in the word! You have " << triesLeft<< " tries left. \n" << endl;
		}
	}
			
	if (triesLeft == 0) {
		cout << "You lose! \n" << endl;
	}
		
	if (triesLeft != 0) {
	cout << "Correct! Word is " << word << "!" << endl;
	}
	
	return triesLeft; 

	
}

int main() {
   hangMan("compsci");
}

