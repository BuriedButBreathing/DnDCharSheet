/*D&D Characther Sheet Generator
V0.1
Chris Higgins*/
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <random>

using namespace std;

int main(){
	//Random Number Seed
	random_device rd;  //obtain a random number from hardware
	mt19937 eng(rd()); //seed the generator
	uniform_int_distribution<> distr(3, 18); // define the range

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
		for(int Strength=0; Strength<40; ++Strength)
				cout << distr(eng) << ' '; //generate numbers

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

	//Skills
		int Acrobatics;
		int AnimalHandling;
		int Arcana;
		int Deception;
		int History;
		int Insight;
		int Intimidation;
		int Investigation;
		int Medicine;
		int Nature;
		int Perception;
		int Performance;
		int Persuasion;
		int Religion;
		int SleightOfHand;
		int Stealth;
		int Survival;


	//Input Results
		cout << "Character name is " << CharName << endl;
		cout << "Level: " << Level << " " << Alignment << " " << Race << " " << Class << endl;
		cout << "Profiency Bonus: " << ProfiencyBonus << endl;
		cout << "Strength: " << Strength << endl;
		cout << "Dexterity: " << Dexterity << endl;
		cout << "Consitution: " << Constitution << endl;
		cout << "Intelligence: " << Intelligence << endl;
		cout << "Wisdom: " << Wisdom << endl;
		cout << "Charisma: " << Charisma << endl;


	return 0;


}
