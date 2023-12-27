// Wisielec_cpp.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string wisielec_ascii[7] = {
"+ -- +\n"
"|    |\n"
"     |\n"
"     |\n"
"     |\n"
"     |\n"
"=======\n",
" +----+\n"
" |    |\n"
" O    |\n"
"      |\n"
"      |\n"
"      |\n"
"=======\n",
" +----+\n"
" |    |\n"
" O    |\n"
" |    |\n"
"      |\n"
"      |\n"
"=======\n",
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
" /|\\   |\n"
"       |\n"
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
" / \\   |\n"
"       |\n"
"========\n"
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
};

void Menu_glowne() {

	string ukryte_slowo = losuj_slowo(slowa);
	string podpowiedz = ukryte_slowo;
	int proba = 0;
	char odpowiedz;

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
			proba++;
		}
		if (proba > 5) {

			cout << wisielec_ascii[proba] << endl;
			cout << "Przegrales! Ukrytym slowem bylo: " << ukryte_slowo << endl;
			cout << "Twoja odpowiedz to: " << podpowiedz << endl;
			break;

		}

	}
}


int main(){
	while (true) {
		Menu_glowne();
	}
}
