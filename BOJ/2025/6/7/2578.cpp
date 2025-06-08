#include <iostream>
using namespace std;

int map[5][5];
int check_bingo() {
    int bingo = 0; //선이 몇 개 있는지 판별

    // 첫번쨰 경우(가로로 모두 0)
    for (int i = 0; i < 5; i++) {
        bool v = false;
        for (int j = 0; j < 5; j++) {
            if (map[i][j] != 0) {
                v = true;
                break;
            }
        }
        if (v == false) {
            bingo++;
        }
    }

    // 두번쨰 경우(세로로 모두 0)
    for (int i = 0; i < 5; i++) {
        bool v = false;
        for (int j = 0; j < 5; j++) {
            if (map[j][i] != 0) {
                v = true;
                break;
            }
        }
        if (v == false) {
            bingo++;
        }
    }
    // 세번째 경우 ((1,1)부터 (5,5)까지 대각선이 모두 0)
    bool v = false;
    for (int i = 0; i < 5; i++) {
        if (map[i][i] != 0) {
            v = true;
        }
        if (v == true) {
            break;
        }
    }

    if (v == false) {
        bingo++;
    }

    v = false;
    // 마지막 대각선이 모두 0
    for (int i = 4; i >= 0; i--) {
        if (map[i][4 - i] != 0) {
            v = true;
            break;
        }
    }
    if (v == false) {
        bingo++;
    }

    // 선이 세 개 이상이면 빙고
    if (bingo >= 3) {
        return 1;
    }
    // 그렇지 않으면 -1
    return -1;
}
int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> map[i][j];
        }
    }

    int first = 1;
    int x;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            cin >> x;
            first++;
            bool find = false;

            for (int k = 0; k < 5; k++) {
                for (int q = 0; q < 5; q++) {
                    // 부른 원소를 찾아서 0으로
                    if (map[k][q] == x) {
                        find = true;
                        map[k][q] = 0;

                    }
                }

            }
            // 빙고를 만족
            if (check_bingo() == 1) {
                cout << first - 1;
                return 0;
            }
        }
    }
}