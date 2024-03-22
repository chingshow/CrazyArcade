#include "stdafx.h"
#include "../Core/Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "../Library/audio.h"
#include "../Library/gameutil.h"
#include "../Library/gamecore.h"
#include "mygame.h"

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
	//background.LoadBitmap("resources/pages/map_select.bmp");
	//background.SetTopLeft(0, 0);
	//Sleep(1000);
	int mode = 2;
	if(mode == 1)
	{
		background.LoadBitmap("resources/map1/bmp/map1.bmp");
		background.SetTopLeft(0, 0);
	}
	else if(mode == 2)
	{
		background.LoadBitmap("resources/map2/bmp/map2.bmp");
		background.SetTopLeft(0, 0);
	}
	else if(mode == 3)
	{
		background.LoadBitmap("resources/map3/bmp/map3.bmp");
		background.SetTopLeft(0, 0);
	}
	else if(mode == 4)
	{
		background.LoadBitmap("resources/map4/bmp/map4.bmp");
		background.SetTopLeft(0, 0);
	}
	else if(mode == 5)
	{
		background.LoadBitmap("resources/map5/bmp/map5.bmp");
		background.SetTopLeft(0, 0);
	}
	gamemap.LoadBitmap();
	gamemap.setMode(mode);
	gamemap.select_map();
}

void CGameStateRun::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	
}

void CGameStateRun::OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	
}

void CGameStateRun::OnLButtonDown(UINT nFlags, CPoint point)  // �B�z�ƹ����ʧ@
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
}

void CGameStateRun::OnShow()
{
	background.ShowBitmap();
	Sleep(1500);
	background.ShowBitmap();
	
	gamemap.OnShow();
	
}
