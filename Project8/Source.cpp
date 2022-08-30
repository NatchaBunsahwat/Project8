#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
int main() {
	int i, n = 3, min = 1000000, a[100];

	for (i = 0; i < n; i++) {
		printf("input num%d = ", i + 1);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("min: %d", min);
}