public class Leetcode_938 {
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

  // First Method
    class Solution1 {
        public int rangeSumBST(TreeNode root, int low, int high) {
            pir(root, low, high);
            return sum;
        }

        int sum = 0;

        public void pir(TreeNode root, int low, int high) {
            if (root == null)
                return;

            pir(root.left, low, high);

            if (root.val >= low && root.val <= high)
                sum += root.val;

            pir(root.right, low, high);
        }
    }

  // 2nd Method
    class Solution2 {
        public int rangeSumBST(TreeNode root, int low, int high) {
           if(root == null) return 0;
           
           if(root.val<low) return rangeSumBST(root.right,low,high);
           
           if(root.val>=low && root.val<=high) 
               return rangeSumBST(root.left,low,high)+root.val+rangeSumBST(root.right,low,high);
           
           if(root.val>high) return rangeSumBST(root.left,low,high);
           return 0;
       }
   }
}
