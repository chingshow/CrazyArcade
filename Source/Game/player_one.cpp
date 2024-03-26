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
		
	}
	void player_one::setP1Status(int s)
	{
		
	}
	void player_one::setP2Status(int s)
	{
		
	}

	void player_one::LoadBitmap()
	{
		
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