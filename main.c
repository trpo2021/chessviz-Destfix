#include<stdlib.h>
#include<stdio.h>
void body(){
  char chessmap[9][9];int i,j;

  for(j=0;j<9;j++) chessmap[1][j]='p'; j=0;
  for(j=0;j<9;j++) chessmap[6][j]='P'; j=0;

  for(i=2;i<6;i++) 
    for(j=1;j<9;j++) chessmap[i][j]=' ';
  
  i=0;j=0;
  chessmap[0][1]='r'; chessmap[7][1]='R';  
  chessmap[0][2]='n'; chessmap[7][2]='N';
  chessmap[0][3]='b'; chessmap[7][3]='B';
  chessmap[0][4]='q'; chessmap[7][4]='Q';
  chessmap[0][5]='k'; chessmap[7][5]='K';
  chessmap[0][6]='b'; chessmap[7][6]='B';
  chessmap[0][7]='n'; chessmap[7][7]='N';
  chessmap[0][8]='r'; chessmap[7][8]='R';

  chessmap[8][1]='a'; chessmap[8][5]='e'; 
  chessmap[8][2]='b'; chessmap[8][6]='f';
  chessmap[8][3]='c'; chessmap[8][7]='g';
  chessmap[8][4]='d'; chessmap[8][8]='h';
  
  chessmap[0][0]='8'; chessmap[4][0]='4'; 
  chessmap[1][0]='7'; chessmap[5][0]='3';
  chessmap[2][0]='6'; chessmap[6][0]='2';
  chessmap[3][0]='5'; chessmap[7][0]='1';

  chessmap[8][0]=' ';

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
