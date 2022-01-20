# Vertical sum
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree, find vertical sum of the nodes that are in same vertical line. Print all sums through different vertical lines starting from left-most vertical line to right-most vertical line.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
     <span style="font-size: 18px; user-select: auto;">  1
    /   \
  2      3
 / \    / \
4   5  6   7
<strong style="user-select: auto;">Output: 
Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">The tree has 5 vertical lines
Vertical-Line-1 has only one node
4 =&gt; vertical sum is 4
Vertical-Line-2: has only one node
2=&gt; vertical sum is 2
Vertical-Line-3: has three nodes:
1,5,6 =&gt; vertical sum is 1+5+6 = 12
Vertical-Line-4: has only one node 3
=&gt; vertical sum is 3
Vertical-Line-5: has only one node 7
=&gt; vertical sum is 7</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to take input. Just complete the function<strong style="user-select: auto;">&nbsp;verticalSum()&nbsp;</strong>that takes <strong style="user-select: auto;">root </strong>node of the tree<strong style="user-select: auto;">&nbsp;</strong>as parameter and returns an array containing&nbsp;the vertical sum of tree from left to right.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=Number of nodes&lt;=1000</span></p>
 <p style="user-select: auto;"></p>
            </div>