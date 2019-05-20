// Fill out your copyright notice in the Description page of Project Settings.

#include "DecideRow.h"

int UDecideRow::DecideNumOfRows(int rowType, int currentRow) {
	int modRow = currentRow / 100;
	int numOfRows = 0;
	if (rowType == 0) {
		modRow = 0;
	}
	if (modRow >= 3) {
		return 3;
	} else if (modRow >= 2) {
		return 2;
	} else if (modRow >= 1) {
		return 1;
	} else {
		return 0;
	}
}