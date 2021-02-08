#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;

/*
// 1. String Length

int numCharacter(char*);
int main() {

	int char_size;
	const int SIZE = 50;

	char my_arr[SIZE] = "Hello how are you!";

	char_size = numCharacter(my_arr);

	cout << "The char array is " << char_size << " character large (including white spaces).\n";
	return 0;
}
int numCharacter(char *my_arr) {
	int len = strlen(my_arr);

	return len;
}
*/

/*
// 2. Backward String

void backwardsString(char*);

int main() {

	const int SIZE = 50;

	char my_arr[SIZE];
	cout << "Enter a simple sentence: ";
	cin.getline(my_arr, SIZE);

	backwardsString(my_arr);

	return 0;
}
void backwardsString(char* my_arr) {

	char* cptr = nullptr;
	cptr = new char[strlen(my_arr)]; //makes a dynamic char array that's the same size as the 'my_arr'

	int counter = 0;

	for (int i = strlen(my_arr) - 1; i >= 0; i--) {
		cptr[counter] = my_arr[i];
		cout << cptr[counter];
	}

	delete[] cptr;
}
*/

/*
// 3. Word Count

int wordCounter(char*);
int wordCounter(string);

int main() {
	int words;
	string my_words;
	const int SIZE = 50;
	char my_arr[SIZE];
	cout << "Enter a simple sentence: ";
	cin.getline(my_arr, SIZE);

	my_words = my_arr;

	words = wordCounter(my_words);
	cout << "STRING\n";
	cout << "There are " << words << " words in that sentence.\n";

	words = wordCounter(my_arr);
	cout << "\nC-STRING.\n";
	cout << "There are " << words << " words in that sentence.\n";
	return 0;
}
int wordCounter(char *my_arr) {
	int counter = 0;
	for (int i = 0; i < strlen(my_arr); i++) {
		if (my_arr[i] == ' ') {
			counter++;
		}
	}
	counter++;
	return counter;
}

int wordCounter(string my_words) {

	int counter = 0;
	for (int i = 0; i < my_words.size(); i++) {
		if (my_words[i] == ' ') {
			counter++;
		}
	}
	counter++;
	return counter;
}
*/

