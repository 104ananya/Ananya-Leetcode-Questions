# Sum of Leaf Nodes
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree of size&nbsp;<strong style="user-select: auto;">N</strong>. The task is to complete the function&nbsp;<strong style="user-select: auto;">sumLeaf()</strong>, that should return the sum of all the leaf nodes of the given binary tree.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which containing the number of edges (between two nodes) in the tree. Next line contains N pairs (considering <strong style="user-select: auto;">a</strong> and <strong style="user-select: auto;">b</strong>) with a '<strong style="user-select: auto;">L</strong>' (means node b on left of a) or '<strong style="user-select: auto;">R</strong>' (means node b on right of a) after a and b.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
For each testcase, there will be a single line containing the sum of all leaf nodes in the tree.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">User Task: </strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">sumLeaf</strong>() which takes root reference as argument and returns the sum of all leaf nodes.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= T &lt;= 100<br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:<br style="user-select: auto;">
Input:</strong><br style="user-select: auto;">
2<br style="user-select: auto;">
2<br style="user-select: auto;">
1 2 L 1 3 R<br style="user-select: auto;">
5<br style="user-select: auto;">
10 20 L 10 30 R 20 40 L 20 60 R 30 90 L</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
5<br style="user-select: auto;">
190</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:<br style="user-select: auto;">
Testcase 1: </strong>Leaf nodes in the tree are 2 and 3, and their sum is 5.</span><br style="user-select: auto;">
&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>