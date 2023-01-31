#include <iostream>
#include "getVolumeSurface.h"
using namespace std;

int main() {
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "幅を入力";
		cin >> boxes[i].width;
		cout << "高さを入力";
		cin >> boxes[i].height;
		cout << "奥行を入力";
		cin >> boxes[i].depth;
		getVolumeSurface(&boxes[i]);
		if (isSendable(&boxes[i])) {
			cout << boxes[i].packSize << "サイズで送れます" << endl;
		}
		else {
			cout << "宅急便では送れません" << endl;
		}
	}
	return 0;
}