#include "CGameMap.h"
namespace game_framework {
	class player_one :public CGameMap
	{
	public:
		int user_id;
		int map_user[13][15];
		int speed;					// ���ʳt��
		int status;					// �s���⪬�A �i��Q����
		bool isAlive;				// �٬���
		int explosionRange;			// �z���d�� ��l 1 �Y�D��W�[

		player_one();
		int  GetX1();					// ���l���W�� x �y��
		int  GetY1();					// ���l���W�� y �y��
		int  GetX2();					// ���l�k�U�� x �y��
		int  GetY2();					// ���l�k�U�� y �y��
		int getStatus();
		int getId();
		
		void setid(int id);
		void setP1Status(int s);		// ��sp1���A
		void setP2Status(int s);		// ��sp2���A
		void SetMovingDown(bool flag);	// �]�w�O�_���b���U����
		void SetMovingLeft(bool flag);	// �]�w�O�_���b��������
		void SetMovingRight(bool flag); // �]�w�O�_���b���k����
		void SetMovingUp(bool flag);	// �]�w�O�_���b���W����
		void SetSpeed(int);				//�]�w���l���ʳt��
		void SetMap(int map[13][15]);
		void SetXY(int nx, int ny);		// �]�w���l���W���y��
		void Initialize(int who);				// �]�w���l����l��
		
		void LoadBitmap();				// ���J�ϧ�
		void OnMove();					// �������l
		void OnShow();					// �N���l�ϧζK��e��

		
		
		
		
		

	protected:
		CMovingBitmap P1_down, P1_up, P1_left, P1_right, p1die1, p1die2;
		CMovingBitmap P2_down, P2_up, P2_left, P2_right, p2die1, p2die2;
		int x, y, mode;					// ���l���W���y��
		bool isMovingDown;			// �O�_���b���U����
		bool isMovingLeft;			// �O�_���b��������
		bool isMovingRight;			// �O�_���b���k����
		bool isMovingUp;			// �O�_���b���W����

	};
}