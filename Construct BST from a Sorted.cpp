/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
/*Solved in 1 go w/o any help or understanding with copy , writing */
BinaryTreeNode<int>* constructTree1(int *input, int si , int ei) {
	// Write your code here
    if(si>ei){
        return NULL;
    }
    //
    int mid = (si + ei)/2;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]);
    BinaryTreeNode<int>* leftSubTree = constructTree1(input,si,mid - 1);
    BinaryTreeNode<int>* rightSubTree = constructTree1(input,mid + 1,ei);
    // Connect both subtree with root & return address of root 
    root->left = leftSubTree;
    root->right = rightSubTree;
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) {
	// Calling another funtion with Extended properties : 
    int si = 0;
    int ei = n - 1 ;
   return constructTree1(input,si , ei);
}
