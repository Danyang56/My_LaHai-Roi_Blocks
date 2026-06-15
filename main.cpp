#include <graphics.h>
#include <iostream>

int main() {
	initgraph(640, 480);
	BeginBatchDraw();

	setlinecolor(WHITE);
	setfillcolor(RED);

	for (int i = 50; i < 600; i++)
	{
		cleardevice();
		circle(i, 100, 40);
		floodfill(i, 100, WHITE);
		FlushBatchDraw();
		Sleep(10);
	}

	EndBatchDraw();
	closegraph();

	std::cout << "hello world" << std::endl;
}