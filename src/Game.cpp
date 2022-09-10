#include "Game.h"

Game::Game(){
	
}

Game::Game(Player _player1, Player _player2, CubeBoard _cb){
	player1 = _player1;
	player2 = _player2;
	cb = _cb;
}

void Game::setPlayer1(Player p1){
	player1 = p1;
}

void Game::setPlayer2(Player p2){
	player2 = p2;
}

void Game::setCb(CubeBoard _cb){
	cb = _cb;
}

Player Game::getPlayer1(){
	return player1;
}

Player Game::getPlayer2(){
	return player2;
}

CubeBoard Game::getCb(){
	return cb;
}

void Game::mainMehtod(){
	int nBoard, row, col, wins = 0, r, c;
	string name;
	char sym, _sym;
	Board board1, board2, board3;
	CubeBoard cb(board1, board2, board3);
	
	cout<<"                                                                                                                 "<<endl;
	cout<<"  ***************************************************************************************************************"<<endl;
	cout<<"  *           ____    _____      _______   _          _______                  _______                          *"<<endl;
	cout<<"  *          |___ \\  |  __ \\    |__   __| (_)        |__   __|                |__   __|                         *"<<endl;
	cout<<"  *  ______    __) | | |  | |      | |     _    ___     | |      __ _    ___     | |      ___     ___   ______  *"<<endl;
	cout<<"  * |______|  |__ <  | |  | |      | |    | |  / __|    | |     / _` |  / __|    | |     / _ \\   / _ \\ |______| *"<<endl;
	cout<<"  *           ___) | | |__| |      | |    | | | (__     | |    | (_| | | (__     | |    | (_) | |  __/          *"<<endl;
	cout<<"  *          |____/  |_____/       |_|    |_|  \\___|    |_|     \\__,_|  \\___|    |_|     \\___/   \\___|          *"<<endl;
	cout<<"  *                                                                                                             *"<<endl;
	cout<<"  ***************************************************************************************************************"<<endl;
	cout<<endl;
	
	cout<<"Insert player one name: ";cin>>name;
	player1.setName(name);
	cout<<"Player one symbol (X/O): ";cin>>sym;
	player1.setSymbol(sym);
	cout<<endl;
	
	if(player1.getSymbol() == 'X'){
		player2.setSymbol('O');
	}
	else if(player1.getSymbol() == 'O'){
		player2.setSymbol('X');
	}
	
	cout<<"Insert player two name: ";cin>>name;
	cout<<"Player 2 will get the other symbol"<<endl;
	player2.setName(name);
	cout<<endl;
	
	cb.ShowBoards();

	if(player1.getSymbol() == 'O'){
		while(wins == 0){
			cout<<"Player "<<player1.getName()<<" "<<player1.getSymbol()<<" turn:"<<endl;
			cout<<"Choose a board (0-2): ";cin>>nBoard;
			
			cb.selectBoard(nBoard, 'O');
			if(cb.winner(player1.getName(), player2.getName(), player1.getSymbol(), player2.getSymbol()) == true){
				break;
			}
			
			cout<<"Player "<<player2.getName()<<" "<<player2.getSymbol()<<" turn:"<<endl;
			cout<<"Choose a board (0-2): ";cin>>nBoard;
			
			cb.selectBoard(nBoard, 'X');	
			if(cb.winner(player1.getName(), player2.getName(), player1.getSymbol(), player2.getSymbol()) == true){
				break;
			}
		}
	}else if(player2.getSymbol() == 'O'){
		while(wins == 0){
			cout<<"Player "<<player2.getName()<<" "<<player2.getSymbol()<<" turn:"<<endl;
			cout<<"Choose a board (0-2): ";cin>>nBoard;
			
			cb.selectBoard(nBoard, 'O');
			if(cb.winner(player1.getName(), player2.getName(), player1.getSymbol(), player2.getSymbol()) == true){
				break;
			}
			
			cout<<"Player "<<player1.getName()<<" "<<player1.getSymbol()<<" turn:"<<endl;
			cout<<"Choose a board (0-2): ";cin>>nBoard;
			
			cb.selectBoard(nBoard, 'X');	
			if(cb.winner(player1.getName(), player2.getName(), player1.getSymbol(), player2.getSymbol()) == true){
				break;
			}
		}
	}
}
