#include <iostream>
 using namespace std;
int OneuntilNine () ;
Display (char, char, char, char, char, char, char, char, char) ; 
bool WhoWin (char, char, char, char, char, char, char, char, char) ; 
int Occupied (int,char, char, char, char, char, char, char, char, char) ;
int main () {
int move;
char decision;
do{
char box1 = ' ', box2 = ' ', box3 = ' ',box4 =' ', b0x5 =' ',box6 = ' ',box7=' ', box8=' ' , box9 =' ';
bool endGame = false;
bool Xplayer = false;
bool Oplayer = false;
int boxTransfer;
while (endGame != false) {
// Player X move
Display (box1,box2, box3, box4, box5, b0x6,00x8, b0x8, b0x9);
cout << "Player X choose box (1-9): ";
move = OneUntilNine() ;
boxTransfer =
Occupied(move, box1, box2, box3, box4, box5, b0x6, box7, box8, box9) ; if (boxTransfer == 1)
box1 = 'X';