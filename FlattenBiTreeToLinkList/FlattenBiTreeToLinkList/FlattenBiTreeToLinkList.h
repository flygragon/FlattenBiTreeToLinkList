#pragma once
#include"TreeNode.h"

class FlattenBiTreeToLinkList {
private:
	void Flatten(TreeNode* &root) {
		if (root) {
			TreeNode* right_temp = root->right;
			if (root->left) {
				root->right = root->left;
				root->left = nullptr;
				root = root->right;
				Flatten(root);
			}
			if (right_temp) {
				root->right = right_temp;
				root->left = nullptr;
				root = root->right;
				Flatten(root);
			}
			right_temp = nullptr;
		}
	}

public:
	void flatten(TreeNode* root) {
		TreeNode* temp = root;
		Flatten(temp);
		temp = nullptr;
	}
};