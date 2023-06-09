/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int maxdepth(TreeNode<int>*root,int &diameter)
{
    if(root==NULL)return 0;
    int h1=maxdepth(root->left,diameter);
    int h2=maxdepth(root->right,diameter);

    diameter=max(diameter,h1+h2);
    return 1+max(h1,h2);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	int diameter=0;
    maxdepth(root,diameter);
    return diameter;
}
