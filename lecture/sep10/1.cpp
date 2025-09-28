#include <iostream>

using namespace std;

class TempleRun {
    private: 
        int score;
    public:
        void right(void);
        void left(void);
        void get_score(void);
        TempleRun() {
            this->score = 0;
            cout << "Game Started with Score: " << this->score << endl;
        };
        friend void bonus(TempleRun *t);
};

void TempleRun::left(void) {
    this->score++;
}

void TempleRun::right(void) {
    this->score++;
}

void TempleRun::get_score(void) {
    cout << "Your score is : " << this->score << endl;
}

void bonus(TempleRun *p6) {
    p6->score = p6->score + 5;
};

int main() {
    TempleRun p1;
    p1.left();
    p1.right();
    p1.get_score();
    bonus(&p1);
    p1.get_score();
    return 0;
}