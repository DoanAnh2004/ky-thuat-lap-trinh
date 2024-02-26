#include<stdio.h>
#include<stdbool.h>

#define N 9

int sudoku[N][N];

bool check(int row, int col, int value){
	// Kiem tra gia tri cua o co hop le hay khong
	int i,j;
	for(int i=0;i<N;i++){
		if(sudoku[row][i]==value){
			return false;
		}
	}
	if(sudoku[i][col]==value){
		return false;
	}
	int row_start = (row / 3) * 3;
	int col_start = (col / 3) * 3;
	for(i=row_start; i<row_start+3;i++){
		for(j=col_start;j<col_start+3;j++){
			if(sudoku[i][j]==value){
				return false;
			}
		}
	}
	return true;
}

bool find_empty(int *row, int *col){
	// Tim o trong tiep theo trong bang Sudoku
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(sudoku[i][j]==0){
				*row=i;
				*col=j;
				return true;
			}
		}
	}
	return false;
}

bool solve_sudoku(){
	int row,col;
	if(!find_empty(&row,&col)){
		return true; // Tim duoc giai phap hop le
	}
	int value;
	for(value=1;value<=9;value++){
		if(check(row,col,value)){
			sudoku[row][col]==value;
			if(solve_sudoku()){
				return true; // Tim duoc giai phap hop le
			}
			sudoku[row][col]=0;
		}
	}
	return false; // Khong tim duoc giai phap
}

void printf_sudoku(){
	// In ra bang Sudoku
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d",sudoku[i][j]);
		}
		printf("\n");
	}
}

int main(){
	// Nhap vao bang Sudoku
	int i,j;
	printf("Nhap vao bang Sudoku(su dung 0 de dai dien cho o trong):\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&sudoku[i][j]);
		}
	}
	// Giai bai toan Sudoku va in ra ket qua
	if(solve_sudoku()){
		printf("Giai phap cho bai toan Sudoku la:\n");
		printf_sudoku();
	} else {
		printf("Khong tim thay giai phap cho bai toan Sudoku!\n");
	}
	return 0;
}
