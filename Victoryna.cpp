#include <iostream>
#include <Windows.h>
#define clear system("cls")
#define freezer Sleep(1500)
using namespace std;
int main();
void startGame();
int points;
int choise;
int hard;
string a = "Impossible";
int corAns(int chill, int corAns, int points) {
	if (corAns == chill) { return ++points; }
	else { if (points <= 0) { return points; } return --points; }
}
int lifeEdits(int chill, int lifeEdits, int heartEncore) {
	if (chill == lifeEdits) { return heartEncore; }
	else { --heartEncore; if (heartEncore == 0) { clear; cout << "\n<~> You dead <~>\n"; exit(0); } }
}
void startGame() {
	int chill = 0;
	int points = 0;
	int fifty = 10;
	setlocale(0, "");
    a:
	clear;
	cout << "Question #1 | 9 - 3? \t\t " << " Your hints: " << fifty << " \tPress [5] to use 50 | 50\n";
	cout << "[1] 18  [2] 6  [3] 4  [4] 2 \n";
	cout << "[+] Select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0) {
		fifty--;
		cout << "Question #1 | 9 - 3? \t\t" << "Your hints:" << fifty << "\n";
		cout << "[1]  [2] 6  [3]  [4] 2 \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto a;
	}
	points = corAns(chill, 2, points);
    b:
	clear;
	cout << "Question #2 | 2 + 5? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\tPress [5] to use 50 | 50\n";
	cout << "[1] 7  [2] 4  [3] 1000001  [4] 5 \n";
	cout << "Choose an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question #2 | 2 + 5? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\n";
		cout << "[1] 7  [2]  [3]  [4] 5 \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto b;
	}
	points = corAns(chill, 1, points);
    c:
	clear;
	cout << "Question #3 | Current Russian President? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\tPress [5] to use 50 | 50\n";
	cout << "[1] Putin  [2] Yeltsin  [3] Abama  [4] biden \n";
	cout << "[+] Please select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question # 3 | Current Russian President? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\n";
		cout << "[1] Putin  [2]  [3]  [4] Biden \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto c;
	}
	points = corAns(chill, 1, points);
    d:
	clear;
	cout << "Question #4 | How many stars does the USA flag have? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\tPress [5] to use 50 | 50\n";
	cout << "[1] 32  [2] 51  [3] 29  [4] 77 \n";
	cout << "[+] Please select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question #4 | How many stars does the USA flag have? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\n";
		cout << "[1] 32  [2] 51  [3]  [4] \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto d;
	}
	points = corAns(chill, 2, points);
    e:
	clear;
	cout << "Question #5 | 97 - 92? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\tPress [5] to use 50 | 50\n";
	cout << "[1] 3  [2] 5  [3] 6  [4] 7 \n";
	cout << "[+] Please select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question #5 | 97 - 92? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\n";
		cout << "[1]  [2] 5  [3] 6  [4] \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto e;
	}
	points = corAns(chill, 2, points);
    f:
	clear;
	cout << "Question #6 | Meta May 21? (ML) \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << " \tPress [5] to use 50 | 50\n";
	cout << "[1] Helcart  [2] Paquito  [3] Fasha  [4] Uranus \n";
	cout << "[+] Please select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question #6 | Meta May 21? (ML) \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << " \n";
		cout << "[1]  [2] Paquito  [3]  [4] Uranus \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto f;
	}
	points = corAns(chill, 2, points);
    g:
	clear;
	cout << "Question #7 | What sword falls from the Moon Lord? (Terraria) \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\tPress [5] to use 50 | 50\n";
	cout << "[1] Meumur  [2] Zenith  [3] Final Call  [4] Lightsaber \n";
	cout << "[+] Please select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question #7 | What sword falls from the Moon Lord? (Terraria) \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\n";
		cout << "[1] Myaumur  [2]  [3] Last prism  [4] \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto g;
	}
	points = corAns(chill, 1, points);
    h:
	clear;
	cout << "Question #8 | What is the name of the rank that comes after the Mythic? (ML) \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\tPress [5] to use 50 | 50\n";
	cout << "[1] There is none  [2] Emeraldic  [3] Legendary  [4] Luminite \n";
	cout << "[+] Please select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question #8 | What comes after Mythic rank? (ML) \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\n";
		cout << "[1] There is no such thing  [2] Emerald's  [3]  [4] \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto h;
	}
	points = corAns(chill, 1, points);
    i:
	clear;
	cout << "Question #9 | 1000 - 7? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\tPress [5] to use 50 | 50\n";
	cout << "[1] 1007  [2] 994  [3] 993  [4] 992 \n";
	cout << "[+] Please select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question #9 | In what year was Russia baptized? \t\t" << "Your glasses:" << points << "\t" << "Your tips:" << fifty << "\n";
		cout << "[1]  [2] 994  [3] 993  [4] \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto i;
	}
	points = corAns(chill, 3, points);
    j:
	clear;
	cout << "Question #10 | What is Fovius's grade? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\tPress [5] to use 50 | 50\n";
	cout << "[1] Mage  [2] Assassin  [3] Fighter  [4] Tank \n";
	cout << "[+] Please select an answer:";
	cin >> chill;
	clear;
	if (chill == 5 && fifty > 0)
	{
		fifty--;
		cout << "Question #10 | What is Fovius's class? \t\t" << "Your points:" << points << "\t" << "Your tips:" << fifty << "\n";
		cout << "[1]  [2] Assassin  [3] Fighter  [4] \n";
		cout << "[+] Select an answer:";
		cin >> chill;
	}
	else if (fifty <= 0 && chill == 5) {
		cout << "No tips";
		Sleep(2000);
		clear;
		goto j;
	}
    bmw:
	points = corAns(chill, 3, points);
	clear;
	cout << "Your total points: " << points;
	cout << " \n Go back [1] ";
	cin >> chill;
	if (chill == 1) { main(); } 
	else { clear; goto bmw; }
	clear;
}
void rulseEdits() {
	clear;
	cout << "<~> Game rules <~>\n\n[1] You have 10 attempts for all questions.\n[2] You can use the 50/50 hint.\n[3] By answering all questions without errors, you will become a guru of the world!\n\n";
	cout << "<~> Creator of the quiz <~> Kovach Artyom 3ISP9-9VB <~>\n";
	cout << "\n[~] Go back[1]: ";
	int back;
	cin >> back;
	if (back == 1) {
		clear;
		main();
	}
	else {
		clear;
		cout << "Wrong answer selected";
		freezer;
		clear;
		rulseEdits();
	}
}
int main() {
	int chill = 0;
	clear;
	cout << "~ Voctorina edit`s ~";
	if (hard == 1) {
		cout << "\t\tLevel difficulty:" << a << endl;
	}
	else {
		cout << "\t\tLevel difficulty:" << endl;
	}
	cout << endl;
	cout << "[1] Start\n";
	cout << "[2] Options\n";
	cout << "[3] Rules\n";
	cout << "[0] Exit\n\n";
	cout << "[+] Choose: ";
	int menu;
	cin >> menu;

	if (menu == 1 && hard == 1) {
		startGame();
	}
	else if (menu == 2) {
		isp:
		clear;
		cout << "[+] Select difficulty level\n\n";
		cout << "[1] Impossible\n\n"; //BMW TOP CAR
		cout << "[+] Choose: ";
		int smoant;
		cin >> smoant;
		if (smoant == 1) {hard = 1; clear; main(); }
		else { cout << "So no difficulty"; clear; goto isp; }
	}
	else if (menu == 3) {
		rulseEdits();
	}
}