/*

// 4. Average Number of Letters

int wordCounter(char*);
int wordCounter(string);

int main() {
	int words;
	string my_words;
	const int SIZE = 50;
	char my_arr[SIZE];
	cout << "Enter a simple sentence: ";
	cin.getline(my_arr, SIZE);

	my_words = my_arr;

	cout << "STRING\n";
	words = wordCounter(my_words);
	cout << "There are " << words << " words in that sentence.\n";

	cout << "\nC-STRING.\n";
	words = wordCounter(my_arr);
	cout << "There are " << words << " words in that sentence.\n";
	return 0;
}
int wordCounter(char* my_arr) {
	int counter = 0;
	double average;
	int total_letters;
	for (int i = 0; i < strlen(my_arr); i++) {
		if (my_arr[i] == ' ') {
			counter++;
		}
	}
	total_letters = strlen(my_arr) - counter;
	counter++;
	average = total_letters / counter;

	
	cout << "The average number of letters in this sentence is: " << average << endl;
	return counter;
}

int wordCounter(string my_words) {
	int counter = 0;
	double average;
	int total_letters;
	for (int i = 0; i < my_words.size(); i++) {
		if (my_words[i] == ' ') {
			counter++;
		}
	}
	total_letters = my_words.size() - counter;
	counter++;
	average = total_letters / counter;

	cout << "The average number of letters in this sentence is: " << average << endl;

	return counter;
}
*/
/*
// 5. Sentence Capitilizer
void sentenceCapitalizer(char*);
int main() {
	const int SIZE = 100;

	char my_sent[SIZE];

	cout << "Enter a simple senetence: ";
	cin.getline(my_sent, SIZE);
	sentenceCapitalizer(my_sent);
	cout << my_sent;

	return 0;
}

void sentenceCapitalizer(char *my_sent) {

	for (int i = 0; i < strlen(my_sent); i++) { //Capitlizes the first word in the sentence
		
		if (isalpha(my_sent[i])) {
			if (!isupper(my_sent[i])) {
				my_sent[i] = toupper(my_sent[i]);
			}
			break;
		}
	}

	for (int i = 0; i < strlen(my_sent); i++) {
		if (my_sent[i] == '.' || my_sent[i] == '!' || my_sent[i] == '?') {
			for (int j = i + 1; j < strlen(my_sent); j++) {
				if (isalpha(my_sent[j])) {
					if (!isupper(my_sent[j])) {
						my_sent[j] = toupper(my_sent[j]);
						break;
					}
				}
			}
		}
	}
}
//Did not complete the optional excercise
*/
/*
// 6. Vowels and Constants
int consonantsCount(char*, int);
int vowelCount(char*);

int main() {

	const int SIZE = 100;
	char my_sent[SIZE];

	int num_vowel;
	int num_cons;
	char user_choice;
	bool end = false;
		
	cout << "Enter a simple sentence: ";
	cin.getline(my_sent, SIZE);
	
	do {
		cout << "A) Count the number of vowels in the string\nB) Count the number of consonants in the string\nC) Count both the vowelsand consonants in the string\nD) Enter another string\nE) Exit the program\n";
		cout << "\nENTER: ";
		cin >> user_choice;

		num_vowel = vowelCount(my_sent);
		num_cons = consonantsCount(my_sent, num_vowel);

		if (toupper(user_choice) == 'A') {
			cout << "There are " << num_vowel << " vowels in that sentence." << endl;
			cout << endl;
		}
		else if (toupper(user_choice) == 'B') {
			cout << "There are " << num_cons << " consonants in that sentence." << endl;
			cout << endl;
		}
		else if (toupper(user_choice) == 'C') {
			cout << "There are " << num_vowel << " vowels in that sentence." << endl;
			cout << "There are " << num_cons << " consonants in that sentence." << endl;
			cout << endl;
		}
		else if (toupper(user_choice) == 'D') {
			cout << "Enter a simple sentence: ";
			cin.get();
			cin.getline(my_sent, SIZE);
		}
		else if (toupper(user_choice) == 'E') {
			cout << "Good Bye.\n";
			end = true;
		}
		else {
			cout << "ERROR: Please enter a valid choice.\n";
			cout << "\nENTER: ";
			cin >> user_choice;
		}
	} while (end == false);

	return 0;
}
int vowelCount(char*my_sent) {
	int vowels = 0;
	for (int i = 0; i < strlen(my_sent); i++) {
		if (toupper(my_sent[i]) == 'A' || toupper(my_sent[i]) == 'E'
			|| toupper(my_sent[i]) == 'I' || toupper(my_sent[i]) == 'O' || toupper(my_sent[i]) == 'U') {

			vowels++;
		}
	}
	return vowels;
}
int consonantsCount(char*my_sent, int num_vowel) {

	int cons = 0;
	int other_char = 0;
	for (int i = 0; i < strlen(my_sent); i++) {
		if (!isalpha(my_sent[i])) {
			other_char++;
		}
	}

	cons = strlen(my_sent) - (other_char + num_vowel);

	return cons;

}
*/
/*
// 7. Name Arranger

int main() {

	int max_chars;
	const int SIZE = 40;
	const int MAX_SIZE = 50;
	int count = 0;

	int important;

	int begin = 0;

	char user_input[SIZE], fname[SIZE], mname[SIZE], lname[SIZE], whole_name[MAX_SIZE];
	cout << "Enter your whole name (first middle and last).\n";
	cout << "ENTER: ";

	cin.get(user_input, SIZE);
	
	for (int i = 0; i < strlen(user_input); i++) {
		if (count == 0) {
			if (isalpha(user_input[i])) {
				fname[i] = user_input[i];
			}
			else {
				fname[i] = '\0';
				important = i + 1;
				count++;
			}
		}
		else if (count == 1) {
			if (isalpha(user_input[i])) {
				mname[i - important] = user_input[i];
			}
			else {
				mname[i - important] = '\0';
				important = i + 1;
				count++;
			}
		}
		else if (count == 2) {
			lname[i - important] = user_input[i];
			if (i == strlen(user_input)-1) {
				lname[i - important + 1] = '\0';
			}
		}

	}

	for (int i = 0; i < strlen(fname); i++) {
		whole_name[i] = fname[i];
	}
	
	whole_name[strlen(fname)] = ',';
	whole_name[strlen(fname) + 1] = ' ';

	int index = strlen(fname) + 2;

	for (int i = 0; i < strlen(mname); i++) {

		whole_name[i + index] = mname[i];

	}
	whole_name[strlen(mname) + index] = ' ';

	index += strlen(mname) + 1;

	for (int i = 0; i < strlen(lname); i++) {

		whole_name[i + index] = lname[i];

	}

	index += strlen(lname);

	whole_name[index] = '\0';

	cout << whole_name;


	return 0;
}
*/
/*
// 8. Sum of Digitsd in a String

int main() {

	string my_array;
	int sum = 0;
	int num;
	string letter;

	cout << "Enter digits (no spaces)\n";
	cout << "ENTER: ";
	getline(cin, my_array);
	

	char *cptr = nullptr;

	for (int i = 0; i < my_array.size(); i++) {
		
		letter = my_array[i];

		int num = atoi(letter.c_str());

		sum += num;

	}

	cout << "Total: " << sum;

	return 0;
}
*/
/*
// 9. Most Frequent Character
char mostFrequent(char*);
int main() {

	const int SIZE = 40;
	char my_arr[SIZE];
	char most_frequent;
	cout << "Please eneter a sentence.\n";
	cout << "SENTENCE: ";
	cin.getline(my_arr, SIZE);

	most_frequent = mostFrequent(my_arr);

	cout << "The most frequent character is '" << most_frequent << "'" << endl;
	return 0;
 }


char mostFrequent(char* my_arr) {

	char frequent = 'a';
	vector<char> unique_arr;
	vector<int> frequence;
	int count;

	bool unique;

	char first;

	first = tolower(my_arr[0]);
	unique_arr.push_back(first);

	for (int i = 1; i < strlen(my_arr); i++) {
		unique = true;
		if (isalpha(my_arr[i])) {
			for (int j = 0; j < unique_arr.size(); j++) {

				if (tolower(my_arr[i]) == tolower(unique_arr[j])) {
					unique = false;
				}
			}
			if (unique == true) {
				unique_arr.push_back(tolower(my_arr[i]));
			}
		}
	}

	cout << "\nUnique characters.\n";
	for (int i = 0; i < unique_arr.size(); i++) {
		cout << unique_arr[i];
	}
	cout << endl;

	for (int i = 0; i < unique_arr.size(); i++) { //counts the number of times the 
		char test = unique_arr[i];
		count = 0;
		for (int j = 0; j < strlen(my_arr); j++) {
				if (test == tolower(my_arr[j])) {
					count++;
				}

		}
		frequence.push_back(count);
	}

	int most_frequent = frequence[0];
	int frequent_index = 0;
	for (int i = 1; i < frequence.size(); i++) {
		if (most_frequent < frequence[i]) {
			most_frequent = frequence[i];
			frequent_index = i;
		}
	}

	frequent = unique_arr[frequent_index];

	cout << frequent << endl;

	return frequent;

}
*/

