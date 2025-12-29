/* DFSの実装 */

#include <iostream>
#include <vector>

using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
	seen[v] = true;
	// v から行ける各頂点next_vについて
	for (auto next_v : G[v]) {
		if (seen[next_v]) continue;
		dfs(G, next_v); // 再帰的に探索
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	Graph G(N);
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	seen.assign(N, false);
	dfs(G, 0);
}
