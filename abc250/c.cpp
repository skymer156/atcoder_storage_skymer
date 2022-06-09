#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long N, Q;
	cin >> N >> Q;

	vector<int> change(Q, 0);
	// 出力a配列
	vector<int> ans(N, 0);
	// 値iのa配列における位置を格納する配列
	vector<int> ball_loc(N, 0);

	for (int i = 0; i < Q; i++)
		cin >> change[i];
	for (int i = 0; i < N; i++){
		ans[i] = i+1;
		ball_loc[i] = i;
	}

	int tmp_ball_loc =0;
	for (auto &&i : change)
	{
		tmp_ball_loc = ball_loc[i - 1];

		if(tmp_ball_loc == N -1){
			int swap_tmp = 0;
			swap_tmp = ans[tmp_ball_loc - 1];
			ans[tmp_ball_loc - 1] = ans[tmp_ball_loc];
			ans[tmp_ball_loc] = swap_tmp;
			ball_loc[i - 1] = tmp_ball_loc - 1;// iによって抽出されたボールは0に
			ball_loc[swap_tmp - 1] = N -1;// 右隣(左端)のボールは一番右に移動

		}else{
			int swap_tmp = 0;
			swap_tmp = ans[tmp_ball_loc + 1]; // 右隣の値
			ans[tmp_ball_loc + 1] = ans[tmp_ball_loc]; // 右隣とiのボールを交換
			ans[tmp_ball_loc] = swap_tmp; // iのボール位置に右ボールを入れる
			ball_loc[i - 1] = tmp_ball_loc + 1;
			ball_loc[swap_tmp - 1] = tmp_ball_loc;
		}	

	}
	
	for (int i = 0; i < N; i++){
		cout << ans[i] << ' ';
	}

	return 0;
}
