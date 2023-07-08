#include<stdio.h>
#include<windows.h>
main(){
/*
    //for printing a simple plain text
    printf("Hello world");

    //for printing the value of a variable
    float pi = 3.14;
    // printf("%f",pi);
    //for printing in next line use \n escape sequence
    printf("\n%f",pi);

    //for taking input from user use scanf()
    int number;
    printf("\n");
    scanf("%d",&number);
*/
  //simple program for taking input from user and printing it on the center of display
  int answer;
  scanf("%d",&answer);
  COORD cordinates;
  cordinates.X = 60;
  cordinates.Y = 16;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cordinates);
  printf("%d",answer);

}
