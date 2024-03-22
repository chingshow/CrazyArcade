#include "StdAfx.h"
#include "resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "../Library/gameutil.h"
#include "CGameMap.h"
#include <stdlib.h>

namespace game_framework
{
    CGameMap::CGameMap()
    :X(0), Y(0), MapWidth(70), MapHeight(70)
    {
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 15; j++) {
                map[i][j] = map3_init[i][j];
            }
        }
    }

    void CGameMap::setMode(int m)
    {
        mode = m;
    }

    void CGameMap::select_map()
    {
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 15; j++) {
                switch(mode)
                {
                case 1:
                    map[i][j] = map1_init[i][j];
                    break;
                case 2:
                    map[i][j] = map2_init[i][j];
                    break;
                case 3:
                    map[i][j] = map3_init[i][j];
                    break;
                case 4:
                    map[i][j] = map4_init[i][j];
                    break;
                case 5:
                    map[i][j] = map5_init[i][j];
                    break;
                }
                
				
            }
        }
    }
    
    void CGameMap::LoadBitmap()
    {
        //map1
        blocks_r.LoadBitmap("Resources/map1/bmp/blocks_r.bmp", RGB(255, 255, 255));
        blocks_y.LoadBitmap("Resources/map1/bmp/blocks_y.bmp", RGB(255, 255, 255));
        grass.LoadBitmap("Resources/map1/bmp/grass.bmp", RGB(255, 255, 255));
        house_b.LoadBitmap("Resources/map1/bmp/house_b.bmp", RGB(255, 255, 255));
        house_r.LoadBitmap("Resources/map1/bmp/house_r.bmp", RGB(255, 255, 255));
        house_y.LoadBitmap("Resources/map1/bmp/house_y.bmp", RGB(255, 255, 255));
        tree.LoadBitmap("Resources/map1/bmp/tree.bmp", RGB(255, 255, 255));
        wooden_box.LoadBitmap("Resources/map1/bmp/wooden_box.bmp", RGB(255, 255, 255));

        //map2
        cactus.LoadBitmap("Resources/map2/bmp/cactus.bmp", RGB(255, 255, 255));
        earth.LoadBitmap("Resources/map2/bmp/earth.bmp", RGB(255, 255, 255));
        green_box.LoadBitmap("Resources/map2/bmp/green_box.bmp", RGB(255, 255, 255));
        green_box2.LoadBitmap("Resources/map2/bmp/green_box2.bmp", RGB(255, 255, 255));
        rock.LoadBitmap("Resources/map2/bmp/rock.bmp", RGB(255, 255, 255));
        tent_b.LoadBitmap("Resources/map2/bmp/tent_b.bmp", RGB(255, 255, 255));
        tent_r.LoadBitmap("Resources/map2/bmp/tent_r.bmp", RGB(255, 255, 255));
        tent_y.LoadBitmap("Resources/map2/bmp/tent_y.bmp", RGB(255, 255, 255));
        
        //map3
        basket_trans.LoadBitmap("Resources/map3/bmp/basket_trans.bmp", RGB(255, 255, 255));
        flower_trans.LoadBitmap("Resources/map3/bmp/flower_trans.bmp", RGB(255, 255, 255));
        grassBlock_trans.LoadBitmap("Resources/map3/bmp/grassBlock_trans.bmp", RGB(255, 255, 255));
        tree_trans.LoadBitmap("Resources/map3/bmp/tree_trans.bmp", RGB(255, 255, 255));
        pool_LB_trans.LoadBitmap("Resources/map3/bmp/pool_LB_trans.bmp", RGB(255, 255, 255));
        pool_LU_trans.LoadBitmap("Resources/map3/bmp/pool_LU_trans.bmp", RGB(255, 255, 255));
        pool_MB_trans.LoadBitmap("Resources/map3/bmp/pool_MB_trans.bmp", RGB(255, 255, 255));
        pool_MU_trans.LoadBitmap("Resources/map3/bmp/pool_MU_trans.bmp", RGB(255, 255, 255));
        pool_RB_trans.LoadBitmap("Resources/map3/bmp/pool_RB_trans.bmp", RGB(255, 255, 255));
        pool_RU_trans.LoadBitmap("Resources/map3/bmp/pool_RU_trans.bmp", RGB(255, 255, 255));

        //map4
        box.LoadBitmap("Resources/map4/bmp/box.bmp", RGB(255, 255, 255));
        rock1.LoadBitmap("Resources/map4/bmp/rock1.bmp", RGB(255, 255, 255));
        rock2.LoadBitmap("Resources/map4/bmp/rock2.bmp", RGB(255, 255, 255));
        stone.LoadBitmap("Resources/map4/bmp/stone.bmp", RGB(255, 255, 255));
        cross_trans_L.LoadBitmap("Resources/map4/bmp/cross_trans_L.bmp", RGB(255, 255, 255));
        cross_trans_R.LoadBitmap("Resources/map4/bmp/cross_trans_R.bmp", RGB(255, 255, 255));
        iron1_trans_B.LoadBitmap("Resources/map4/bmp/iron1_trans_B.bmp", RGB(255, 255, 255));
        iron2_trans_B.LoadBitmap("Resources/map4/bmp/iron2_trans_B.bmp", RGB(255, 255, 255));
        lamb_trans_B.LoadBitmap("Resources/map4/bmp/lamb_trans_B.bmp", RGB(255, 255, 255));

        //map5
        block.LoadBitmap("Resources/map5/bmp/block.bmp", RGB(255, 255, 255));
        block2_trans.LoadBitmap("Resources/map5/bmp/block2_trans.bmp", RGB(255, 255, 255));
        bottle_B.LoadBitmap("Resources/map5/bmp/bottle_B.bmp", RGB(255, 255, 255));
        box_b.LoadBitmap("Resources/map5/bmp/box_b.bmp", RGB(255, 255, 255));
        box_d.LoadBitmap("Resources/map5/bmp/box_d.bmp", RGB(255, 255, 255));
        triangle_trans.LoadBitmap("Resources/map5/bmp/triangle_trans.bmp", RGB(255, 255, 255));
    }

    void CGameMap::selectShow()
    {
        for (int i = 0; i < 15; i++){
            for (int j = 0; j < 13; j++) {
                switch (map[j][i]) {
                case 0:
                    break;
                case 1:
                    if(mode == 1)
                    {
                        blocks_r.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - blocks_r.GetHeight());
                        blocks_r.ShowBitmap();
                    }
                    else if(mode == 2)
                    {
                        cactus.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - cactus.GetHeight());
                        cactus.ShowBitmap();
                    }
                    else if(mode == 3){
                        basket_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - basket_trans.GetHeight());
                        basket_trans.ShowBitmap();
                    }
                    else if(mode == 4){
                        box.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - box.GetHeight());
                        box.ShowBitmap();
                    }
                    else if(mode == 5)
                    {
                        block.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - block.GetHeight());
                        block.ShowBitmap();
                    }
                    break;
                case 2:
                    if(mode == 1)
                    {
                        blocks_y.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - blocks_y.GetHeight());
                        blocks_y.ShowBitmap();
                    }
                    else if(mode == 2)
                    {
                        earth.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - earth.GetHeight());
                        earth.ShowBitmap();
                    }
                    else if(mode == 3){
                        flower_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - flower_trans.GetHeight());
                        flower_trans.ShowBitmap();
                    }
                    else if(mode == 4){
                        rock1.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - rock1.GetHeight());
                        rock1.ShowBitmap();
                    }
                    else if(mode == 5)
                    {
                        block2_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - block2_trans.GetHeight());
                        block2_trans.ShowBitmap();
                    }
                    break;
                case 3:
                    if(mode == 1)
                    {
                        grass.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - grass.GetHeight());
                        grass.ShowBitmap();
                    }
                    else if(mode == 2)
                    {
                        green_box.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - green_box.GetHeight());
                        green_box.ShowBitmap();
                    }
                    else if(mode == 3){
                        grassBlock_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - grassBlock_trans.GetHeight());
                        grassBlock_trans.ShowBitmap();
                    }
                    else if(mode == 4){
                        rock2.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - rock2.GetHeight());
                        rock2.ShowBitmap();
                    }
                    else if(mode == 5)
                    {
                        bottle_B.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - bottle_B.GetHeight());
                        bottle_B.ShowBitmap();
                    }
                    break;
                case 4:
                    if(mode == 1)
                    {
                        house_b.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - house_b.GetHeight());
                        house_b.ShowBitmap();
                    }
                    else if(mode == 2)
                    {
                        green_box2.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - green_box2.GetHeight());
                        green_box2.ShowBitmap();
                    }
                    else if(mode == 3){
                        tree_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - tree_trans.GetHeight());
                        tree_trans.ShowBitmap();
                    }
                    else if(mode == 4)
                    {
                        stone.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - stone.GetHeight());
                        stone.ShowBitmap();
                    }
                    else if(mode == 5)
                    {
                        box_b.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - box_b.GetHeight());
                        box_b.ShowBitmap();
                    }
                    break;
                case 5:
                    if(mode == 1)
                    {
                        house_r.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - house_r.GetHeight());
                        house_r.ShowBitmap();
                    }
                    else if(mode == 2)
                    {
                        rock.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - rock.GetHeight());
                        rock.ShowBitmap();
                    }
                    else if(mode == 5)
                    {
                        box_d.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - box_d.GetHeight());
                        box_d.ShowBitmap();
                    }
                    break;
                case 6:
                    if(mode == 1)
                    {
                        house_y.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - house_y.GetHeight());
                        house_y.ShowBitmap();
                    }
                    else if(mode == 2)
                    {
                        tent_b.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - tent_b.GetHeight());
                        tent_b.ShowBitmap();
                    }
                    else if(mode == 4)
                    {
                        cross_trans_L.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - cross_trans_L.GetHeight());
                        cross_trans_L.ShowBitmap();
                    }
                    else if(mode == 5)
                    {
                        triangle_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - triangle_trans.GetHeight());
                        triangle_trans.ShowBitmap();
                    }
                    break;
                case 7:
                    if(mode == 1)
                    {
                        tree.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - tree.GetHeight());
                        tree.ShowBitmap();
                    }
                    else if(mode == 2)
                    {
                        tent_r.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - tent_r.GetHeight());
                        tent_r.ShowBitmap();
                    }
                    else if(mode == 4)
                    {
                        cross_trans_R.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - cross_trans_R.GetHeight());
                        cross_trans_R.ShowBitmap();
                    }
                    break;
                case 8:
                    if(mode == 1)
                    {
                        wooden_box.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - wooden_box.GetHeight());
                        wooden_box.ShowBitmap();
                    }
                    else if(mode == 2)
                    {
                        tent_y.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - tent_y.GetHeight());
                        tent_y.ShowBitmap();
                    }
                    else if(mode == 4)
                    {
                        iron1_trans_B.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - iron1_trans_B.GetHeight());
                        iron1_trans_B.ShowBitmap();
                    }
                    break;
                case 9:
                    if(mode == 4)
                    {
                        iron2_trans_B.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - iron2_trans_B.GetHeight());
                        iron2_trans_B.ShowBitmap();
                    }
                    break;
                case 10:
                    if(mode == 3)
                    {
                        pool_LB_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - pool_LB_trans.GetHeight());
                        pool_LB_trans.ShowBitmap();
                    }
                    else if(mode == 4)
                    {
                        lamb_trans_B.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - lamb_trans_B.GetHeight());
                        lamb_trans_B.ShowBitmap();
                    }
                    break;
                case 11:
                    pool_LU_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight *( j+1)) - pool_LU_trans.GetHeight());
                    pool_LU_trans.ShowBitmap();
                    break;
                case 12:
                    pool_MB_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - pool_MB_trans.GetHeight());
                    pool_MB_trans.ShowBitmap();
                    break;
                case 13:
                    pool_MU_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - pool_MU_trans.GetHeight());
                    pool_MU_trans.ShowBitmap();
                    break;
                case 14:
                    pool_RB_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - pool_RB_trans.GetHeight());
                    pool_RB_trans.ShowBitmap();
                    break;
                case 15:
                    pool_RU_trans.SetTopLeft(X + (MapWidth * i), Y + (MapHeight * (j+1)) - pool_RU_trans.GetHeight());
                    pool_RU_trans.ShowBitmap();
                    break;
                }
            }
        }
    }

    

    void CGameMap::OnShow()
    {
        selectShow();
    }

    CGameMap::~CGameMap(){}
}
