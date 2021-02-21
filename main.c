#include<stdlib.h>
#include<stdio.h>
void body(){
  char chessmap[9][9];int i,j;

  for(j=0;j<9;j++) chessmap[1][j]='p'; j=0;
  for(j=0;j<9;j++) chessmap[6][j]='P'; j=0;

  for(i=2;i<6;i++) 
    for(j=0;j<8;j++) chessmap[i][j]=' ';
  
  i=0;j=0;
  chessmap[0][0]='r'; chessmap[7][0]='R';  
  chessmap[0][1]='n'; chessmap[7][1]='N';
  chessmap[0][2]='b'; chessmap[7][2]='B';
  chessmap[0][3]='q'; chessmap[7][3]='Q';
  chessmap[0][4]='k'; chessmap[7][4]='K';
  chessmap[0][5]='b'; chessmap[7][5]='B';
  chessmap[0][6]='n'; chessmap[7][6]='N';
  chessmap[0][7]='r'; chessmap[7][7]='R';

  chessmap[8][0]='a'; chessmap[8][4]='e'; 
  chessmap[8][1]='b'; chessmap[8][5]='f';
  chessmap[8][2]='c'; chessmap[8][6]='g';
  chessmap[8][3]='d'; chessmap[8][7]='h';
  
  chessmap[0][8]='8'; chessmap[4][8]='4'; 
  chessmap[1][8]='7'; chessmap[5][8]='3';
  chessmap[2][8]='6'; chessmap[6][8]='2';
  chessmap[3][8]='5'; chessmap[7][8]='1';

  chessmap[8][8]=' ';

 for(i=0;i<9;i++)
 {  
    for (j=0;j<9;j++)
        printf("[%c]",chessmap[i][j] );
    printf( "\n" );
 }
}
int main(){
int a,i,j;
printf("Ready?\nEnter any key\n");
scanf("%d",&a);
printf("\n");

body();
printf( "\n" );

}
