#pragma once

struct BOX {
	double width; //��
	double height; //����
	double depth; //���s
	double volume; //�̐�
	double surface; //�\�ʐ�
	double packSize;
};

void getVolumeSurface(BOX* box);
bool isSendable(BOX* box);