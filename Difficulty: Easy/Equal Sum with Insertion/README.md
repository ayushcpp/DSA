<h2><a href="https://www.geeksforgeeks.org/problems/equal-sums4801/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks">Equal Sum with Insertion</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given an array <strong>arr[]</strong> of positive integers. Find the smallest non-negative integer <strong>x </strong>that can be inserted between any two elements of the array such that the sum of the elements in the subarray before x is equal to the sum of the elements in the subarray after x, with x being included in either of the two subarrays.</span></p>
<p><span style="font-size: 14pt;">Return a list containing three integers:</span></p>
<ol>
<li><span style="font-size: 14pt;">The smallest non-negative integer x that can be inserted.</span></li>
<li><span style="font-size: 14pt;">The position (1-indexed) where x is inserted.</span></li>
<li><span style="font-size: 14pt;">A flag indicating whether x was added to the first subarray (1) or the second subarray (2).&nbsp;<br></span></li>
</ol>
<p><span style="font-size: 14pt;"><strong>Note:</strong>&nbsp;</span><span style="font-size: 18.6667px;">If the returned answer is correct, the driver code will print true, otherwise, it will print false.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [3, 2, 1, 5, 7, 8]
<strong>Output:</strong> [4, 5, 1]
<strong>Explanation:</strong> The smallest possible integer x = 4 can be inserted between 5 and 7, making the subarrays:
First subarray: [3, 2, 1, 5, 4] with sum = 15.
Second subarray: [7, 8] with sum = 15.
x is inserted at position 5 and included in the first subarray.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [9, 5, 1, 2, 0]<strong>
Output: </strong>[1, 2, 2]<strong>
Explanation: </strong>The smallest possible integer x = 1 can be inserted between 9 and 5, making the subarrays:
First subarray: [9] with sum = 9.
Second subarray: [1, 5, 1, 2, 0] with sum = 9.
x is inserted at position 2 and included in the second subarray.<br></span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:<br></strong>2 ≤ arr.size() ≤ 10<sup>6<br></sup>0 ≤ arr[i] ≤ 10<sup>3</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;