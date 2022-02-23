/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
/*श्री राम जानकी बैठे हैं मेरे सीने में*/
// K1 = min , k2 = max
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	// Base Case :
    if(root==NULL){
        return ;
    }
    //
    if(root->data > k2){
       elementsInRangeK1K2(root->left,k1,k2);  
    }
     if(root->data <  k1){
     elementsInRangeK1K2(root->right,k1,k2);
    }
    // Inorder Fashion :
    if(root->data >= k1 && root->data <= k2){
      elementsInRangeK1K2(root->left,k1,k2);
      cout<<root->data <<" ";
      elementsInRangeK1K2(root->right,k1,k2);
    }
   
    
}
