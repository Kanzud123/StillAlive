//#ifndef iGraphics.h_H_INCLUDED
//#define iGraphics.h_H_INCLUDED

#include "iGraphics.h"
#include "music.h"
#include "pic.h"
#include "fn.h"
#include "score.h"


void saveGame(){
	FILE *get = fopen("saveGame.txt", "w");
	fprintf(get,"%d %d %d %d %d %d",charX,charY,RandomEnemyTree[1].tree_x,RandomEnemyTree[1].tree_y,life,xxx);
	fclose(get);
}

void loadGame(){

	FILE *fpp = fopen("saveGame.txt", "r");

        while(fscanf(fpp, "%d %d %d %d %d %d", &charX, &charY,&RandomEnemyTree[TREESNUMBER].tree_x,&RandomEnemyTree[TREESNUMBER].tree_y,&life,&xxx) != EOF)
        {
            
        }

        fclose(fpp);
}


