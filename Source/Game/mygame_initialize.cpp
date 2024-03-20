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
// �o��class���C�����C���}�Y�e������
/////////////////////////////////////////////////////////////////////////////

CGameStateInit::CGameStateInit(CGame *g) : CGameState(g)
{
}

void CGameStateInit::OnInit()
{
	//
	// ��ϫܦh�ɡAOnInit���J�Ҧ����ϭn��ܦh�ɶ��C���קK���C�����H
	//     �������@�СA�C���|�X�{�uLoading ...�v�A���Loading���i�סC
	//
	ShowInitProgress(0, "Start Initialize...");	// �@�}�l��loading�i�׬�0%
	//
	// �}�l���J���
	select_mode = 1;
	logo.LoadBitmap("Resources/pages/home_page.bmp", RGB(255, 255, 255));
	//logo.SetTopLeft((SIZE_X - logo.GetWidth())/2, (SIZE_Y- logo.GetTop())/2);
	logo.SetTopLeft((SIZE_X - logo.GetWidth())/2, SIZE_Y/8);
	select_map.LoadBitmap("Resources/pages/map_select.bmp", RGB(255, 255, 255));
	//select_map.SetTopLeft((SIZE_X - select_map.GetWidth())/2, (SIZE_Y- select_map.GetTop())/2);
	select_map.SetTopLeft((SIZE_X - select_map.GetWidth())/2, SIZE_Y/8);
	//
	//Sleep(1000);				// ��C�A�H�K�ݲM���i�סA��ڹC���ЧR����Sleep
	//
	// ��OnInit�ʧ@�|����CGameStaterRun::OnInit()�A�ҥH�i���٨S��100%
	//
}

void CGameStateInit::OnBeginState()
{
}

void CGameStateInit::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	const char KEY_ENTER = 0x0D;
	const char KEY_ESC = 0x1B;
	const char KEY_S = 0x53;//S��
	const char KEY_D = 0x44;//D��
	const char KEY_F = 0x46;//F��
	const char KEY_G = 0x47;//G��
	const char KEY_H = 0x48;//H��
	const char KEY_J = 0x4A;//J��
	if (nChar == KEY_ENTER)
	{
		select_mode = 2;
		//PostMessage(AfxGetMainWnd()->m_hWnd, WM_CLOSE,0,0);	// �����C��
	}
	else if (nChar == KEY_ESC)								// Demo �����C������k
		PostMessage(AfxGetMainWnd()->m_hWnd, WM_CLOSE,0,0);	// �����C��

}

void CGameStateInit::OnLButtonDown(UINT nFlags, CPoint point)
{
	GotoGameState(GAME_STATE_RUN);		// ������GAME_STATE_RUN
}

void CGameStateInit::OnShow()
{
	//select_map.ShowBitmap();
	//logo.ShowBitmap();
	if (select_mode == 1)
		logo.ShowBitmap();			//�K�W�I����
	else
		select_map.ShowBitmap();			//�K�W�I����
}
