#include <iostream>
using namespace std;

int map[5][5];
int check_bingo() {
    int bingo = 0; //���� �� �� �ִ��� �Ǻ�

    // ù���� ���(���η� ��� 0)
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

    // �ι��� ���(���η� ��� 0)
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
    // ����° ��� ((1,1)���� (5,5)���� �밢���� ��� 0)
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
    // ������ �밢���� ��� 0
    for (int i = 4; i >= 0; i--) {
        if (map[i][4 - i] != 0) {
            v = true;
            break;
        }
    }
    if (v == false) {
        bingo++;
    }

    // ���� �� �� �̻��̸� ����
    if (bingo >= 3) {
        return 1;
    }
    // �׷��� ������ -1
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
                    // �θ� ���Ҹ� ã�Ƽ� 0����
                    if (map[k][q] == x) {
                        find = true;
                        map[k][q] = 0;

                    }
                }

            }
            // ���� ����
            if (check_bingo() == 1) {
                cout << first - 1;
                return 0;
            }
        }
    }
}