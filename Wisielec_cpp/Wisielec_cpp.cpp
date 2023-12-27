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
" /|\   |\n"
"       |\n"
"       |\n"
"========\n",
"  +----+\n"
"  |    |\n"
"  O    |\n"
" /|\   |\n"
" /     |\n"
"       |\n"
"========\n",
"  +----+\n"
"  |    |\n"
"  O    |\n"
" /|\   |\n"
" / \   |\n"
"       |\n"
"========\n"
};

string losuj_slowo(vector <string>& slowa) {

	return slowa[rand() % slowa.size()];

}

vector<string> slowa = { "komputer", "żyletka" };

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
		if (proba > 6) {

			cout << wisielec_ascii[proba] << endl;
			cout << "Przegrales! Ukrytym slowem bylo: " << ukryte_slowo << endl;
			cout << "Twoja odpowiedz to: " << podpowiedz << endl;
			break;

		}

	}


}


int main(){
  
	Menu_glowne();

}
