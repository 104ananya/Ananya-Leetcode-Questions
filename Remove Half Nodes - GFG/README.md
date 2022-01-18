# Remove Half Nodes
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given A binary Tree. Your task is to remove all the half nodes (which has only one child).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
&nbsp;        7
&nbsp;      /   \
&nbsp;     7     8
&nbsp;    / 
&nbsp;   2<strong style="user-select: auto;">
Output: </strong>2 7 8&nbsp;</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
&nbsp;        2
&nbsp;      /   \
&nbsp;     7     5
&nbsp;      \      \
&nbsp;       9      1
&nbsp;      /  \
&nbsp;     11   4<strong style="user-select: auto;">
Output: </strong>11 9 4 2 1 </span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size: 18px; user-select: auto;">&nbsp;<strong style="user-select: auto;">RemoveHalfNodes()</strong> which takes the&nbsp;root node of the tree as input&nbsp;and returns the root node of the modified tree after removing all the half nodes, ie the ones having just a single child node. (The inorder traversal of the returned tree is printed by the driver's code.)<br style="user-select: auto;">
For example consider the below tree.<br style="user-select: auto;">
<img alt="" src="https://www.cdn.geeksforgeeks.org/wp-content/uploads/maxMin.png" style="height: 310px; width: 311px; user-select: auto;" class="img-responsive"></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Nodes 7, 5 and 9 are half nodes as one of their child is Null. We need to remove all such half nodes and return the root pointer of following new tree.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the Binary Tree).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=Number of nodes&lt;=10<sup style="user-select: auto;">4</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 14px; user-select: auto;"><strong style="user-select: auto;">Note:</strong>The <strong style="user-select: auto;">Input/Ouput</strong> format and <strong style="user-select: auto;">Example</strong> given are used for system's internal purpose, and should be used by a user for <strong style="user-select: auto;">Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p style="user-select: auto;"></p>
            </div>