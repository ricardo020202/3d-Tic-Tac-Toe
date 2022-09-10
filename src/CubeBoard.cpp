#include"CubeBoard.h"

CubeBoard::CubeBoard(){
	
}

CubeBoard::CubeBoard(Board _board1, Board _board2, Board _board3){
	board1 = _board1;
	board2 = _board2;
	board3 = _board3;
}

void CubeBoard::setBoard1(Board _board1){
	board1 = _board1;
}

void CubeBoard::setBoard2(Board _board2){
	board2 = _board2;
}

void CubeBoard::setBoard3(Board _board3){
	board3 = _board3;
}

Board CubeBoard::getBoard1(){
	return board1;
}

Board CubeBoard::getBoard2(){
	return board2;
}

Board CubeBoard::getBoard3(){
	return board3;
}

void CubeBoard::ShowBoards(){
	cout<<"Board 0"<<endl;
	board1.showBoard();
	cout<<"Board 1"<<endl;
	board2.showBoard();
	cout<<"Board 2"<<endl;
	board3.showBoard();
}

void CubeBoard::selectBoard(int nBoard, char sym){
	if(nBoard >= 0 and nBoard <= 2){
		if(nBoard == 0){
			board1.choose(sym);
			ShowBoards();
		}else if(nBoard == 1){
			board2.choose(sym);
			ShowBoards();
		}else if(nBoard == 2){
			board3.choose(sym);
			ShowBoards();
		}
	}else if(nBoard < 0 or nBoard > 2){
		int nB;
		cout<<"Insert a valid Board: ";cin>>nB;
		while(nB < 0 or nB > 2){
			cout<<"Insert a valid Board: ";cin>>nB;
			if(nB == 0){
				board1.choose(sym);
				ShowBoards();
			}else if(nB == 1){
				board2.choose(sym);
				ShowBoards();
			}else if(nB == 2){
				board3.choose(sym);
				ShowBoards();
			}
		}
	}
}

