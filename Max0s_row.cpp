//Find index of the row containing maximum number of 0’s in a binary matrix and it is fixed all 1s come before 0s

#include <iostream>
#define COL 6
#define ROW 6

using namespace std;

int main()
{
    int arr[ROW][COL]= {
                     {1,1,1,1,0,0},
                     {1,1,0,0,0,0},
                     {1,0,0,0,0,0},
                     {1,1,1,1,0,0},
                     {1,1,1,1,1,1}
                     {1,0,0,0,0,0}
                     };
                     
    int rownum;
    int i = 0, j = COL-1;
    while(i<ROW && j>=0)
    {
      if(arr[i][j]==0)
      {
        j--;
        rownum=i;}
      else
      i++;
    }
    printf("%d",rownum);
    getch();
    return 0;
