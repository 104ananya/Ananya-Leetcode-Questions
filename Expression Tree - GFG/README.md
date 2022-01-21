# Expression Tree
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a full binary expression tree consisting of basic binary operators&nbsp;(+ , – ,*,&nbsp;/)&nbsp;and some integers, Your task is to evaluate the expression tree.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
              +
           /     \
          *       -
        /  \    /   \
       5    4  100  20 </span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> 100</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong>
((5 * 4) + (100 - 20)) = 100</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
            -
          /   \
         4     7</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> -3</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong>
4 - 7 = -3</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task: &nbsp;</strong><br style="user-select: auto;">
You dont need to read input or print anything. Complete the function <strong style="user-select: auto;">evalTree()</strong> which takes root node as input parameter and returns an integer denoting the result obtained by simplifying the expression tree.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity: </strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(height of tree)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 500</span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>