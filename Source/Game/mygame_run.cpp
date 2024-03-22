#include "stdafx.h"
#include "../Core/Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "../Library/audio.h"
#include "../Library/gameutil.h"
#include "../Library/gamecore.h"
#include "mygame.h"
#include "config.h"

using namespace game_framework;

/////////////////////////////////////////////////////////////////////////////
// 這個class為遊戲的遊戲執行物件，主要的遊戲程式都在這裡
/////////////////////////////////////////////////////////////////////////////

CGameStateRun::CGameStateRun(CGame *g) : CGameState(g)
{
}

CGameStateRun::~CGameStateRun()
{
}

void CGameStateRun::OnBeginState()
{
}

void CGameStateRun::OnMove()							// 移動遊戲元素
{
	
}

void CGameStateRun::OnInit()  								// 遊戲的初值及圖形設定
{
	//background.LoadBitmap("resources/pages/map_select.bmp");
	//background.SetTopLeft(0, 0);
	//Sleep(1000);
	select_map.LoadBitmap("Resources/pages/map_select.bmp", RGB(255, 255, 255));
	//select_map.SetTopLeft((SIZE_X - select_map.GetWidth())/2, (SIZE_Y- select_map.GetTop())/2);
	select_map.SetTopLeft((SIZE_X - select_map.GetWidth())/2, SIZE_Y/8);
	select_mode = 0;
	
	background.LoadBitmapByString({"resources/map1/bmp/map1.bmp",
			"resources/map2/bmp/map2.bmp",
			"resources/map3/bmp/map3.bmp",
			"resources/map4/bmp/map4.bmp",
			"resources/map5/bmp/map5.bmp"
		});
	background.SetTopLeft(0, 0);
	gamemap.LoadBitmap();
	
}

void CGameStateRun::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	
}

void CGameStateRun::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	const char KEY_ESC = 0x1B;
	const char KEY_S = 0x53;//S鍵
	const char KEY_D = 0x44;//D鍵
	const char KEY_F = 0x46;//F鍵
	const char KEY_G = 0x47;//G鍵
	const char KEY_H = 0x48;//H鍵
	const char KEY_J = 0x4A;//J鍵
	if(nChar == KEY_S || nChar == KEY_D || nChar == KEY_F || nChar == KEY_G || nChar == KEY_H)
	{
		select_mode = 1;
	}
	if (nChar == KEY_S)
	{
		gamemap.setMode(1);
		gamemap.select_map();
		background.SetFrameIndexOfBitmap(0);
	}
	else if (nChar == KEY_D)
	{
		gamemap.setMode(2);
		gamemap.select_map();
		background.SetFrameIndexOfBitmap(1);
	}
	else if (nChar == KEY_F)
	{
		gamemap.setMode(3);
		gamemap.select_map();
		background.SetFrameIndexOfBitmap(2);
	}
	else if (nChar == KEY_G)
	{
		gamemap.setMode(4);
		gamemap.select_map();
		background.SetFrameIndexOfBitmap(3);
	}
	else if (nChar == KEY_H)
	{
		gamemap.setMode(5);
		gamemap.select_map();
		background.SetFrameIndexOfBitmap(4);
	}
	if (nChar == KEY_ESC)
	{
		PostMessage(AfxGetMainWnd()->m_hWnd, WM_CLOSE,0,0);
	}
	if (nChar == KEY_J)
	{
		select_mode = 0;
		GotoGameState(GAME_STATE_INIT);						// 切換至GAME_STATE_INIT
	}
	
}

void CGameStateRun::OnLButtonDown(UINT nFlags, CPoint point)  // 處理滑鼠的動作
{
	
}

void CGameStateRun::OnLButtonUp(UINT nFlags, CPoint point)	// 處理滑鼠的動作
{
}

void CGameStateRun::OnMouseMove(UINT nFlags, CPoint point)	// 處理滑鼠的動作
{
}

void CGameStateRun::OnRButtonDown(UINT nFlags, CPoint point)  // 處理滑鼠的動作
{
}

void CGameStateRun::OnRButtonUp(UINT nFlags, CPoint point)	// 處理滑鼠的動作
{
}

void CGameStateRun::OnShow()
{
	if(select_mode == 0)
	{
		select_map.ShowBitmap();
	}
	else if(select_mode == 1)
	{
		background.ShowBitmap();
		gamemap.OnShow();
		
	}
	
}
