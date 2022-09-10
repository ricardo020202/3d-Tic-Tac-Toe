#include"Player.h"

Player::Player(){
	symbol = ' ';
	name = " ";
}

Player::Player(char _symbol, string _name){
	symbol = _symbol;
	name = _name;
}

void Player::setSymbol(char _symbol){
	if(_symbol != 'X' and _symbol != 'O'){
		char sym;
		cout<<"Insert a valid symbol (X/O): ";cin>>sym;
		while(sym != 'X' and sym != 'O'){
			cout<<"Insert a valid symbol (X/O): ";cin>>sym;
		}
		symbol = sym;
	}else{
		symbol = _symbol;	
	}
}

void Player::setName(string _name){
	name = _name;
}

char Player::getSymbol(){
	return symbol;
}

string Player::getName(){
	return name;
}


