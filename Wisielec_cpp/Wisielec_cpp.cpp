// Wisielec_cpp.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string wisielec_ascii[13] = {
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


string losuj_slowo(vector <string>& slowa) {
	return slowa[rand() % slowa.size()];
}

vector<string> slowa = {
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
vector<string> slowa_medium = {
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
vector<string> slowa_hard = {

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

void Menu_glowne(int poziom_trudnosci) {

	string ukryte_slowo;
	//string podpowiedz = ukryte_slowo;
	int proba;
	if (poziom_trudnosci == 1) {
		ukryte_slowo = losuj_slowo(slowa);
		proba = 12;
	}
	else if (poziom_trudnosci == 2) {
		ukryte_slowo = losuj_slowo(slowa_medium);
		proba = 10;
	}
	else if (poziom_trudnosci == 3) {
		ukryte_slowo = losuj_slowo(slowa_hard);
		proba = 7;
	}
	char odpowiedz;
	string podpowiedz = ukryte_slowo;

	for (int i = 0; i < ukryte_slowo.length(); i++) {

		podpowiedz[i] = '_';
	}

	while (true) {

		cout << wisielec_ascii[proba] << endl;
		cout << podpowiedz << endl;
		cout << "Podaj litere: ";
		cin >> odpowiedz;

		if (ukryte_slowo.find(odpowiedz) != string::npos) {

			for (int i = 0; i < podpowiedz.length(); i++) {
				if (ukryte_slowo[i] == odpowiedz)
					podpowiedz[i] = odpowiedz;
			}

		}
		if (ukryte_slowo == podpowiedz) {
			cout << wisielec_ascii[proba] << endl;
			cout << "Wygrales! Ukrytym slowem bylo: " << ukryte_slowo << endl;
			break;
		}
		else {
			proba--;
		}
		if (proba <= 0) {

			cout << wisielec_ascii[proba] << endl;
			cout << "Przegrales! Ukrytym slowem bylo: " << ukryte_slowo << endl;
			cout << "Twoja odpowiedz to: " << podpowiedz << endl;
			break;

		}

	}
}


int main(){

	int poziom_trudnosci = 1;

	while (true) {

		cout << "Choose difficulty level: \n";
		cout << "1. Easy (12 tries)" <<
			"\n2. Medium (10 tries)" <<
			"\n3. Hard (7 tries)";
		cin >> poziom_trudnosci;

		if (poziom_trudnosci > 3 || poziom_trudnosci < 1){
			cout << "Wrong input!" << endl;
			continue;
	}

		Menu_glowne(poziom_trudnosci);
	}
}
