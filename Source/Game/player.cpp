#include "stdafx.h"
#include "../Core/Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "../Library/audio.h"
#include "../Library/gameutil.h"
#include "../Library/gamecore.h"
#include "player.h"
namespace game_framework 
{
    player::player()
	{
		//Initialize(0);
	}
    int player::GetX1()
	{
		//return x;
	}

	int player::GetY1()
	{
		//return x;
	}

	int player::GetX2()
	{
		//return x + 70;
	}

	int player::GetY2()
	{
		//return y + 93;
	}
    int player::getStatus()
	{
		//return status;
	}
    int player::getId()
	{
        //return user_id;
	}
    void player::setid(int id)
	{
		//user_id = id;
	}
    void player::setP1Status(int s)
	{
		//if (user_id == 1)
		//	status = s;
	}
	void player::setP2Status(int s)
	{
        //if(user_id == 2)
		//	status = s;
	}
    void player::SetMovingDown(bool flag)
	{
		//isMovingDown = flag;
	}

	void player::SetMovingLeft(bool flag)
	{
        //isMovingLeft = flag;
	}

	void player::SetMovingRight(bool flag)
	{
		//isMovingRight = flag;
	}
    void player::SetMovingUp(bool flag)
	{
		//isMovingUp = flag;
	}
    void player::SetSpeed(int inSpeed)
	{
		//speed = inSpeed;
	}
    void player::SetMap(int map[13][15])
	{
        //for (int i = 0; i < 13; i++) {
		//	for (int j = 0; j < 15; j++) {
		//		map_user[i][j] = map[i][j];
		//	}
		//}
	}
	void player::SetXY(int nx, int ny)
	{
		//x = nx; y = ny;
	}
	void player::Initialize(int who)
	{
        //setid(who);
		//int X_POS = 0;
		//int Y_POS = 0;
		//if (user_id == 2)
		//{
		//	X_POS = 967;
		//	Y_POS = 817;
		//}
		//isAlive = true;
		//explosionRange = 1;
		//speed = 10;
		//status = 5;
		//x = X_POS;
		//y = Y_POS;
		//isMovingLeft = isMovingRight = isMovingUp = isMovingDown = false;
		//mode = 0;
	}


	void player::LoadBitmap()
	{
        //P1_down.LoadBitmap("Resources/player/bmp/Player1_down.bmp", RGB(255, 255, 255));
		//P1_up.LoadBitmap("Resources/player/bmp/Player1_up.bmp", RGB(255, 255, 255));
		//P1_left.LoadBitmap("Resources/player/bmp/Player1_left.bmp", RGB(255, 255, 255));
		//P1_right.LoadBitmap("Resources/player/bmp/Player1_right.bmp", RGB(255, 255, 255));
		//p1die1.LoadBitmap("Resources/player/bmp/Player1_die1.bmp", RGB(255, 255, 255));
		//p1die2.LoadBitmap("Resources/player/bmp/Player1_die2.bmp", RGB(255, 255, 255));

		//P2_down.LoadBitmap("Resources/player/bmp/Player2_down.bmp", RGB(255, 255, 255));
		//P2_up.LoadBitmap("Resources/player/bmp/Player2_up.bmp", RGB(255, 255, 255));
		//P2_left.LoadBitmap("Resources/player/bmp/Player2_left.bmp", RGB(255, 255, 255));
		//P2_right.LoadBitmap("Resources/player/bmp/Player2_right.bmp", RGB(255, 255, 255));
		//p2die1.LoadBitmap("Resources/player/bmp/Player2_die1.bmp", RGB(255, 255, 255));
		//p2die2.LoadBitmap("Resources/player/bmp/Player2_die2.bmp", RGB(255, 255, 255));
		
	}

	void player::OnMove()
	{


	}

	void player::OnShow()
	{
        /*if (status == 5 && user_id == 1)
		{
			if (mode == 0) {
				P1_up.SetTopLeft(x, y);
				P1_up.ShowBitmap();
			}
			if (mode == 1) {
				P1_down.SetTopLeft(x, y);
				P1_down.ShowBitmap();
			}
			if (mode == 2) {
				P1_left.SetTopLeft(x, y);
				P1_left.ShowBitmap();
			}
			if (mode == 3) {
				P1_right.SetTopLeft(x, y);
				P1_right.ShowBitmap();
			}
		}
        if (status == 5 && user_id == 2)
		{
			if (mode == 0) {
				P2_up.SetTopLeft(x, y);
				P2_up.ShowBitmap();
			}
			if (mode == 1) {
				P2_down.SetTopLeft(x, y);
				P2_down.ShowBitmap();
			}
			if (mode == 2) {
				P2_left.SetTopLeft(x, y);
				P2_left.ShowBitmap();
			}
			if (mode == 3) {
				P2_right.SetTopLeft(x, y);
				P2_right.ShowBitmap();
			}
		}*/
		
	}



}