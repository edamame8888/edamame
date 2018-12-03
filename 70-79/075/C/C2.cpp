const int limit = 50;
int n, m;
int a[limit], b[limit];
bool graph[limit][limit];
bool visited[limit];
void dfs(int v) {
    visited[v] = true;
    for (int v2 = 0; v2 < n; ++v2) {
        if (graph[v][v2] == false) continue;
        if (visited[v2] == true) continue;
        dfs(v2);
} }
int main(void) {
  19 cin>>n>>m; 20
21 for 22
23
24
(int i = 0; i < m; ++i) {
cin >> a[i] >> b[i];
a[i]--, b[i]--;
graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
25 }
26
27 int
28
29 for
30
31
32
33
34
35
36
37
38
39
40
41 }
42
43 cout << ans << endl; 44
45 return 0;
46 }
ans = 0;
(int i = 0; i < m; ++i) {
graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;
for (int j = 0; j < n; ++j) visited[j] = false;
dfs(0);
bool bridge = false;
for (int j = 0; j < n; ++j) if (visited[j] == false) bridge = true;
if (bridge) ans += 1;
graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
}
