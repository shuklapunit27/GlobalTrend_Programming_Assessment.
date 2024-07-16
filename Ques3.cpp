    int maxPathSum(TreeNode *root) {
        maxSum=INT_MIN;
        maxGain(root);
        return maxSum;
    }
    int maxSum;
    int maxGain(TreeNode *node) {
        if(!node){ 
           return 0;
        }
        int leftGain=max(maxGain(node->left),0);
        int rightGain=max(maxGain(node->right),0);
        int priceNewpath=node->val+leftGain+rightGain;
        maxSum=max(maxSum,priceNewpath);
        return node->val+max(leftGain,rightGain);
    }
};
