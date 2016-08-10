// FlattenBiTreeToLinkList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"CreateBiTree.h"
#include"FlattenBiTreeToLinkList.h"
#include"BiTreeOutpuByLevel.h"
using namespace std;
int main()
{
	CreateBiTree CBT;
	TreeNode* root = CBT.CreateBiTreeByLevel();
	FlattenBiTreeToLinkList Flatten;
	Flatten.flatten(root);
	BiTreeOutputByLevel BTOPL;
	BTOPL.LevelOutput(root);

    return 0;
}

