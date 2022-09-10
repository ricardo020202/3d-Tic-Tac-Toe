#include "Board.h"

Board::Board(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = '-';
		}
	} 
}

char Board::getArrElem(int r, int c){
	return board[r][c];
}

void Board::showBoard(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout<<" "<<board[i][j];
		}
		cout<<endl;
	} 
	cout<<endl;
}

void Board::choose(char sym){
	int r, c;
	
	cout<<"Choose a row: (0-2): ";cin>>r;
	if(r < 0 or r > 2){
		while(r < 0 or r > 2){
			cout<<"Choose a valid row: (0-2): ";cin>>r;
		}
	}
	cout<<"Choose a col (0-2): ";cin>>c;
	if(c < 0 or c > 2){
		while(c < 0 or c > 2){
			cout<<"Choose a valid col (0-2): ";cin>>c;
		}
	}
	cout<<endl;
	
	if(board[r][c] != '-'){
		cout<<"Please Select another cell"<<endl;
		while(board[r][c] != '-'){
			cout<<"Choose a row: (0-2): ";cin>>r;
			if(r < 0 or r > 2){
				while(r < 0 or r > 2){
					cout<<"Choose a valid row: (0-2): ";cin>>r;
				}
			}
			cout<<"Choose a col (0-2): ";cin>>c;
			if(r < 0 or r > 2){
				while(r < 0 or r > 2){
					cout<<"Choose a valid row: (0-2): ";cin>>r;
				}
			}
			cout<<endl;
		}
		board[r][c] = sym;
	}else{
		board[r][c] = sym;
	}	
}
