202407015 정영훈

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "add.h"
#include "sub.h"

int main() {
	int x = 0;
	int y = 0;
	int num = 0;

	printf("함수 계산기\n");
	printf("값 두 개를 차례대로 입력하세요.\n");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("\n");

	printf("ADD : %d\n", add(x, y));
	printf("SUB : %d\n", sub(x, y));

	printf("\n");
	printf("계산을 마치겠습니다.\n");
}
