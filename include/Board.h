#include <iostream>
using namespace std;

class Board {
	private:
		char board[3][3];
		
	public:
		Board();
		
		char getArrElem(int, int);
		void showBoard();
		void choose(char);
};
