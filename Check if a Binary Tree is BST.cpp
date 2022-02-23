/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
#include <climits>
bool isBST(BinaryTreeNode<int> *root ,int  min = INT_MIN , int max = INT_MAX) {
	// Base Case :
    if(root==NULL){
        return true;
    }
    if(root->data < min || root->data > max ){
        return false;
    }
    bool isLeftOk = isBST(root->left , min , root->data - 1);
    bool isRightOk = isBST(root->right , root->data , max);
    return isLeftOk && isRightOk;
}
