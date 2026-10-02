#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    char c;
    int points=100;
    char maze[5][5]={
        {'S','#','#','#','D'},
        {'.','D','.','.','.'},
        {'.','.','.','D','.'},
        {'#','#','D','#','.'},
        {'#','#','#','#','E'}
    };
    char maze1[5][5]={
        {'S','?','?','?','?'},
        {'?','?','?','?','?'},
        {'?','?','?','?','?'},
        {'?','?','?','?','?'},
        {'?','?','?','?','E'}
    };
    printf("\n+---+---+---+---+---+\n");
    for(int i=0;i<5;i++){
        printf("|");
        for(int j=0;j<5;j++){
            printf("%2c",maze1[i][j]);
            if(j!=4) printf(" |");
            else printf(" |\n");
        }
        printf("+---+---+---+---+---+\n");
    }
    printf("\n");
    int l=0,m=0;
    for(int k=0;k<25;k++){
        printf("ENTER:");
        scanf(" %c",&c);
        if(c=='S') l+=1;
        else if(c=='W') l-=1;
        else if(c=='D') m+=1;
        else if(c=='A') m-=1;
        else printf("Wrong key entered\n");
        if(l<0||l>4||m<0||m>4){
            printf("You cannot move outside the maze!\n");
            if(c=='S') l-=1;
            else if(c=='W') l+=1;
            else if(c=='D') m-=1;
            else if(c=='A') m+=1;
            continue;
        }
        if(maze[l][m]=='.') printf("safe\n");
        else if(maze[l][m]=='#'){
            points-=5;
            printf("Current Points:%d\n",points);
            if(c=='S') l-=1;
            else if(c=='W') l+=1;
            else if(c=='D') m-=1;
            else if(c=='A') m+=1;
        }
        else if(maze[l][m]=='D'){
            printf("Danger!!\n");
            points-=10;
            printf("Current Points:%d",points);
            if(c=='S') l-=1;
            else if(c=='W') l+=1;
            else if(c=='D') m-=1;
            else if(c=='A') m+=1;
        }
        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==l&&j==m){
                maze1[i][j]='P';
                if(i==4&&j==4){
                    if(points>=60){
                    printf("YOU WIN!!!\n\n");}
                    else printf("your points are less than 60\n YOU LOST!!!\n\n");
                    return 0;
                    }
        }
    }}
    printf("\n+---+---+---+---+---+\n");
    for(int i=0;i<5;i++){
        printf("|");
        for(int j=0;j<5;j++){
            printf("%2c",maze1[i][j]);
            if(j!=4) printf(" |");
            else printf(" |\n");
        }
        printf("+---+---+---+---+---+\n");
    }
    printf("\n");
    }
    return 0;
}