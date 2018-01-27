/*D&D Characther Sheet Generator
V0.1
Chris Higgins*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Base Stuff
	string CharName;
	cout << "Input Character Name: ";
	cin >> CharName;
	cout << "Character Name is " << CharName;
	cout << endl;
		
	int Level;
	cout << "Input Character Level: ";
	cin >> Level;
	cout << "Character Level is " << Level;
	cout << endl;

	string Class;
	cout << "Input Character Class: ";
	cin >> Class;
	cout << "Character is a " << Class;
	cout << endl;

	string Race;
	cout << "Input Character Race: ";
	cin >> Race;
	cout << "Character is a " << Race;
	cout << endl;

	string Alignment;
	cout << "Input Character Alignment: ";
	cin >> Alignment;
	cout << "Character is " << Alignment;
	cout << endl;

	//Stats
	int Strength;
	cout << "Input Character Strength: ";
	cin >> Strength;
	cout << "Strength is " << Strength;
	cout << endl;

	int Dexterity;
	cout << "Input Character Dexterity: ";
	cin >> Dexterity;
	cout << "Dexterity is " << Dexterity;
	cout << endl;

	int Constitution;
	cout << "Input Character Constitution: ";
	cin >> Constitution;
	cout << "Constitution is " << Constitution;
	cout << endl;

	int Intelligence;
	cout << "Input Character Intelligence: ";
	cin >> Intelligence;
	cout << "Intelligence is " << Intelligence;
	cout << endl;
	
	int Wisdom;
	cout << "Input Character Wisdom: ";
	cin >> Wisdom;
	cout << "Wisdom is " << Wisdom;
	cout << endl;

	int Charisma;
	cout << "Input Character Charisma: ";
	cin >> Charisma;
	cout << "Charisma is " << Charisma;
	cout << endl;

	int ProfiencyBonus;
	cout << "Input Character Proficiency Bonus: ";
	cin >> ProfiencyBonus;
	cout << "Profiency Bonus is " << ProfiencyBonus;
	cout << endl;
		
	return 0;


}