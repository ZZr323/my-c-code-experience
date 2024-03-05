#include <iostream>
#include <algorithm> 
using namespace std;
int flag[100];
int main() {
    int i, j, N, empty, p, q;
    int n[100];
    char temp;
    char a[10][10];
    char ai[10];
    char aj[10];
    string successors[100]; 

    cin >> N;
    for (j = 0; j < N; j++) {
        cin >> n[j];
        for (i = 0; i < 2 * n[j] + 1; i++) {
            cin >> a[j][i];
        }
    }

    for (j = 0; j < N; j++) {
        cout << "结果_" << j + 1 << endl;

        for (i = 0; i < 2 * n[j] + 1; i++) {
            if (a[j][i] == 'E')
                empty = i;
        }

        
        for (i = 0; i < empty; i++) {
            ai[i] = a[j][i];
        }
        for (i = empty; i < 2 * n[j]; i++) {
            ai[i] = a[j][i + 1];
        }
        for (i = 0; i < n[j]; i++) {
            if (ai[i] != 'W') {
                flag[j] = 1;
            }
        }
        if (flag[j] == 0)
            cout << "目标格局" << endl;
        else if (flag[j] == 1)
        {
            int k = 0; 
            for (i = empty - 3; i <= empty + 3; i++) {
                if (i >= 0 && i < n[j] * 2 + 1 && i != empty) {
                    for (q = 0; q < 2 * n[j] + 1; q++) {
                        aj[q] = a[j][q];
                    }
                    temp = aj[empty];
                    aj[empty] = aj[i];
                    aj[i] = temp;
                    successors[k] = ""; 
                    for (p = 0; p < n[j] * 2 + 1; p++) {
                        successors[k] += aj[p]; 
                    }
                    k++; 
                }
            }
            sort(successors, successors + k); 
            for (i = 0; i < k; i++) { 
                cout << successors[i] << endl;
            }
        }
    }
    cout << endl;
    return 0;
}
