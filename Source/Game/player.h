#pragma once

namespace game_framework
{ 
    class player
    {
    public:
        player();
        void LoadBitmap();
        ~player();
    protected:
        int mode = 0;
    };
    
    
}
