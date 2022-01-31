# Cousins of a given node
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary tree and a node, print all cousins of given node in order of their appearance. Note that siblings should not be printed.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input : </span></strong>
<span style="font-size: 18px; user-select: auto;">             1
           /   \
          2     3
        /   \  /  \
       4    5  6   7</span>

<span style="font-size: 18px; user-select: auto;">Given node : 5</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output :</strong> 6 7</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation :</span></strong>
<span style="font-size: 18px; user-select: auto;">Nodes 6 and 7 are on the same level 
as 5 and have different parents.</span>

</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2 :</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input :</span>
</strong><span style="font-size: 18px; user-select: auto;">         9</span>
<span style="font-size: 18px; user-select: auto;">        /</span>
<span style="font-size: 18px; user-select: auto;">       5</span>
<span style="font-size: 18px; user-select: auto;">Given node : 5</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output :</strong> -1</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Explanation :</span></strong>
<span style="font-size: 18px; user-select: auto;">There no other nodes than 5 in the same level.</span>
</pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task :</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't have to read input or print anything. Your task is to complete the function<strong style="user-select: auto;"> printCousins() </strong>which takes the root node of the tree and&nbsp;the node whose cousins need to be found,&nbsp;as input and returns a list containing the cousins of the given node in order of their appearance in the tree. If there is no cousin of the given node, return<strong style="user-select: auto;"> -1</strong> as the first element of the list.</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity : </strong>O(n)</span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space : </strong>O(n)</span></div>

<div style="user-select: auto;">&nbsp;</div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints :</strong></span></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= n &lt;=10^5</span></div>
 <p style="user-select: auto;"></p>
            </div>