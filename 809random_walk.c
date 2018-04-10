/**Write a program that generates a 'random walk' across a 10x10 array. The array contains '.'s initially.
 * Program must randomly 'walk' from element to element, always up, down, left or right by one element.
 * Elements visited by the program are labeled A to Z in the order visited. No revisit allowed. i.e all
 * A-Z must be printed.
 * Desired output:
 * A  .  .  .  .  .  .  .  .  .
 * B  C  D  .  .  .  .  .  .  .
 * .  F  E  .  .  .  .  .  .  .
 * H  G  .  .  .  .  .  .  .  .
 * I  .  .  .  .  .  .  .  .  .
 * J  .  .  .  .  .  .  .  Z  .
 * K  .  .  R  S  T  U  V  Y  .
 * L  M  P  Q  .  .  .  W  X  .
 * .  N  O  .  .  .  .  .  .  .
 * .  .  .  .  .  .  .  .  .  .
**/





#include <stdio.h>

char move();

int main()
{
    printf("----------Hello World !----------\n");
	
    char map[10][10];
    char dir;
    int j,k,y,x;
    int c_num;
    
    srand ((unsigned) time(NULL));
    
    //make the map
    for(j=0;j<10;j++) {
        for(k=0;k<10;k++) {
            map[j][k]='.';
        }
    }
    
    j=0;
    k=0;
    
    map[j][k]=65;
    
    for(c_num=66;c_num<91;c_num++) {
        
        dir = move(j,k);

        
        switch(dir) {
            case 'u':
            j = j-1;
            map[j][k] = c_num;
            break;
            case 'l':
            k = k-1;
            map[j][k] = c_num;
            break;
            case 'd':
            j = j+1;
            map[j][k] = c_num;
            break;
            case 'r':
            k = k+1;
            map[j][k] = c_num;
            break;
            default:
            break;
        }
    }
    
    
        for(j=0;j<10;j++) {
        for(k=0;k<10;k++) {
            printf("\t%c",map[j][k]);
            if(k==9) {
                printf("\n");
            }
        }
    }
}


char move(int j, int k) {
    
    char d;
    int r;
    
    char C00[] = {'d','r'};           //movements if(j==0 && k==0)
    char C09[] = {'l','d'};           //  if(j==0 && k==9)
    char C90[] = {'u','r'};           //  if(j==9 && k==0)
    char C99[] = {'u','l'};           //  if(j==9 && k==9)
    char E00[] = {'l','d','r'};       //  if(j==0 && k>0 && k<9)
    char E90[] = {'u','l','r'};       //  if(j==9 && k>0 && k<9)
    char E09[] = {'u','d','r'};       //  if(j>0 && j<9 && k==0)
    char E99[] = {'u','l','d'};       //  if(j>0 && j<9 && k==9)
    char MID[] = {'u','l','d','r'};   //  if(j>0 && j<9 && k>0 && k<9)
    
    if(j==0 && k==0) {    //random direction for respective *if*
        r = rand()%2;
        d = C00[r];
    }
    
    else if(j==0 && k==9) {
        r = rand()%2;
        d = C09[r];
    }
    
    else if(j==9 && k==0) {
        r = rand()%2;
        d = C90[r];
    }
    
    else if(j==9 && k==9) {
        r = rand()%2;
        d = C99[r];
    }
    
    else if(j==0 && k>0 && k<9) {
        r = rand()%3;
        d = E00[r];
    }
    
    else if(j==9 && k>0 && k<9) {
        r = rand()%3;
        d = E90[r];
    }
    
    else if(j>0 && j<9 && k==0) {
        r = rand()%3;
        d = E09[r];
    }
    
    else if(j>0 && j<9 && k==9) {
        r = rand()%3;
        d = E99[r];
    }
    
    else if(j>0 && j<9 && k>0 && k<9) {
        r = rand()%4;
        d = MID[r];
    }
    
    return d;
}