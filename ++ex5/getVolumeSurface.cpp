#include"getVolumeSurface.h"

void getVolumeSurface(BOX* box) {
	box->volume = box->width * box->height * box->depth;
	box->surface = 2 * (box->width * box->height + box->width * box->depth + box->height * box->depth);
	return;
}

bool isSendable(BOX* box) {
	int all[] = { 60, 80, 100, 120, 140, 160, 1180, 200 };
	double size;
	size = box->width + box->height + box->depth;
	if (size <= 200) {
		for (int j = 0; j < 8; j++) {
			if (size <= all[j]) {
				box->packSize = all[j];
				return true;
			}
		}
	}
	else {
		return false;
	}
}