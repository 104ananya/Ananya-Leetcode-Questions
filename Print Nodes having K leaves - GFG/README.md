# Print Nodes having K leaves
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary tree and a integer value <strong style="user-select: auto;">K</strong>, the task is to <strong style="user-select: auto;">find all nodes</strong> data in given binary tree<strong style="user-select: auto;"> having exactly K leaves </strong>in <strong style="user-select: auto;">sub-tree rooted with them</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">NOTE:&nbsp;</strong>Nodes should be printed in the order in which they appear in postorder traversal.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 1
&nbsp;     0
&nbsp;   /   \
&nbsp;  1     2<strong style="user-select: auto;">
Output: </strong>-1<strong style="user-select: auto;">
Explanation: </strong>There&nbsp;is no node in this
tree which has one leaf in the sub tree
below it.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 2
&nbsp;         0
&nbsp;       /   \
&nbsp;      1     2
&nbsp;          /  
&nbsp;         4
&nbsp;       /   \
&nbsp;      5     9<strong style="user-select: auto;">
Output: </strong>4 2<strong style="user-select: auto;">
Explanation: </strong>Nodes with data 2 and 4, have
2 leaves in the subtree below it.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Just complete the function <strong style="user-select: auto;">btWithKleaves()&nbsp;</strong>and returns the answer (as a vector in&nbsp;<strong style="user-select: auto;">cpp,&nbsp;</strong>as a ArrayList in&nbsp;<strong style="user-select: auto;">java&nbsp;</strong>and as list in&nbsp;<strong style="user-select: auto;">python)</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>If no node is found the list returned should contain only one value -1.<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 1000<br style="user-select: auto;">
1 &lt;= K &lt;= 1000<br style="user-select: auto;">
1 &lt;= value of nodes &lt;= 10000</span></p>

<p style="user-select: auto;"><span style="font-size: 14px; user-select: auto;"><strong style="user-select: auto;">Note:</strong>The <strong style="user-select: auto;">Input/Ouput</strong> format and <strong style="user-select: auto;">Example</strong> given are used for system's internal purpose, and should be used by a user for <strong style="user-select: auto;">Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p style="user-select: auto;"></p>
            </div>