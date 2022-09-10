#include"Board.cpp"

using namespace std;

class CubeBoard{
	private:
		Board board1;
		Board board2;
		Board board3;
		
	public:
		CubeBoard();
		CubeBoard(Board, Board, Board);
		
		void setBoard1(Board);
		void setBoard2(Board);
		void setBoard3(Board);
		
		Board getBoard1();
		Board getBoard2();
		Board getBoard3();
		
		void ShowBoards();
		
		void selectBoard(int, char);
		
		bool winner(string, string, char, char);
};