// 10. replaceSubstring Function
/*
string replaceSubstring(string, string, string);

int main() {

	string string1, string2, string3, result;


	string1 = "The cow jumped over the moon. The cow loves the moon!";
	string2 = "cow";
	string3 = "sheep";


	result = replaceSubstring(string1, string2, string3);
	cout << string1 << endl;
	cout << result << endl;
	return 0;
}

string replaceSubstring(string string1, string string2, string string3){

	string result, string4;

	vector<int> position;

	string4 = string1;

	int found_at = 0;
	do {
		found_at = string4.find(string2, found_at); //
		if (found_at != -1) {
			string4.erase(found_at, string2.size());
			string4.insert(found_at, string3);
			found_at++;
		}
	} while (found_at != -1);

	result = string4;

	return result;
}
*/

/*
// 11. Case Manipulator

void reverse(char*);
void lower(char*);
void upper(char*);

int main() {
	const int SIZE = 50;
	char my_arr[SIZE];



	cout << "Enter a string: ";
	cin.getline(my_arr, SIZE);

	cout << "\nCHANGES\n";
	
	reverse(my_arr);
	cout << my_arr << endl;

	lower(my_arr);
	cout << my_arr << endl;

	upper(my_arr);
	cout << my_arr << endl;

	return 0;
}

void reverse(char*my_arr) {
	for (int i = 0; i < strlen(my_arr); i++) {
		if (isalpha(my_arr[i])) {

			if (islower(my_arr[i])) {

				my_arr[i] = toupper(my_arr[i]);

			}
			else {
				my_arr[i] = tolower(my_arr[i]);

			}
		}
	}

}

void lower(char*my_arr) {
	for (int i = 0; i < strlen(my_arr); i++) {
		if (isalpha(my_arr[i])) {

			if (!islower(my_arr[i])) {

				my_arr[i] = tolower(my_arr[i]);

			}
		}
	}

}
void upper(char*my_arr) {
	for (int i = 0; i < strlen(my_arr); i++) {
		if (isalpha(my_arr[i])) {

			if (!isupper(my_arr[i])) {

				my_arr[i] = toupper(my_arr[i]);

			}

		}
	}
}
*/
/*
// 12. Password Verifier
bool testPassword(char*);
int main() {
	const int SIZE = 20;

	char password[SIZE];

	bool test;

	do {
		cout << "ENTER PASSWORD: ";
		cin.getline(password, SIZE);
		test = testPassword(password);
	} while (test == false);

	cout << "\nPASSWORD SAVED.\n";

	return 0;
}
bool testPassword(char*password) {
	bool upper_check = false, digit_check = false;
	int lower_check = 0;
	if (strlen(password) < 6) {
		cout << "ERROR: Password to short (Minimum 6 characters).\n";
		return false;
	}

	for (int i = 0; i < strlen(password); i++) {
		if (isupper(password[i])) {
			upper_check = true;
		}
		if (islower(password[i])) {
			lower_check++;
		}
		if (isdigit(password[i])) {
			digit_check = true;
		}
	}

	if (upper_check == false) {
		cout << "ERROR: At least one uppercase character is required.\n";
		return false;
	}
	else if (lower_check < 2) {
		cout << "ERROR: At least two lower case characters are required.\n";
		return false;
	}
	else if (digit_check == false) {
		cout << "ERROR: At least one digit is required.\n";
		return false;
	}
	else {
		return true;
	}
}
*/

