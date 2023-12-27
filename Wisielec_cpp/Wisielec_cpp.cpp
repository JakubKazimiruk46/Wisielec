// Wisielec_cpp.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ascii_art[13] = {
"  +----+\n"
"  |    |\n"
"  O    |\n"
" /|\\   |\n"
" / \\   |\n"
"       |\n"
"========\n",
"  +----+\n"
"  |    |\n"
"  O    |\n"
" /|\\   |\n"
" /     |\n"
"       |\n"
"========\n",
"  +----+\n"
"  |    |\n"
"  O    |\n"
" /|\\   |\n"
"       |\n"
"       |\n"
"========\n",
"  +----+\n"
"  |    |\n"
"  O    |\n"
" /|    |\n"
"       |\n"
"       |\n"
"========\n",
"  +----+\n"
"  |    |\n"
"  O    |\n"
"  |    |\n"
"       |\n"
"       |\n"
"========\n",
"+ -- +\n"
"|    |\n"
"O    |\n"
"     |\n"
"     |\n"
"     |\n"
"=======\n",
"+ -- +\n"
"|    |\n"
"     |\n"
"     |\n"
"     |\n"
"     |\n"
"=======\n",
"     |\n"
"     |\n"
"     |\n"
"     |\n"
"     |\n"
"=======\n",
"		\n"
"		\n"
"		\n"
"		\n"
"		\n"
"		\n"
"=======\n",
"		\n"
"		\n"
"		\n"
" O		\n"
"/|\\	\n"
"/ \\	\n"
"		\n",
"		\n"
"		\n"
"		\n"
"   O	\n"
"  /|\\	\n"
"  / \\	\n"
"		\n",
"	H	\n"
"	A	\n"
"	N	\n"
"	G	\n"
"	M	\n"
"	A	\n"
"	N	\n",
};


string generate_word(vector <string>& words) {
	return words[rand() % words.size()];
}

vector<string> words = {
		"programming", "language", "computer", "science", "algorithm",
		"software", "developer", "engineering", "application", "internet",
		"database", "framework", "interface", "hardware", "keyboard",
		"mouse", "monitor", "network", "security", "operating",
		"variable", "function", "iteration", "conditional", "loop",
		"pointer", "memory", "binary", "decimal", "hexadecimal",
		"concatenate", "substring", "manipulation", "validation", "iteration",
		"recursion", "inheritance", "polymorphism", "encapsulation", "abstraction",
		"library", "compilation", "debugging", "optimization", "declaration",
		"definition", "expression", "statement", "constant", "class",
		"object", "constructor", "destructor", "inheritance", "template",
		"namespace", "vector", "array", "linked", "list",
		"queue", "stack", "tree", "graph", "search",
		"sort", "insertion", "bubble", "selection", "merge",
		"quick", "linear", "binary", "hash", "algorithm",
		"search", "sort", "recursion", "iteration", "loop",
		"function", "variable", "pointer", "reference", "memory",
		"dynamic", "static", "operator", "overloading", "template",
		"STL", "template", "lambda", "expression", "constructor",
		"destructor", "operator", "friend", "virtual", "inheritance"
		"elephant", "whisper", "keyboard", "triangle", "treasure", "language", "birthday", "adventure",
	"festival", "education", "challenge", "property", "explosion", "landscape", "apartment", "umbrella", "knowledge",
	"pineapple", "whistle", "silhouette", "railroad", "suitcase", "mountain", "suitcase", "silhouette", "umbrella", "whistle",
	"whisper", "elephant", "explosion", "knowledge", "adventure", "property", "education", "apartment", "landscape", "challenge",
	"keyboard", "elephant", "triangle", "treasure", "language", "birthday", "festival", "birthday", "railroad", "silhouette", "whistle",
	"knowledge", "adventure", "festival", "explosion", "property", "triangle", "language", "treasure", "keyboard", "whisper", "birthday",
	"suitcase", "umbrella", "whistle", "silhouette", "railroad", "elephant", "mountain", "apartment", "challenge", "landscape", "festival",
	"knowledge", "adventure", "language", "birthday", "property", "explosion", "keyboard", "whisper", "railroad", "triangle", "treasure", "umbrella",
	"mountain", "silhouette", "apartment", "suitcase", "whistle", "language", "festival", "knowledge", "explosion", "adventure", "keyboard", "apartment",
	"challenge", "treasure", "railroad", "property", "whisper", "elephant", "language", "umbrella", "railroad", "challenge", "birthday", "explosion", "knowledge", "suitcase"


};
vector<string> words_medium = {
	"hermit", "banjo", "sunset", "cousin", "plastic", "pocket", "whisper", "zigzag", "freight", "glasses", "keyboard",
	"frozen", "giraffe", "package", "kitchen", "hamster", "silence", "mansion", "outside", "balloon", "victory", "monster",
	"country", "quiver", "furniture", "quality", "envelope", "stomach", "against", "lemonade", "internet", "wilderness", "factory",
	"elephant", "laughter", "apartment", "football", "backpack", "umbrella", "password", "hallway", "crystal", "whistle", "daughter",
	"radiant", "platform", "squirrel", "complete", "triangle", "guitar", "journey", "struggle", "sweater", "picture", "distance", "festival",
	"treasure", "umbrella", "mountain", "property", "suitcase", "clothing", "building", "universe", "blanket", "cucumber", "suitcase", "wildlife",
	"captain", "vacation", "explode", "pineapple", "railroad", "education", "whisper", "knowledge", "elephant", "material", "festival", "challenge",
	"triangle", "language", "treasure", "pajamas", "daughter", "cupboard", "apartment", "fireplace", "railroad", "spaghetti", "sunshine", "birthday",
	"adventure", "landscape"
};
vector<string> words_hard = {

	"swift", "flower", "pizza", "dream", "planet", "jungle", "rocket", "guitar","orange", "puzzle","marble", "candle", "zephyr", "castle",
	"basket", "honey", "jacket", "puppet", "banana", "bottle","pillow", "cookie", "cherry", "ticket", "kitten", "rocket",
	"dragon", "island", "summer", "donkey","monkey", "secret", "anchor", "pencil", "garden", "turtle", "laptop", "zipper",
	"circus", "jungle","market", "rabbit", "school", "cherry", "circus", "branch", "orange", "basket", "spring", "window",
	"rabbit", "danger", "guitar", "muffin", "wizard", "ladder", "tunnel", "marble", "planet", "circus", "kitten", "flower",
	"island", "candle", "jacket", "kitten", "planet", "zipper", "pillow", "pencil", "puppet", "rocket", "zipper", "orange",
	"ladder", "basket", "spring", "jungle", "planet", "branch", "basket", "rocket", "anchor", "ladder", "turtle", "puzzle",
	"cherry", "market", "branch", "tunnel", "zephyr", "guitar", "kitten", "cherry", "pillow", "muffin", "bottle", "zipper",
	"island", "puppet"
};

