#include "Player.cpp"
#include "CubeBoard.cpp"

using namespace std;

class Game{
	private:
		Player player1;
		Player player2;
		CubeBoard cb;
		
	public:
		Game();
		Game(Player, Player, CubeBoard);
		
		void setPlayer1(Player);
		void setPlayer2(Player);
		void setCb(CubeBoard);
		
		Player getPlayer1();
		Player getPlayer2();
		CubeBoard getCb();
		
		void mainMehtod();
};