bool CubeBoard::winner(string n1, string n2, char sym1, char sym2){
	//Bord1
	if((board1.getArrElem(0,0) == 'X' and board1.getArrElem(0,1) == 'X' and board1.getArrElem(0,2) == 'X') or (board1.getArrElem(1,0) == 'X' and board1.getArrElem(1,1) == 'X' and board1.getArrElem(1,2) == 'X') or (board1.getArrElem(2,0) == 'X' and board1.getArrElem(2,1) == 'X' and board1.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
		else if((board1.getArrElem(0,0) == 'X' and board1.getArrElem(1,0) == 'X' and board1.getArrElem(2,0) == 'X') or (board1.getArrElem(0,1) == 'X' and board1.getArrElem(1,1) == 'X' and board1.getArrElem(2,1) == 'X') or (board1.getArrElem(0,2) == 'X' and board1.getArrElem(1,2) == 'X' and board1.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'X' and board1.getArrElem(1,1) == 'X' and board1.getArrElem(2,2) == 'X') or (board1.getArrElem(0,2) == 'X' and board1.getArrElem(1,1) == 'X' and board1.getArrElem(2,0) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'O' and board1.getArrElem(0,1) == 'O' and board1.getArrElem(0,2) == 'O') or (board1.getArrElem(1,0) == 'O' and board1.getArrElem(1,1) == 'O' and board1.getArrElem(1,2) == 'O') or (board1.getArrElem(2,0) == 'O' and board1.getArrElem(2,1) == 'O' and board1.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'O' and board1.getArrElem(1,0) == 'O' and board1.getArrElem(2,0) == 'O') or (board1.getArrElem(0,1) == 'O' and board1.getArrElem(1,1) == 'O' and board1.getArrElem(2,1) == 'O') or (board1.getArrElem(0,2) == 'O' and board1.getArrElem(1,2) == 'O' and board1.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'O' and board1.getArrElem(1,1) == 'O' and board1.getArrElem(2,2) == 'O') or (board1.getArrElem(0,2) == 'O' and board1.getArrElem(1,1) == 'O' and board1.getArrElem(2,0) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	//board2
	else if((board2.getArrElem(0,0) == 'X' and board2.getArrElem(0,1) == 'X' and board2.getArrElem(0,2) == 'X') or (board2.getArrElem(1,0) == 'X' and board2.getArrElem(1,1) == 'X' and board2.getArrElem(1,2) == 'X') or (board2.getArrElem(2,0) == 'X' and board2.getArrElem(2,1) == 'X' and board2.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board2.getArrElem(0,0) == 'X' and board2.getArrElem(1,0) == 'X' and board2.getArrElem(2,0) == 'X') or (board2.getArrElem(0,1) == 'X' and board2.getArrElem(1,1) == 'X' and board2.getArrElem(2,1) == 'X') or (board2.getArrElem(0,2) == 'X' and board2.getArrElem(1,2) == 'X' and board2.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board2.getArrElem(0,0) == 'X' and board2.getArrElem(1,1) == 'X' and board2.getArrElem(2,2) == 'X') or (board2.getArrElem(0,2) == 'X' and board2.getArrElem(1,1) == 'X' and board2.getArrElem(2,0) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board2.getArrElem(0,0) == 'O' and board2.getArrElem(0,1) == 'O' and board2.getArrElem(0,2) == 'O') or (board2.getArrElem(1,0) == 'O' and board2.getArrElem(1,1) == 'O' and board2.getArrElem(1,2) == 'O') or (board2.getArrElem(2,0) == 'O' and board2.getArrElem(2,1) == 'O' and board2.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board2.getArrElem(0,0) == 'O' and board2.getArrElem(1,0) == 'O' and board2.getArrElem(2,0) == 'O') or (board2.getArrElem(0,1) == 'O' and board2.getArrElem(1,1) == 'O' and board2.getArrElem(2,1) == 'O') or (board2.getArrElem(0,2) == 'O' and board2.getArrElem(1,2) == 'O' and board2.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board2.getArrElem(0,0) == 'O' and board2.getArrElem(1,1) == 'O' and board2.getArrElem(2,2) == 'O') or (board2.getArrElem(0,2) == 'O' and board2.getArrElem(1,1) == 'O' and board2.getArrElem(2,0) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	//board3
	else if((board3.getArrElem(0,0) == 'X' and board3.getArrElem(0,1) == 'X' and board3.getArrElem(0,2) == 'X') or (board3.getArrElem(1,0) == 'X' and board3.getArrElem(1,1) == 'X' and board3.getArrElem(1,2) == 'X') or (board3.getArrElem(2,0) == 'X' and board3.getArrElem(2,1) == 'X' and board3.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board3.getArrElem(0,0) == 'X' and board3.getArrElem(1,0) == 'X' and board3.getArrElem(2,0) == 'X') or (board3.getArrElem(0,1) == 'X' and board3.getArrElem(1,1) == 'X' and board3.getArrElem(2,1) == 'X') or (board3.getArrElem(0,2) == 'X' and board3.getArrElem(1,2) == 'X' and board3.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board3.getArrElem(0,0) == 'X' and board3.getArrElem(1,1) == 'X' and board3.getArrElem(2,2) == 'X') or (board3.getArrElem(0,2) == 'X' and board3.getArrElem(1,1) == 'X' and board3.getArrElem(2,0) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board3.getArrElem(0,0) == 'O' and board3.getArrElem(0,1) == 'O' and board3.getArrElem(0,2) == 'O') or (board3.getArrElem(1,0) == 'O' and board3.getArrElem(1,1) == 'O' and board3.getArrElem(1,2) == 'O') or (board3.getArrElem(2,0) == 'O' and board3.getArrElem(2,1) == 'O' and board3.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board3.getArrElem(0,0) == 'O' and board3.getArrElem(1,0) == 'O' and board3.getArrElem(2,0) == 'O') or (board3.getArrElem(0,1) == 'O' and board3.getArrElem(1,1) == 'O' and board3.getArrElem(2,1) == 'O') or (board3.getArrElem(0,2) == 'O' and board3.getArrElem(1,2) == 'O' and board3.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board3.getArrElem(0,0) == 'O' and board3.getArrElem(1,1) == 'O' and board3.getArrElem(2,2) == 'O') or (board3.getArrElem(0,2) == 'O' and board3.getArrElem(1,1) == 'O' and board3.getArrElem(2,0) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	//Line up across boards
	else if((board1.getArrElem(0,0) == 'X' and board2.getArrElem(0,0) == 'X' and board3.getArrElem(0,0) == 'X') or (board1.getArrElem(0,1) == 'X' and board2.getArrElem(0,1) == 'X' and board3.getArrElem(0,1) == 'X') or (board1.getArrElem(0,2) == 'X' and board2.getArrElem(0,2) == 'X' and board3.getArrElem(0,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(1,0) == 'X' and board2.getArrElem(1,0) == 'X' and board3.getArrElem(1,0) == 'X') or (board1.getArrElem(1,1) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(1,1) == 'X') or (board1.getArrElem(1,2) == 'X' and board2.getArrElem(1,2) == 'X' and board3.getArrElem(1,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(2,0) == 'X' and board2.getArrElem(2,0) == 'X' and board3.getArrElem(2,0) == 'X') or (board1.getArrElem(2,1) == 'X' and board2.getArrElem(2,1) == 'X' and board3.getArrElem(2,1) == 'X') or (board1.getArrElem(2,2) == 'X' and board2.getArrElem(2,2) == 'X' and board3.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'O' and board2.getArrElem(0,0) == 'O' and board3.getArrElem(0,0) == 'O') or (board1.getArrElem(0,1) == 'O' and board2.getArrElem(0,1) == 'O' and board3.getArrElem(0,1) == 'O') or (board1.getArrElem(0,2) == 'O' and board2.getArrElem(0,2) == 'O' and board3.getArrElem(0,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(1,0) == 'O' and board2.getArrElem(1,0) == 'O' and board3.getArrElem(1,0) == 'O') or (board1.getArrElem(1,1) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(1,1) == 'O') or (board1.getArrElem(1,2) == 'O' and board2.getArrElem(1,2) == 'O' and board3.getArrElem(1,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(2,0) == 'O' and board2.getArrElem(2,0) == 'O' and board3.getArrElem(2,0) == 'O') or (board1.getArrElem(2,1) == 'O' and board2.getArrElem(2,1) == 'O' and board3.getArrElem(2,1) == 'O') or (board1.getArrElem(2,2) == 'O' and board2.getArrElem(2,2) == 'O' and board3.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	//line across boards
	else if((board1.getArrElem(0,0) == 'X' and board2.getArrElem(0,1) == 'X' and board3.getArrElem(0,2) == 'X') or (board1.getArrElem(1,0) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(1,2) == 'X') or (board1.getArrElem(2,0) == 'X' and board2.getArrElem(2,1) == 'X' and board3.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'X' and board2.getArrElem(1,0) == 'X' and board3.getArrElem(2,0) == 'X') or (board1.getArrElem(0,1) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(2,1) == 'X') or (board1.getArrElem(0,2) == 'X' and board2.getArrElem(1,2) == 'X' and board3.getArrElem(2,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,2) == 'X' and board2.getArrElem(0,1) == 'X' and board3.getArrElem(0,0) == 'X') or (board1.getArrElem(1,2) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(1,0) == 'X') or (board1.getArrElem(2,2) == 'X' and board2.getArrElem(2,1) == 'X' and board3.getArrElem(2,0) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(2,0) == 'X' and board2.getArrElem(1,0) == 'X' and board3.getArrElem(0,0) == 'X') or (board1.getArrElem(2,1) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(0,1) == 'X') or (board1.getArrElem(2,2) == 'X' and board2.getArrElem(1,2) == 'X' and board3.getArrElem(0,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'O' and board2.getArrElem(0,1) == 'O' and board3.getArrElem(0,2) == 'O') or (board1.getArrElem(1,0) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(1,2) == 'O') or (board1.getArrElem(2,0) == 'O' and board2.getArrElem(2,1) == 'O' and board3.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'O' and board2.getArrElem(1,0) == 'O' and board3.getArrElem(2,0) == 'O') or (board1.getArrElem(0,1) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(2,1) == 'O') or (board1.getArrElem(0,2) == 'O' and board2.getArrElem(1,2) == 'O' and board3.getArrElem(2,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,2) == 'O' and board2.getArrElem(0,1) == 'O' and board3.getArrElem(0,0) == 'O') or (board1.getArrElem(1,2) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(1,0) == 'O') or (board1.getArrElem(2,2) == 'O' and board2.getArrElem(2,1) == 'O' and board3.getArrElem(2,0) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(2,0) == 'O' and board2.getArrElem(1,0) == 'O' and board3.getArrElem(0,0) == 'O') or (board1.getArrElem(2,1) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(0,1) == 'O') or (board1.getArrElem(2,2) == 'O' and board2.getArrElem(1,2) == 'O' and board3.getArrElem(0,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	//Diagonals across boards
	else if((board1.getArrElem(0,0) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(2,2) == 'X') or (board1.getArrElem(0,2) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(2,0) == 'X') or (board1.getArrElem(2,2) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(0,0) == 'X') or (board1.getArrElem(2,0) == 'X' and board2.getArrElem(1,1) == 'X' and board3.getArrElem(0,2) == 'X')){
		if(sym1 == 'X'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else if((board1.getArrElem(0,0) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(2,2) == 'O') or (board1.getArrElem(0,2) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(2,0) == 'O') or (board1.getArrElem(2,2) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(0,0) == 'O') or (board1.getArrElem(2,0) == 'O' and board2.getArrElem(1,1) == 'O' and board3.getArrElem(0,2) == 'O')){
		if(sym1 == 'O'){
			cout<<"Player "<<n1<<" wins"<<endl;
		}else{
			cout<<"Player "<<n2<<" wins"<<endl;
		}
		return true;
	}
	else{
		return false;
	}
}
