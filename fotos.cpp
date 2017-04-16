#include <iostream>
#include <algorithm> 

using namespace std;

int colisao(int x1,int y1,int x2,int y2,int xt,int yt);

int main()
{
	int xt, yt, x1, y1, x2, y2, flag;
	cin >> xt >> yt >> x1 >> y1 >> x2 >> y2;
	flag = colisao(x1,y1,x2,y2,xt,yt);
	if (flag) cout << "S\n";
	else cout << "N\n";
	return 0;
}

int colisao(int x1,int y1,int x2,int y2,int xt,int yt)
{
	if((x1 + x2) <= xt && max(y1,y2) <= yt) return 1;
	if((x1 + y2) <= xt && max(y1,x2) <= yt) return 1;
	if((y1 + x2) <= xt && max(x1,y2) <= yt) return 1;
	if((y1 + y2) <= xt && max(y1,y2) <= yt)	return 1;
	if((x1 + x2) <= yt && max(y1,y2) <= xt) return 1;
	if((x1 + y2) <= yt && max(y1,y2) <= xt) return 1;
	if((y1 + x2) <= yt && max(y1,y2) <= xt)	return 1;
	if((y1 + y2) <= yt && max(y1,y2) <= xt)	return 1;
	else return 0;
}
