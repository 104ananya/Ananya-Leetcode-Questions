# Extreme nodes in alternate order
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary tree, print nodes of extreme corners of each level but in alternate order.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example:<br style="user-select: auto;">
<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/extremeNode.png" style="height: 302px; width: 600px; user-select: auto;" class="img-responsive"></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">For the above tree, the output is</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">1 2 7 8 31</strong><br style="user-select: auto;">
– print rightmost node of 1st level<br style="user-select: auto;">
– print leftmost node of 2nd level<br style="user-select: auto;">
– print rightmost node of 3rd level<br style="user-select: auto;">
– print leftmost node of 4th level<br style="user-select: auto;">
– print rightmost node of 5th level</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
&nbsp;      </strong>1
&nbsp;    /  \
&nbsp;   2    3<strong style="user-select: auto;">
Output: </strong>1 2
<strong style="user-select: auto;">Explanation: </strong>This represents a tree
with 3 nodes and 2 edges where root
is 1, left child of 1 is 3 and
right child of 1 is 2.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't have to take any input. Just complete the&nbsp;function<strong style="user-select: auto;">&nbsp;ExtremeNodes()&nbsp;</strong>that takes root&nbsp;<strong style="user-select: auto;">node&nbsp;</strong>as&nbsp;<strong style="user-select: auto;">paramter&nbsp;&nbsp;</strong>and return the answer (as vector in&nbsp;<strong style="user-select: auto;">cpp,&nbsp;</strong>as ArrayList in&nbsp;<strong style="user-select: auto;">Java,&nbsp;</strong>as list in python)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ Number of nodes ≤ 100<br style="user-select: auto;">
1 ≤ Data of a node ≤ 1000</span></p>
 <p style="user-select: auto;"></p>
            </div>