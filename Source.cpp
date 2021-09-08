#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void top(int);
void mid(int);
void bot(int);
int main() {
	int a;
	int b = 0;
	scanf("%d", &a);
	if (a % 2 == 0) {
		a = a - 1;
		top(a);
		mid(a);
		bot(a);
	}
	else {
		top(a);
		bot(a);
	}
	return 0;
}
void top(int a) {
	for (int i = 0; i < a / 2; i++) {
		for (int j = (a - 1) / 2 - i; j > 0; j--) {
			printf("_");
		}
		printf("*");
		for (int j = 0; j < i * 2 - 1; j++) {
			printf("_");
		}
		if (i > 0) printf("*");
		for (int j = (a - 1) / 2 - i; j > 0; j--) {
			printf("_");
		}
		printf("\n");
	}
}
void mid(int a) {
	int i = a / 2;
	for (int j = (a - 1) / 2 - i; j > 0; j--) {
		printf("_");
	}
	printf("*");
	for (int j = 0; j < i * 2 - 1; j++) {
		printf("_");
	}
	if (i > 0) printf("*");
	for (int j = (a - 1) / 2 - i; j > 0; j--) {
		printf("_");
	}
	printf("\n");
}
void bot(int a) {
	for (int i = a / 2; i >= 0; i--) {
		for (int j = (a - 1) / 2 - i; j > 0; j--) {
			printf("_");
		}
		printf("*");
		for (int j = 0; j < i * 2 - 1; j++) {
			printf("_");
		}
		if (i > 0) printf("*");
		for (int j = (a - 1) / 2 - i; j > 0; j--) {
			printf("_");
		}
		printf("\n");
	}
}