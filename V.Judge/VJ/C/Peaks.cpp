#include <iostream>
#include <vector>

using namespace std;
int main() {
    int N, M;
    cin >> N >> M;

    vector<int> elevacoes(N);

    for (int i = 0; i < N; i++) {
        cin >> elevacoes[i];
    }

    vector<pair<int, int>> estradas(M);

    for (int i = 0; i < M; i++) {
        cin >> estradas[i].first >> estradas[i].second;
    }

    vector<int> bonsObservatorios(N, 1);

    for (int i = 0; i < M; i++) {
        int a = estradas[i].first - 1;
        int b = estradas[i].second - 1;

        if (elevacoes[a] <= elevacoes[b]) {
            bonsObservatorios[a] = 0;
        }
        if (elevacoes[b] <= elevacoes[a]) {
            bonsObservatorios[b] = 0;
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (bonsObservatorios[i] == 1) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

