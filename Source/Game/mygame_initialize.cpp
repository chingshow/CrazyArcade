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
// 這個class為遊戲的遊戲開頭畫面物件
/////////////////////////////////////////////////////////////////////////////

CGameStateInit::CGameStateInit(CGame *g) : CGameState(g)
{
}

void CGameStateInit::OnInit()
{
	//
	// 當圖很多時，OnInit載入所有的圖要花很多時間。為避免玩遊戲的人
	//     等的不耐煩，遊戲會出現「Loading ...」，顯示Loading的進度。
	//
	ShowInitProgress(0, "Start Initialize...");	// 一開始的loading進度為0%
	//
	// 開始載入資料
	select_mode = 1;
	logo.LoadBitmap("Resources/pages/home_page.bmp", RGB(255, 255, 255));
	//logo.SetTopLeft((SIZE_X - logo.GetWidth())/2, (SIZE_Y- logo.GetTop())/2);
	logo.SetTopLeft((SIZE_X - logo.GetWidth())/2, SIZE_Y/8);
	select_map.LoadBitmap("Resources/pages/map_select.bmp", RGB(255, 255, 255));
	//select_map.SetTopLeft((SIZE_X - select_map.GetWidth())/2, (SIZE_Y- select_map.GetTop())/2);
	select_map.SetTopLeft((SIZE_X - select_map.GetWidth())/2, SIZE_Y/8);
	//
	//Sleep(1000);				// 放慢，以便看清楚進度，實際遊戲請刪除此Sleep
	//
	// 此OnInit動作會接到CGameStaterRun::OnInit()，所以進度還沒到100%
	//
}

void CGameStateInit::OnBeginState()
{
}

void CGameStateInit::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	const char KEY_ENTER = 0x0D;
	const char KEY_ESC = 0x1B;
	const char KEY_S = 0x53;//S鍵
	const char KEY_D = 0x44;//D鍵
	const char KEY_F = 0x46;//F鍵
	const char KEY_G = 0x47;//G鍵
	const char KEY_H = 0x48;//H鍵
	const char KEY_J = 0x4A;//J鍵
	if (nChar == KEY_ENTER)
	{
		select_mode = 2;
		//PostMessage(AfxGetMainWnd()->m_hWnd, WM_CLOSE,0,0);	// 關閉遊戲
	}
	else if (nChar == KEY_ESC)								// Demo 關閉遊戲的方法
		PostMessage(AfxGetMainWnd()->m_hWnd, WM_CLOSE,0,0);	// 關閉遊戲

}

void CGameStateInit::OnLButtonDown(UINT nFlags, CPoint point)
{
	GotoGameState(GAME_STATE_RUN);		// 切換至GAME_STATE_RUN
}

void CGameStateInit::OnShow()
{
	//select_map.ShowBitmap();
	//logo.ShowBitmap();
	if (select_mode == 1)
		logo.ShowBitmap();			//貼上背景圖
	else
		select_map.ShowBitmap();			//貼上背景圖
}
