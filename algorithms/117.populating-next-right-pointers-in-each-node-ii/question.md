Given a binary tree


struct TreeLinkNode {
  TreeLinkNode *left;
  TreeLinkNode *right;
  TreeLinkNode *next;
}


Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.

Initially, all next pointers are set to NULL.

Note:


	You may only use constant extra space.
	Recursive approach is fine, implicit stack space does not count as extra space for this problem.


Example:

Given the following binary tree,


     1
   /  \
  2    3
 / \    \
4   5    7


After calling your function, the tree should look like:


     1 -&gt; NULL
   /  \
  2 -&gt; 3 -&gt; NULL
 / \    \
4-&gt; 5 -&gt; 7 -&gt; NULL

