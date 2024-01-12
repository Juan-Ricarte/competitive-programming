#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

typedef pair<long long, long long> pii;

long long algoritmo_prim(int n, vector<vector<pii>>& grafo) {
    vector<bool> visitado(n+1, false);
    long long custo_minimo = 0;
    priority_queue<pii, vector<pii>, greater<pii>> fila_prioridade;

    fila_prioridade.push({0, 1});

    while (!fila_prioridade.empty()) {
        int custo = fila_prioridade.top().first;
        int no = fila_prioridade.top().second;
        fila_prioridade.pop();

        if (!visitado[no]) {
            visitado[no] = true;
            custo_minimo += custo;

            for (const auto& vizinho : grafo[no]) {
                int no_vizinho = vizinho.first;
                int custo_vizinho = vizinho.second;

                if (!visitado[no_vizinho]) {
                    fila_prioridade.push({custo_vizinho, no_vizinho});
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!visitado[i]) {
            return -1;
        }
    }

    return custo_minimo;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pii>> grafo(n+1);

    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        grafo[a].push_back({b, c});
        grafo[b].push_back({a, c});
    }

    long long resultado = algoritmo_prim(n, grafo);

    if (resultado == -1) {
        cout << "IMPOSSIBLE"<<endl;
    } else {
        cout << resultado << endl;
    }

    return 0;
}