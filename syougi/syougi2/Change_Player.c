#include"Common.h"

//	手番を変更する関数
void Change_Player(int *which){
	*which = ((*which) + 1) % 2;
}