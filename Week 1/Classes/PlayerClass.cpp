// THIS IS AN EXAMPLE PLAYER CLASS WHICH COULD BE USED IN A GAME

#include <iostream>

class Player {
private:
    float m_X, m_Y;
    float speed;
public:
    Player() {
        m_X = 0;
        m_Y = 0;
        speed = 0;
    }

    void Move(float xa, float ya) {
        m_X += xa * speed;
        m_Y += ya * speed;
    }
};

// Program entry point
int main() {
    Player player;
}