// 13. Date Printer
/*
int main() {
	
	const int SIZE = 30;

	string date_arr;
	string month, day, year;


	int month_num;
	
	cout << "Please enter a date in the format \"mm/dd/yy\"." << endl;
	cout << "ENTER DATE: ";

	getline(cin, date_arr);

	if (date_arr[0] == '0') {
		month = date_arr[1];
		month_num = atoi(month.c_str());
	}
	else {
		month = date_arr[1];
		month_num = atoi(month.c_str()) + 10;
	}
	
	switch (month_num) {
	case 1:
		month = "January";
		break;
	case 2:
		month = "February";
		break;
	case 3:
		month = "March";
		break;
	case 4:
		month = "April";
		break;
	case 5:
		month = "May";
		break;
	case 6:
		month = "June";
		break;
	case 7:
		month = "July";
		break;
	case 8:
		month = "August";
		break;
	case 9:
		month = "September";
		break;
	case 10:
		month = "October";
		break;
	case 11:
		month = "November";
		break;
	case 12:
		month = "December";
		break;
	default:
		month = "NOT AN OPTION";
	}

	day.append(date_arr, 3, 2);
	year.append(date_arr, 6, 4);

	cout << month << " " << day << ", " << year;

	return 0;
}
*/
/*
// 14. Word Separator

int main() {
	string user_input;
	char chr_check;
	cout << "Enter a sentence.\n";
	cout << "The first letter of every word MUST be capitilized.\n";
	cout << "There are no spaces between the words.\n";
	cout << "\nENTER: ";
	getline(cin, user_input);

	for (int i = 1; i < user_input.size(); i++) {
		chr_check = user_input[i];
		if (isupper(chr_check)) {
			user_input[i] = tolower(chr_check);
			user_input = user_input.insert(i, 1, ' ');
			i++;
		}
	}
	cout << user_input;
	return 0;
}
*/
/*
// 15. Character Anlaysis
// NOTE: I don't have access to the the file required. I will be using my own.
int main() {

	ifstream inFile;
	char input;
	int lower_case = 0, upper_case = 0, numbers = 0;

	inFile.open("text.txt");
	if (inFile.fail()) {
		cout << "ERROR: File failed to open.\n";
		return 0;
	}
	while (!inFile.eof()) {
		inFile >> input;
		if (inFile.eof()) {
			break;
		}
		if (islower(input)) {
			lower_case++;
		}
		else if (isupper(input)) {
			upper_case++;
		}
		else if (isdigit(input)) {
			numbers++;
		}

	}

	cout << "Lower case: " << lower_case << endl;
	cout << "Upper case: " << upper_case << endl;
	cout << "Digits: " << numbers << endl;


	return 0;
}
*/
/*
// 16. Pig Latin
int main() {
	string user_input;
	string ay = "AY";

	cout << "Enter a sentence.\n";
	cout << "SENTENCE: ";
	getline(cin, user_input);

	char* switch_a = nullptr;
	char* switch_b = nullptr;

	char letter_swap;
	bool complete = false;

	for (int i = 0; i < user_input.size(); i++) {
		if (complete == true) {
			break;
		}

		if (isalpha(user_input[i])) {
			switch_a = &user_input[i];

			for (int j = i; j < user_input.size(); j++) {
				if (user_input[j] == ' ' || user_input[j] == '.' || user_input[j] == '!' || user_input[j] == '?' || user_input[j] == ':' || user_input[j] == ';') {
					switch_b = &user_input[j - 1];
					user_input[j] = *switch_a;
					user_input.insert((j + 1), 1, ' ');
					user_input.erase(i, 1);


					i = j;
					break;
				}
				if (j == user_input.size() - 1) {
					if (isalpha(user_input[j])) {
						user_input.append(1, ' ');
						user_input[j + 1] = *switch_a;
						user_input.erase(i, 1);
						complete = true;
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < user_input.size(); i++) {
		if (user_input[i] == ' ' || user_input[i] == '.' || user_input[i] == '!' || user_input[i] == '?' || user_input[i] == ':' || user_input[i] == ';') {
			if (isalpha(user_input[i - 1])) {
				user_input.insert(i, ay);
				i = i + 2;
			}
		}
		if (i == user_input.size() - 1) {
			if (isalpha(user_input[i])) {
				user_input.append(ay);
				break;
			}
		}
	}
	cout << user_input << endl;
	return 0;

}
*/

