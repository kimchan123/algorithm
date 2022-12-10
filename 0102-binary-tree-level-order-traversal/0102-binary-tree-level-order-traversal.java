/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    List<List<Integer>> answer = new ArrayList<>();
    
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> queue = new LinkedList<>();
        
        if (root == null) {
            return answer;
        }    
        
        queue.offer(root);
        
        while (!queue.isEmpty()) {
            List<Integer> temp = new ArrayList<>();
            int size = queue.size();
            for (int i=0; i<size; i++) {
                TreeNode target = queue.poll();
                temp.add(target.val);
                
                if (target.left != null) {
                    queue.offer(target.left);
                }
                
                if (target.right != null) {
                    queue.offer(target.right);
                }
            }
            
            answer.add(temp);
        }
        
        return answer;
    }
}