#include <string>
#include <iostream>
#include <fstream>

using namespace std;


string cleanWord(string word)
{
	for (int i = 0; i < word.size(); i++) {
		if (isalnum(word[i])) {
			word[i] = tolower(word[i]);
		}
		else{
			word.erase(i, 1);
			i--;
		}
	}
	return word;
}

int getPlace(char toPlace) {
	switch (toPlace) {
	case 'a' :
		return 0;
		break;
	case 'b' :
		return 1;
		break;
	case 'c' :
		return 2;
		break;
	case 'd' :
		return 3;
		break;
	case 'e':
		return 4;
		break;
	case 'f' :
		return 5;
		break;
	case 'g' :
		return 6;
		break;
	case 'h' :
		return 7;
		break;
	case 'i' :
		return 8;
		break;
	case 'j' :
		return 9;
		break;
	case 'k' :
		return 10;
		break;
	case 'l' :
		return 11;
		break;
	case 'm' :
		return 12;
		break;
	case 'n' :
		return 13;
		break;
	case 'o' :
		return 14;
		break;
	case 'p' :
		return 15;
		break;
	case 'q' :
		return 16;
		break;
	case 'r' :
		return 17;
		break;
	case 's' :
		return 18;
		break;
	case 't' :
		return 19;
		break;
	case 'u' :
		return 20;
		break;
	case 'v' :
		return 21;
		break;
	case 'w' :
		return 22;
		break;
	case 'x' :
		return 23;
		break;
	case 'y' :
		return 24;
		break;
	case 'z' :
		return 25;
		break;
	default:
		return 26;
		break;
	}
}

char toChar(int number) {
	switch (number) {
	case 0:
		return 'A';
		break;
	case 1:
		return 'B';
		break;
	case 2:
		return 'C';
		break;
	case 3:
		return 'D';
		break;
	case 4:
		return 'E';
		break;
	case 5:
		return 'F';
		break;
	case 6:
		return 'G';
		break;
	case 7:
		return 'H';
		break;
	case 8:
		return 'I';
		break;
	case 9:
		return 'J';
		break;
	case 10:
		return 'K';
		break;
	case 11:
		return 'L';
		break;
	case 12:
		return 'M';
		break;
	case 13:
		return 'N';
		break;
	case 14:
		return 'O';
		break;
	case 15:
		return 'P';
		break;
	case 16:
		return 'Q';
		break;
	case 17:
		return 'R';
		break;
	case 18:
		return 'S';
		break;
	case 19:
		return 'T';
		break;
	case 20:
		return 'U';
		break;
	case 21:
		return 'V';
		break;
	case 22:
		return 'W';
		break;
	case 23:
		return 'X';
		break;
	case 24:
		return 'Y';
		break;
	case 25:
		return 'Z';
		break;
	default:
		return '-';
		break;
	}
}

int main()
{
	int super[25] = { 0 };
	int size = 0;
	int placement;
	string checkWord = "";

	//open the file
	fstream input;
	string file = "prob2.in";
	input.open(file);
	
	//count the characters using super
	while (input >> checkWord) {
		checkWord = cleanWord(checkWord);
		for (int i = 0; i < checkWord.length(); i++) {
			placement = getPlace(checkWord[i]);
			super[placement] = super[placement] + 1;
			size++;
		}
	}

	int superFreq = 0;
	for (int i = 0; i < 26; i++) {
		if (((15 * size)/100) < super[i]) { //check to see if a character is a super
			superFreq = i;
			cout << toChar(superFreq) << " is a super freq." << endl; //recreate character and print
		}
	}

	system("pause");
	return 0;
}
