#include <stdio.h>
#include <iostream>

using namespace std;

// size from 2 to 20
void drawTriangle(int size){


    int i,j;
    for(i=1;i<=size;++i)
{
    for(j=1;j<=i;++j)
    {
        printf("X ");
    }
    printf("\n");
}
    return ;
 }
// size from 2 to 20
void drawSquare(int size){
}

// size from 1 to 20
void drawPyramid(int size){
}

// size from 1 to 20
void drawChristmasTree(int size){
}

// size from 2 to 20
void drawfigureX(int size){
}

// size from 2 to 20
void drawfigureY(int size){
}

// size from 3 to 20
void drawfigureZ(int size){
}

// size from 2 to 20
void drawfigureW(int size){
}

int main(){
	const int MAXLINE=100;
	char line[MAXLINE];
	char oneChar;
	int value;
	while(true){
		cin >> oneChar;
		if(oneChar=='#')
		{
			cin.getline(line, MAXLINE);
			continue;
		}
		if(oneChar=='E')
			break;
		// read next argument, one int value
		cin >> value;
		switch(oneChar){
		case 'T': drawTriangle(value); break;
		case 'S': drawSquare(value); break;
		case 'P': drawPyramid(value); break;
		case 'C': drawChristmasTree(value); break;
		case 'X': drawfigureX(value); break;
		case 'Y': drawfigureY(value); break;
		case 'Z': drawfigureZ(value); break;
		case 'W': drawfigureW(value); break;
		}
	}
	cout << "END OF EXECUTION" << endl;
}