/*
// 17. Morse Code Converter

int main() {
	char ch_input;

	string user_input;
	cout << "ENTER A SENTENCE: ";
	getline(cin, user_input);

	for (int i = 0; i < user_input.size(); i++) {
		if (isalpha(user_input[i])) {
			ch_input = tolower(user_input[i]);
		}
		else {
			ch_input = user_input[i];
		}

		switch (ch_input) {
		case 'a':
			cout << ".- ";
			break;
		case 'b':
			cout << "-... ";

			break;
		case 'c':
			cout << "-.-. ";

			break;
		case 'd':
			cout << "-.. ";

			break;
		case 'e':
			cout << ". ";

			break;
		case 'f':
			cout << "..-. ";

			break;
		case 'g':
			cout << "--. ";

			break;
		case 'h':
			cout << ".... ";

			break;
		case 'i':
			cout << ".. ";

			break;
		case 'j':
			cout << ".--- ";

			break;
		case 'k':
			cout << "-.- ";

			break;
		case 'l':
			cout << ".-.. ";

			break;
		case 'm':
			cout << "-- ";

			break;
		case 'n':
			cout << "-. ";

			break;
		case 'o':
			cout << "--- ";

			break;
		case 'p':
			cout << ".--. ";

			break;
		case 'q':
			cout << "--.- ";

			break;
		case 'r':
			cout << ".-. ";

			break;
		case 's':
			cout << "... ";

			break;
		case 't':
			cout << "- ";

			break;
		case 'u':
			cout << ".-- ";

			break;
		case 'v':
			cout << "...- ";

			break;
		case 'w':
			cout << ".-- ";

			break;
		case 'x':
			cout << "-..- ";

			break;
		case 'y':
			cout << "-.-- ";

			break;
		case 'z':
			cout << "--.. ";

			break;
		case '1':
			cout << ".---- ";

			break;
		case '2':

			cout << "..--- ";
			break;
		case '3':
			cout << "...-- ";

			break;
		case '4':
			cout << ".....- ";

			break;
		case '5':
			cout << "..... ";

			break;
		case '6':
			cout << "-.... ";

			break;
		case '7':
			cout << "--... ";

			break;
		case '8':
			cout << "---.. ";

			break;
		case '9':
			cout << "----. ";

			break;
		case '0':
			cout << "-----";

			break;
		case ' ':
			cout << " ";

			break;
		case ',':
			cout << "--..--";

			break;
		case '.':
			cout << ".-.-.-";

			break;
		case '?':
			cout << "..--..";

			break;
		default:
			cout << "ERROR" << endl;

			break;
		}
	}
	return 0;
}
*/
/*
// 18. Phone Number List

int main() {
	const int SIZE = 11;
	string my_array[SIZE] = { "Alejandra Cruz, 555-1223",
								"Joe Looney, 555-0097",
								"Geri Palmer, 555-8787",
								"Li Chen, 555-1212",
								"Holly Gaddis, 555-8878",
								"Sam Wiggins, 555-0998",
								"Bob Kain, 555-8712",
								"Tim Haynes, 555-7676",
								"Warren Gaddis, 555-9037",
								"Jean James, 555-4939",
								"Ron Palmer, 555-2783" };

	vector<int> index_match;

	string user_input;
	string name_number;

	int position_true;

	cout << "Enter a name or partial name on the list.\n";
	cout << "ENTER: ";
	getline(cin, user_input);

	for (int i = 0; i < SIZE; i++) {
		name_number = my_array[i];
		position_true = name_number.find(user_input, 0);
		if (position_true != -1) {
			cout << my_array[i] << endl;
		}
	}

	return 0;
}
*/

