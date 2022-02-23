/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// Base Case :
    if(root==NULL){
        return false;
    }
    // Small  Calculation :
    bool ans = false;
    if(root->data == k){
        return true;
    }
    // K is less than root's data Search in Left sub tree
    if(root->data > k ) {
      ans = searchInBST(root->left,k);
    }
    // K is Greater than root's data Search in Right sub tree
    if(root->data < k){
       ans =  searchInBST(root->right,k);
    }
    return ans;
}
