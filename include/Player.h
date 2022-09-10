#include<iostream>
#include<string>

using namespace std;

class Player{
	private:
		char symbol;
		string name;
		
	public:
		Player();
		Player(char, string);
		
		void setSymbol(char);
		void setName(string);
		
		char getSymbol();
		string getName();
		
};
