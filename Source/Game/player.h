#include "CGameMap.h"
namespace game_framework {
	class player :public CGameMap
	{
	public:
		int user_id;
		int map_user[13][15];
		int speed;
		int status;
		bool isAlive;
		int explosionRange;

		player();
		int  GetX1();
		int  GetY1();
		int  GetX2();
		int  GetY2();
		int getStatus();
		int getId();
		
		void setid(int id);
		void setP1Status(int s);
		void setP2Status(int s);
		void SetMovingDown(bool flag);
		void SetMovingLeft(bool flag);
		void SetMovingRight(bool flag);
		void SetMovingUp(bool flag);
		void SetSpeed(int);
		void SetMap(int map[13][15]);
		void SetXY(int nx, int ny);
		void Initialize(int who);
		
		void LoadBitmap();
		void OnMove();
		void OnShow();

		
		
		
		
		

	protected:
		CMovingBitmap P1_down, P1_up, P1_left, P1_right, p1die1, p1die2;
		CMovingBitmap P2_down, P2_up, P2_left, P2_right, p2die1, p2die2;
		int x, y, mode;	
		bool isMovingDown;
		bool isMovingLeft;
		bool isMovingRight;	
		bool isMovingUp;		

	};
}