/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func invertTree(root *TreeNode) *TreeNode {
    if root != nil {
        invertTree(root.Right)
        invertTree(root.Left)
        var temp *TreeNode
        temp = root.Right
        root.Right = root.Left
        root.Left = temp
    }
    return root
}