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
// �o��class���C�����C�����檫��A�D�n���C���{�����b�o��
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

void CGameStateRun::OnMove()							// ���ʹC������
{
	
}

void CGameStateRun::OnInit()  								// �C������Ȥιϧγ]�w
{
    select_map.LoadBitmap("Resources/pages/map_select.bmp", RGB(255, 255, 255));
	//select_map.SetTopLeft((SIZE_X - select_map.GetWidth())/2, (SIZE_Y- select_map.GetTop())/2);
	select_map.SetTopLeft((SIZE_X - select_map.GetWidth())/2, SIZE_Y/8);
    background1.LoadBitmap("Resources/map1/bmp/map1.bmp", RGB(255, 255, 255));
    background1.SetTopLeft(0,0);
    background2.LoadBitmap("Resources/map2/bmp/map2.bmp", RGB(255, 255, 255));
    background2.SetTopLeft(0,0);
    background3.LoadBitmap("Resources/map3/bmp/map3.bmp", RGB(255, 255, 255));
    background3.SetTopLeft(0,0);
    background4.LoadBitmap("Resources/map4/bmp/map4.bmp", RGB(255, 255, 255));
    background4.SetTopLeft(0,0);
    background5.LoadBitmap("Resources/map5/bmp/map5.bmp", RGB(255, 255, 255));
	background5.SetTopLeft(0,0);
    select_mode = 1;
}

void CGameStateRun::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	
}

void CGameStateRun::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	
}

/*void CGameStateRun::OnLButtonDown(UINT nFlags, CPoint point)  // �B�z�ƹ����ʧ@
{
}

void CGameStateRun::OnLButtonUp(UINT nFlags, CPoint point)	// �B�z�ƹ����ʧ@
{
}

void CGameStateRun::OnMouseMove(UINT nFlags, CPoint point)	// �B�z�ƹ����ʧ@
{
}

void CGameStateRun::OnRButtonDown(UINT nFlags, CPoint point)  // �B�z�ƹ����ʧ@
{
}

void CGameStateRun::OnRButtonUp(UINT nFlags, CPoint point)	// �B�z�ƹ����ʧ@
{
}*/

void CGameStateRun::OnShow()
{
    //background2.ShowBitmap();
    if (select_mode == 1)
		select_map.ShowBitmap();		
	else
		background2.ShowBitmap();

}
