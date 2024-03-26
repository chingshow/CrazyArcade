#include "stdafx.h"
#include "../Core/Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "../Library/audio.h"
#include "../Library/gameutil.h"
#include "../Library/gamecore.h"
#include "player_one.h"
namespace game_framework 
{
    player_one::player_one()
	{
		Initialize(0);
	}
    int player_one::GetX1()
	{
		return x;
	}

	int player_one::GetY1()
	{
		return x;
	}

	int player_one::GetX2()
	{
		return x + 70;
	}

	int player_one::GetY2()
	{
		return y + 93;
	}
    void player_one::setid(int id)
	{
		user_id = id;
	}
	void player_one::Initialize(int who)
	{
        setid(who);
		int X_POS = 0;
		int Y_POS = 0;
		if (user_id == 2)
		{
			X_POS = 967;
			Y_POS = 817;
		}
		isAlive = true;
		explosionRange = 1;
		speed = 10;
		status = 5;
		x = X_POS;
		y = Y_POS;
		isMovingLeft = isMovingRight = isMovingUp = isMovingDown = false;
		mode = 0;
	}
	void player_one::setP1Status(int s)
	{
		if (user_id == 1)
			status = s;
	}
	void player_one::setP2Status(int s)
	{
        if(user_id == 2)
			status = s;
	}

	void player_one::LoadBitmap()
	{
        P1_down.LoadBitmap("Resources/player/bmp/Player1_down.bmp", RGB(255, 255, 255));
		P1_up.LoadBitmap("Resources/player/bmp/Player1_up.bmp", RGB(255, 255, 255));
		P1_left.LoadBitmap("Resources/player/bmp/Player1_left.bmp", RGB(255, 255, 255));
		P1_right.LoadBitmap("Resources/player/bmp/Player1_right.bmp", RGB(255, 255, 255));
		p1die1.LoadBitmap("Resources/player/bmp/Player1_die1.bmp", RGB(255, 255, 255));
		p1die2.LoadBitmap("Resources/player/bmp/Player1_die2.bmp", RGB(255, 255, 255));

		P2_down.LoadBitmap("Resources/player/bmp/Player2_down.bmp", RGB(255, 255, 255));
		P2_up.LoadBitmap("Resources/player/bmp/Player2_up.bmp", RGB(255, 255, 255));
		P2_left.LoadBitmap("Resources/player/bmp/Player2_left.bmp", RGB(255, 255, 255));
		P2_right.LoadBitmap("Resources/player/bmp/Player2_right.bmp", RGB(255, 255, 255));
		p2die1.LoadBitmap("Resources/player/bmp/Player2_die1.bmp", RGB(255, 255, 255));
		p2die2.LoadBitmap("Resources/player/bmp/Player2_die2.bmp", RGB(255, 255, 255));
		
	}

	void player_one::OnMove()
	{


	}

	void player_one::SetMovingDown(bool flag)
	{
		
	}

	void player_one::SetMovingLeft(bool flag)
	{
		
	}

	void player_one::SetMovingRight(bool flag)
	{
		
	}

	int player_one::getStatus()
	{
		
	}
	void player_one::SetMovingUp(bool flag)
	{
		
	}

	void player_one::SetMap(int map[13][15])
	{

	}
	void player_one::SetXY(int nx, int ny)
	{
		
	}
	int player_one::getId()
	{
        
	}
	void player_one::SetSpeed(int inSpeed)
	{
		
	}
	void player_one::OnShow()
	{
		
	}



}