/*
// 19. Check Writer
string tensAndFirstPlace(int);

string centsRemoveZero(float);

string singleDigit(int);
int main() {

	string date, payee_name, str_amount, decimal_position;

	string completed_amount;

	string thousand, hundred, tens_and_first, cents;

	float amount, num_cents;

	int decimal_place;

	int num_thousand, num_hundred, num_tens_and_first;

	cout << "Please Enter The Following Check Information.\n";
	cout << "ENTER DATE (mm/dd/yyyy): ";
	getline(cin, date);
	cout << "ENTER PAYEE'S NAME: ";
	getline(cin, payee_name);
	do {
		cout << "ENTER AMOUNT (MAX $10000): $";
		cin >> amount;
		if (amount > 10000 || amount <= 0) {
			cout << "ERROR: Please enter a positive value less than or equal to $10000.\n";
		}
	} while (amount > 10000 || amount <= 0);


	if (amount >= 1000) { //For amounts between (1000 - 10,000)
		
		num_thousand = amount / 1000; //will truncate to give the thousand amount
		num_hundred = (amount / 100) - (num_thousand * 10);
		num_tens_and_first = amount - (num_thousand * 1000) - (num_hundred * 100);
		num_cents = (amount * 100) - ((static_cast<int>(amount)) * 100);
		cout << num_cents;


		thousand = singleDigit(num_thousand);
		hundred = singleDigit(num_hundred);
		tens_and_first = tensAndFirstPlace(num_tens_and_first);
		cents = centsRemoveZero(num_cents);

		completed_amount = thousand + " Thousand ";
		if (hundred != "-1") {
			completed_amount += hundred + " Hundred ";
		}
		if (tens_and_first != "-1") {
			completed_amount += tens_and_first;

		}

		completed_amount += " Dollar(s) And " + cents + " Cent(s)";
		
	}
	else if (amount < 1000 && amount >= 100){ // For amounts between (999 - 100)
		num_hundred = (amount / 100);
		num_tens_and_first = amount - (num_hundred * 100);
		num_cents = (amount * 100) - ((static_cast<int>(amount)) * 100);

		hundred = singleDigit(num_hundred);
		tens_and_first = tensAndFirstPlace(num_tens_and_first);
		cents = centsRemoveZero(num_cents);

		completed_amount = hundred + " Hundred ";
		if (tens_and_first != "-1") {
			completed_amount += tens_and_first;

		}
		completed_amount += " Dollar(s) And " + cents + " Cent(s)";

	}
	else if (amount < 100 && amount >= 1 ){ //For amounts between (99 - 1)
		num_tens_and_first = amount;
		num_cents = (amount * 100) - ((static_cast<int>(amount)) * 100);

		tens_and_first = tensAndFirstPlace(num_tens_and_first);
		cents = centsRemoveZero(num_cents);

		completed_amount = tens_and_first;
		completed_amount += " Dollar(s) And " + cents + " Cent(s)";

	}
	else if (amount < 1) {
		num_cents = (amount * 100) - ((static_cast<int>(amount)) * 100);
		cents = centsRemoveZero(num_cents);

		completed_amount = cents + " Cent(s)";
	}

	int width = 55;
	string print_payee_name = "Pay to the Order of: " + payee_name;

	cout << endl;
	cout << setw(width) << right << "" <<"Date: " << date << endl;
	cout << endl;
	cout << setw(width) << left << print_payee_name << "$";
	cout << showpoint << fixed  << setprecision(2) << amount << endl;
	cout << endl;
	cout << completed_amount;



	return 0;
}

string tensAndFirstPlace(int num_tens_and_first) {
	string tens;
	string appending_str;
	int appending_num;
	int tens_and_first_amount;
	//cout << tens_amount << endl;

	if (num_tens_and_first < 20) {
		switch (num_tens_and_first) {
		case 0:
			tens = "-1";
			break;
		case 1:
			tens = "One";
				break;
		case 2:
			tens = "Two";
			break;
		case 3:
			tens = "Three";
			break;
		case 4:
			tens = "Four";
			break;
		case 5:
			tens = "Five";
			break;
		case 6:
			tens = "Six";
			break;
		case 7:
			tens = "Seven";
			break;
		case 8:
			tens = "Eight";
			break;
		case 9:
			tens = "Nine";
			break;
		case 10:
			tens = "Ten";
			break;
		case 11:
			tens = "Eleven";
			break;
		case 12:
			tens = "Twelve";
			break;
		case 13:
			tens = "Thirteen";
			break;
		case 14:
			tens = "Fourteen";
			break;
		case 15:
			tens = "Fifteen";
			break;
		case 16:
			tens = "Sixteen";
			break;
		case 17:
			tens = "Seventeen";
			break;
		case 18:
			tens = "Eighteen";
			break;
		case 19:
			tens = "Nineteen";
			break;
		default:
			cout << "ERROR: tensAndFirstPlace Function.\n";
			break;
		}
	}
	else {
		if (num_tens_and_first <= 99 && num_tens_and_first >= 90) {
			tens = "Ninety";
			if (num_tens_and_first != 90) {
				appending_num = num_tens_and_first - 90;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 90 && num_tens_and_first >= 80) {
			tens = "Eighty";
			if (num_tens_and_first != 80) {
				appending_num = num_tens_and_first - 80;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 80 && num_tens_and_first >= 70) {
			tens = "Seventy";
			if (num_tens_and_first != 70) {
				appending_num = num_tens_and_first - 70;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 70 && num_tens_and_first >= 60) {
			tens = "Sixty";
			if (num_tens_and_first != 60) {
				appending_num = num_tens_and_first - 60;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 60 && num_tens_and_first >= 50) {
			tens = "Fifty";
			if (num_tens_and_first != 50) {
				appending_num = num_tens_and_first - 50;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 50 && num_tens_and_first >= 40) {
			tens = "Fourty";
			if (num_tens_and_first != 40) {
				appending_num = num_tens_and_first - 40;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 40 && num_tens_and_first >= 30) {
			tens = "Thirty";
			if (num_tens_and_first != 30) {
				appending_num = num_tens_and_first - 30;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 30 && num_tens_and_first >= 20) {
			tens = "Twenty";
			if (num_tens_and_first != 20) {
				appending_num = num_tens_and_first - 20;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
	}

	return tens;
}


string singleDigit(int number) {
	string num_return;
	switch (number) {
	case 0:
		num_return = "-1";
		break;
	case 1:
		num_return = "One";
		break;
	case 2:
		num_return = "Two";
		break;
	case 3:
		num_return = "Three";
		break;
	case 4:
		num_return = "Four";
		break;
	case 5:
		num_return = "Five";
		break;
	case 6:
		num_return = "Six";
		break;
	case 7:
		num_return = "Seven";
		break;
	case 8:
		num_return = "Eight";
		break;
	case 9:
		num_return = "Nine";
		break;
	case 10:
		num_return = "Ten";
		break;
	case 12:
		num_return = "Twelve";
		break;
	case 13:
		num_return = "Thirteen";
		break;
	case 14:
		num_return = "Fourteen";
		break;
	case 15:
		num_return = "Fifteen";
		break;
	case 16:
		num_return = "Sixteen";
		break;
	case 17:
		num_return = "Seventeen";
		break;
	case 18:
		num_return = "Eighteen";
		break;
	case 19:
		num_return = "Nineteen";
		break;
	default:
		cout << "ERROR: singleDigits Function.\n";
	}

	return num_return;

}
string centsRemoveZero(float num_cents) {

	string amount_string = to_string(num_cents);
	cout << amount_string;
	if (amount_string[1] == '.') {
		amount_string = amount_string[0];
	}
	else {
		amount_string = amount_string.substr(0, 2);
	}
	

	return amount_string;
}
*/