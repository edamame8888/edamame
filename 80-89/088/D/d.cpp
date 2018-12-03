#include <iostream>
#include <vector>

using namespace std;

int main(){
  const int dirx[4] = {  1,  0, -1,  0 };
  const int diry[4] = {  0,  1,  0, -1 };
  int h,w,wall=0;
  cin >> h >> w;
  char map[h][w];
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      cin >> map[i][j];
      if(map[i][j] == '#') wall++;
    }
  }

  vector<vector<int> > dist( h, vector<int>(w,0) );

  dist[0][0] = 1;
  for(int d = 1; d < h*w; d++ ){
    for(int y = 0; y < h; y++){
      for(int x = 0; x < w; x++){
        if ( dist[y][x] == d ){
          for ( int r=0; r<4; r++ ){
            int tx = x + dirx[r];
            int ty = y + diry[r];

            if ( 0 <= tx  &&  tx < w  &&
                       0 <= ty  &&  ty < h  &&
                      map[ty][tx] != '#'  &&
                      dist[ty][tx] == 0 ){
                    dist[ty][tx] = d + 1;
            }
          }
        }
      }
    }
  }
  if(dist[h-1][w-1] == 0) cout << -1 << endl;
  else cout << (h*w - wall - dist[h-1][w-1]) << endl;
  return 0;
}