void Main_menu(int difficulty_level) {

	string hidden_word;
	//string clue = hidden_word;
	int try_count;
	if (difficulty_level == 1) {
		hidden_word = generate_word(words);
		try_count = 12;
	}
	else if (difficulty_level == 2) {
		hidden_word = generate_word(words_medium);
		try_count = 10;
	}
	else if (difficulty_level == 3) {
		hidden_word = generate_word(words_hard);
		try_count = 7;
	}
	char user_answer;
	string clue = hidden_word;

	for (int i = 0; i < hidden_word.length(); i++) {

		clue[i] = '_';
	}

	while (true) {

		cout << ascii_art[try_count] << endl;
		cout << clue << endl;
		cout << "Give me a letter: ";
		cin >> user_answer;

		if (hidden_word.find(user_answer) != string::npos) {

			for (int i = 0; i < clue.length(); i++) {
				if (hidden_word[i] == user_answer)
					clue[i] = user_answer;
			}

		}
		if (hidden_word == clue) {
			cout << ascii_art[try_count] << endl;
			cout << "You won! Hidden word was: " << hidden_word << endl;
			break;
		}
		else {
			try_count--;
		}
		if (try_count <= 0) {

			cout << ascii_art[try_count] << endl;
			cout << "You lost! Hidden word was: " << hidden_word << endl;
			cout << "Your finall clue is: " << clue << endl;
			break;

		}

	}
}


int main(){

	int difficulty_level = 1;
	srand(time(0));

	while (true) {
		cout << "Simple hangman game, every word is in english, each difficulty level has different max word lenght\n";
		cout << "By Jakub Kazimiruk\n\n";
		cout << "Choose difficulty level: \n";
		cout << "1. Easy (12 tries)" <<
			"\n2. Medium (10 tries)" <<
			"\n3. Hard (7 tries)\n";

		while (!(cin >> difficulty_level))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid input. Try again. " << endl;
		}
		if (difficulty_level < 0 || difficulty_level > 3)
			continue;

		Main_menu(difficulty_level);
	}
}
