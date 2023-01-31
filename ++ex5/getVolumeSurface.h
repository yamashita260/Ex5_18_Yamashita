#pragma once

struct BOX {
	double width; //•
	double height; //‚‚³
	double depth; //‰œs
	double volume; //‘ÌÏ
	double surface; //•\–ÊÏ
	double packSize;
};

void getVolumeSurface(BOX* box);
bool isSendable(BOX* box);