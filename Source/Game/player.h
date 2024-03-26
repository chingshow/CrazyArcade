#include "CGameMap.h"
namespace game_framework {
	class player :public CGameMap
	{
	public:
		player();

	protected:
		int x, y, mode;					
	};
}