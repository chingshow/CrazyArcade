#include "CGameMap.h"
namespace game_framework {
	class player :public CGameMap
	{
	public:
		player();
		int  GetX1();

	protected:
		int x, y, mode;					
	};
}