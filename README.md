## Leetcode

### 总结 (updating)

- ![#1589F0](https://placehold.it/15/008000/000000?text=+) `Easy`
- ![#c5f015](https://placehold.it/15/F4D03F/000000?text=+) `Medium`
- ![#f03c15](https://placehold.it/15/f03c15/000000?text=+) `Hard`

|#|Title|Solution|
|---|---|---|
|1|Two Sum|用unordered_map，降至O(n)|
|2|Add Two Numbers|一个变量存储进位，当l1,l2,进位非均为空时，继续计算|
|3|Longest Substring Without Repeating Characters|用一个数组存储字符出现的次数。if为0，则没出现过，end++; else出现过，start++。每步操作都要修改数组|
|**4**|Median of Two Sorted Arrays|**二分法。** 确定了i，就能确定第二个数组里j的位置，在比较大小就可以决定向左还是向右。或者写一个辅助函数，寻找第k个元素，递归辅助函数也可以做|
|5|Longest Palindromic Substring||
|6|ZigZag Conversion||
|7|Reverse Integer||
|8|String to Integer (atoi)||
|9|Palindrome Number|设置一个sum来存储x从右边吐出数字的倒序，直到sum > x，相当于折半。如果此时两者相等或者为10倍关系，则返回true|
|10|Regular Expression Matching|**dp.** 矩阵来存结果，返回最后一个元素。考虑仔细\*的case，就非常简单|
|11|Container With Most Water|O(n2)降至O(n)。由外而内，不断替换短边。因为宽度在减少，要找到更大的必须高度增加。而只有替换短边，才可能高度增加。|
|12|Integer to Roman||
|13|Roman to Integer||
|14|Longest Common Prefix||
|15|3Sum|时间复杂度大于O(n2)。可以直接sort，然后每个外层循环固定游标1，游标2在可达到最左侧（游标1右1位），游标3在最右侧。根据三者和与目标值（0）的大小关系，决定是2进，还是3退。注意如果有重复元素，需要多加一个循环来跳过。|
|16|3Sum Closest|同15。通过sort减少一层时间复杂度。通过和与目标值的大小关系决定2进或3退|
|17|Letter Combinations of a Phone Number|常规操作,vector即可|
|18|4Sum|同15。通过sort减少一层时间复杂度。通过和与目标值的大小关系决定3进或4退|
|19|Remove Nth Node From End of List|**链表倒数。** 设置快慢2个游标，快的先跑差速步，然后同时跑即可|
|20|Valid Parentheses|用stack，左进，右按条件匹配，出。简单|
|21|Merge Two Sorted Lists|递归。比较2个链表第1个node大小，取小的，递归剩余|
|22|Generate Parentheses|递归。每次记录剩余左括号和右括号（或者较左括号多）的数量，依此确定是否终止|
|24|Swap Nodes in Pairs|new一个新的头。很适合这种头node会变的情况|
|25|Reverse Nodes in k-Group|**链表反转。** 递归。只要标记本次处理和下次处理的head，就可以将本次head逐一推向本次队尾，而不需要记录本次队尾（记录队尾是链表最讨厌的操作）。本次操作只处理本次K个node。后面的node递归操作，返回一个处理后的head，由本次操作的最后一个node指向|
|26|Remove Duplicates from Sorted Array|比较相邻的两个元素，数总共有多少个重复元素。不相等时，把该元素放入前面不重复对应的地方|
|27|Remove Element||
|28|Implement strStr()|很直接。i遍历所有substring，j逐位比较|
|31|Next Permutation|反向找出第一个较右边元素更小的点i，然后从它右边元素中找出一个比i大的所有点中最小的点j，交换i，j，这样能够确保整体变大，一点点。然后将原来i位置右边的所有元素按照升序排列|
|33|Search in Rotated Sorted Array|**二分法。** 注意边界|
|35|Search Insert Position|**二分法**|
|36|Valid Sudoku|用3个9\*9的矩阵来记录9行、9列和9块中是否已经出现1~9。出现了返回false，没出现置为1|
|37|Sudoku Solver|**深搜。** 写一个函数用来检查是否valid。遇到空位，1~9轮流试。如果找到了，标记一个bool变量为true，并且之后不再找|
|38|Count and Say|从1出发，一步步计数知道目标值|
|39|Combination Sum|**深搜。** 全局变量存结果。递归中循环，找完了用pop退，直到循环结束|
|40|Combination Sum II|**深搜。** 每个元素只能使用一次，因此需要加一句话来跳过重复元素。如果v.back()（意味着我已经使用了这个元素）与之前的几个元素相等，则跳过这几个元素|
|**42**|Trapping Rain Water|**左右边界。** 两个对向循环。对于每个元素，找到左边和右边最高的墙壁，两者中去较小值，这就是在这个点上，能储存水的高度|
|43|Multiply Strings|双重循环遍历两个string，逐位相乘，累加在result中对应的位置|
|**44**|Wildcard Matching|**矩阵中寻找斜向路径。** 用矩阵dp能做，但是慢，空间需求大。可以用斜向路径代替矩阵，每次根据情况，决定走i还是j，或者一起。遇到\*会有分叉，但是只需要记录最后一个\*的地方就可以，因为它会使得向下的一整列都是true，就会覆盖之前的结果，也就是之前\*也会到达这个\*会考虑的地方。因此不需要递归，巧妙|
|45|Jump Game II|双重循环，外层计算步数，内层比较这一步所能走到的点中，哪一步最远，这一步就落脚在哪里|
|46|Permutations|BFS。层数就是元素个数，从1开始累加至n。每加一个元素，都用内层循环将其插空放置。每个结果都放在queue中|
|**47**|Permutations II|细节很多：先要sort，确保待排列子vector一直sorted，还要vector传值，只swap一次。我还是没想明白，等回头再看|
|48|Rotate Image|方阵一共4条轴：水平的平分线以及两条对角线。沿不同的轴进行不同的奇偶次镜像翻转，可以得到不同的结果|
|49|Group Anagrams|判断2个string是否anagrams，只能通过sort了，这最快|
|50|Pow(x, n)|**递归。** 很多种方法。处理好0，INT_MIN和负数就可以。递归中写清楚幂为奇数或偶数的情况|
|51|N-Queens|**深搜。** 嵌套循环。另写一个函数检查是否valid。类似数独|
|52|N-Queens II|**深搜。** 同上|
|53|Maximum Subarray|**结束于此，向回看。** 遍历整个vector，每次检查以当前点结束的subarray是否比之前的结果更优。这是O(n2)降至O(n)的好方法|
|54|Spiral Matrix|注意边界的变化即可|
|55|Jump Game|在循环中不断更新能达到的最远步数，最远步数也是这个循环不断变化的边界|
|56|Merge Intervals|先sort，然后逐一判断新进来的interval与上一个是否有重叠|
|57|Insert Interval||
|58|Length of Last Word|这种题属于浪费时间|
|59|Spiral Matrix II|注意边界的变化即可|
|60|Permutation Sequence|p为n!，并且不断退位。不断用k除以p，可以逐位确定结果|
|61|Rotate List|差速指针找到断点，尾部相连，断点断开|
|62|Unique Paths|**[i][j] = f([i-1][j], [i][j-1])。** 用一个矩阵来存结果，顶边和最左列都为1，内部元素为相邻上方和左边元素之和。最后返回右下角的元素|
|63|Unique Paths II|**[i][j] = f([i-1][j], [i][j-1])。** 用一个上边左边多了一行一列的矩阵来存结果，这样的好处是，不用单独初始化第一行和第一列。注意输入矩阵中[i-1][j-1]对应新矩阵[i][j]|
|64|Minimum Path Sum|**[i][j] = f([i-1][j], [i][j-1])。**+= 上方和左边元素取较小值|
|65|Valid Number|竟然真的有这么垃圾的hard题啊|
|66|Plus One|直接倒序+1，注意进位以及进位导致多一位的问题|
|67|Add Binary||
|68|Text Justification|很直接。检查每行能放几个，另写一个函数拼成每一行的string|
|69|Sqrt(x)|牛顿迭代。每步更新为(res + x / res) /2。注意溢出，可以用long|
|70|Climbing Stairs|**通项公式。** f(n) = f(n-1) + f(n-2)|
|71|Simplify Path|区分好各种可能出现的substring形式即可|
|**72**|Edit Distance|**[i][j] = f([i-1][j], [i][j-1])。** 空间换时间。用一个矩阵存储，其中元素表示所在行列数对应的2个string相互转换需要的步数|
|**73**|Set Matrix Zeroes|用首行和首列的元素来储存这一行/列是否应该置0。所以对于第一行和第一列来说，需要额外一个变量来储存首行/首列的状态。剩下的首列/首行自然放在[0][0]中|
|74|Search a 2D Matrix|**二分法。** 左上至右下严格递增，就可以将二维矩阵看作一个一维数组，通过求商和求余，将一维的序号（我们给它的）转换为题目要求的二维坐标|
|**76**|Minimum Window Substring|**滑窗双指针。** 见模板。巧妙的地方是，如果s和t都有某个元素，而s中的比t中的多，那么直接可以handle这个元素的计数。因为所有元素count永远 >=0,而某个元素的计数可以 <0（表示此时substring中多出此元素多出几次）|
|77|Combinations|**深搜。** 递归中套循环，满足条件就push进res。然后pop，继续寻找|
|78|Subsets|**广搜。** 初始在res中放一个空vector，每次取到一个元素，都将它与res中所有vector复制后结合，再放回res。总共有2的幂次个|
|79|Word Search||
|80|Remove Duplicates from Sorted Array II||
|81|Search in Rotated Sorted Array II||
|82|Remove Duplicates from Sorted List II|pre-node，看后面多个node的情况，来决定是自己步进，还是删掉后面的几个节点|
|83|Remove Duplicates from Sorted List|同上。不需要pre-node|
|**84**|Largest Rectangle in Histogram|**左右边界。** 两个对向循环，找到以每个元素为高的左右边界|
|86|Partition List||
|88|Merge Sorted Array|三个指针，从后往前，2个指针比较大小，1个存储。从后往前的原因是不会写到有用的数据，而只会写到分配好的空间里|
|89|Gray Code|找到其中的数学关系，f(n) = g(f(n - 1))。将n-1的结果，翻转，后一半加上pow(2, i-1)，即可|
|90|Subsets II|用map记录每个元素出现几次，然后生成每个元素的res，再将它们进行全组合|
|91|Decode Ways|**通项公式。** f(n) = f(n-1) + f(n-2)|
|92|Reverse Linked List II|**链表反转。** 将要反转的部分中的头node逐一推向tail之后，就不需要原tail指向它，也就避免了链表中最讨厌的问题，记录tail|
|93|Restore IP Addresses|暴力四循环。之后检查每个地址是否合法以及总长度是否满足要求即可|
|94|Binary Tree Inorder Traversal|**树的遍历**|
|95|Unique Binary Search Trees II|**递归。** new一个node，左右子指向左右子vector返回的结果|
|96|Unique Binary Search Trees|**通项公式** f(n)+=f(j)\*f(i-j-1)|
|97|Interleaving String||
|98|Validate Binary Search Tree|**树的遍历**|
|99|Recover Binary Search Tree|**树的遍历。** 找到2个位置不对的点，swap|
|100|Same Tree|**树的遍历。** 递归也快，return cur相等 && 左树相等 && 右树相等|
|101|Symmetric Tree|**递归**|
|102|Binary Tree Level Order Traversal|**广搜。** 树的层级遍历|
|103|Binary Tree Zigzag Level Order Traversal|**广搜。** 树的层级遍历|
|104|Maximum Depth of Binary Tree|**递归。** f(root) = max(f(left), f(right)) + 1|
|105|Construct Binary Tree from Preorder and Inorder Traversal|**树模板。** f(root) = g(f(left), f(right))。分成左右两个sub vector|
|106|Construct Binary Tree from Inorder and Postorder Traversal|**树模板。** f(root) = g(f(left), f(right))|
|107|Binary Tree Level Order Traversal II|直截了当地用queue，转vector，然后reverse，也够快|
|108|Convert Sorted Array to Binary Search Tree|**树模板**|
|109|Convert Sorted List to Binary Search Tree|**树模板**|
|110|Balanced Binary Tree|递归。如果左右高度>0且差<=1，则返回树高，否则返回-1|
|111|Minimum Depth of Binary Tree|递归返回较短边|
|112|Path Sum|递归。左右返回值取或返回|
|113|Path Sum II|**深搜**|
|114|Flatten Binary Tree to Linked List|单循环，不断拼接即可|
|115|Distinct Subsequences||
|119|Pascal's Triangle II|用一个vector即可。从后往前初始化可以再节省一个变量|
|120|Triangle|用一个矩阵来记录|
|121|Best Time to Buy and Sell Stock|**结束于此，向回看。** 找到最小值，比较|
|122|Best Time to Buy and Sell Stock II|记录所有上坡|
|128|Longest Consecutive Sequence|用set，进行对比|
|129|Sum Root to Leaf Numbers|用一个sum记录，符合条件就+=|
|130|Surrounded Regions|从四条边上递归寻找所有没有被包围的点|
|131|Palindrome Partitioning|**深搜**|
|132|Palindrome Partitioning II|**数组dp。** 由之前的substring对称情况决定本位是多少|
|133|Clone Graph|**深搜。** 因为可能会多次遍历到同一个点，所以需要一个map来避免重复，同时记录第一次生成的node地址，往后便利到就拿出来用（不用set的原因）|
|134|Gas Station|从最低点出发即可。寻找最低点|
|135|Candy|不难。找到其中的每个局部最低点。因为其它的每个点的值左右会至少有一个支撑边，所以从左和右各遍历一次，更新其它值，即可|
|136|Single Number|用异或"^="|
|**138**|Copy List with Random Pointer|随机指针麻烦的就在于无法确定位置。可以在每个已经确定相对关系的node后，new一个node，用已知带动未知的点。相对位置确定之后，再将两者分离为2个独立的list|
|**139**|Word Break|类似于jump game. 每次都更新自己能跳到哪里，将那里置true，继续在true里找下一次能跳的地方|
|141|Linked List Cycle|快慢指针即可。因为如果有环，快指针就会出现在后面，因此一定会遇到慢指针|
|142|Linked List Cycle II|快慢指针，先确定是否有循环，再用2个指针，1个继续从交汇的地方出发，另1个从头出发，就会相遇在环的起点。因为这两个起始点相对于环的相位相等|
|143|Reorder List|三步。分半，反转，合并|
|144|Binary Tree Preorder Traversal|**树模板**|
|145|Binary Tree Postorder Traversal|**树模板**|
|147|Insertion Sort List|两个指针，一个遍历，一个定位插入的位置|
|148|Sort List|标准版merge sort，快。函数1分半，返回时调用函数2合并的结果|
|**149**|Max Points on a Line|双层循环遍历所有点，得到所有2个点组成的线的组合。用斜率（需要用到最小公约数）来储存这条直线。因为都过第一个点，所以斜率相等，就在同一条线上。注意一下水平和竖直的线即可|
|150|Evaluate Reverse Polish Notation|后缀表达式当然要用stack|
|151|Reverse Words in a String|stringstream ss(s), ss >> tmp, 是前往后吐出来，新出来的内容加在前面即可|
|152|Maximum Product Subarray|**结束于此，向回看。** 这是一个将O(n2)将为O(n)很好的方法。同时因为有负数，用两个值来记录出现的最大值和最小值。如果当前为负数，则两个值swap|
|153|Find Minimum in Rotated Sorted Array|**二分法**|
|154|Find Minimum in Rotated Sorted Array II|**二分法。** 一个避免重复元素的小技巧是，如果左中右三者相等，那么就可能中间两侧有元素比较小，此时就可以同时将左右往中间缩1|
|155|Min Stack|用2个stack，1个stack正常存，另1个存最小值|
|174|Dungeon Game|**矩阵倒序。** 这是遇到的第一个需要倒序遍历矩阵的题目。因为这个点的结果由未来的点决定。所以反向遍历，返回[0][0]|
|**207**|Course Schedule|拓扑排序。甚至都不需要set或map。用二重vector来存一门课和它*锁住*的课。这样找一门课（有序，用vector就可以不需要map）就可以解禁一层它锁住的课，很好遍历。我们不需要知道是哪门课来解禁的它，只需要计数，计数到0，这门课被完全解禁|
|**208**|Implement Trie (Prefix Tree)|逻辑简单，但是有构造函数的模板，可以看一下|
|211|Add and Search Word - Data structure design|**深搜**|
|**212**|Word Search II|**Trie + 深搜。** 题目要求搜索多个string，可以降低时间复杂度。需要先构建struct Trie，实际上就是一个26叉树。|
|**214**|Shortest Palindrome|**KMP.** 应该是最快的。原问题实际是寻找输入string s的最长对称前缀。将s翻转，拼接于原s后（中间用一个不相关字符隔开），就变成了寻找新字符串最长相等的前后缀。这实际上就是KMP特征向量的最后一位。计算特征向量时，相同则i,j都进，不相同则j退回与i相同的位置或0，i进。注意字符串中的位置对应特征向量的前一位|
|**218**|The Skyline Problem|O(nlgn).关键点只会在矩形的两条边上，处理好这些信息即可。先将输入拆分成独立的垂直边，vector<pair>即可，入边正常，出边可以高度记为负，作为标记。sort，注意可能需要重载comp，否则可能同一个位置有高度相等的出入边时会有多的点，要先入后出。然后用multiset，可以记录有重复的当前x处有的所有矩形，同时利用了heap的性质，能一直拿到最大值。遍历关键点，高度变了就push进去，根据正负来决定加还是删边|
|224|Basic Calculator|用stack。考虑清楚可能出现的char情况，见到（正负反一下即可|
|234|Palindrome Linked List|还是老老实实用stack|
|244|Shortest Word Distance II|用map记录所有string出现的位置。2个string就能通过map拿到2个存放这两个string所有出现位置的vector，然后求最小差值即可|
|227|Basic Calculator II|处理好算符优先级就好。和282一样，多一个变量储存上一个数字|
|251|Flatten 2D Vector|记录移动和结束的向量指针，同时一个变量计行内数即可。hasnext负责换行，每次next都要call它。但是hasnext return值我还没搞懂为什么这样可以过|
|267|Palindrome Permutation II|**深搜**|
|**277**|Find the Celebrity|O(n)就能做。第一遍loop，不断把candidate赋值为被别人认识的那个人。这样一圈下来，前一部分人都认识别人，后一部分人can都不认识，所以都不能做can。再2个循环确认这个can是不是真can即可|
|**282**|Expression Add Operators|**深搜。** 需要**应对运算符优先级不同的小技巧**：需要cur和pre来记录数据。cur代表截至目前直接计算出来的结果，而pre表示上一个数字单元的内容，相当于一个浅栈，如果遇到一个\*,就从cur中回退（减）掉pre，pre和现在的数字相乘，放入cur和pre|
|**296**|Best Meeting Point|二维问题一维化。因为这是不计算斜边的曼哈顿距离，所以实际上就是在x,y方向上找中位数。同时x,y不相干，因此甚至所有点的横纵坐标不需要一一对应，分别找出x,y的中位数即可|
|299|Bulls and Cows|这个不难，两个map对照数量就可以了。不用记A在哪里出现，几个总数，计算B的时候减掉就可以|
|**300**|Longest Increasing Subsequence|O(lgn),用lower_bound()可以达到，因为我们迅速定位新来元素应该在的位置。不一定总是插入，如果有更大的元素，就把*更大的元素换成新来的元素*，因为这样有利于后来元素形成更长的序列|
|322|Coin Change|跟377有点像，站在现在节点上，看过去有哪些节点能到本节点，依此来更新本节点。但是反过来，通过本节点更新未来将要到达的所有点，时间就过不了|
|333|Largest BST Subtree|因为需要参考的返回值比较多，所以要另写一个struct。时间上看这个解法不是特别快，还行|
|366|Find Leaves of Binary Tree|一般都只检查到本节点状态，但这里检查到了本节点的子的子的状态|
|**373**|Find K Pairs with Smallest Sums|***priority_queue。*** 增删O(lgN), 找最大值或最小值O(1)。如果找最小值，需要自己写compare。这也相当于k-mergesort。还有一个小技巧是，矩阵中往右的路径全部由一边负责，另一边只负责第一列向下，因为第一列无法通过向右达到|
|377|Combination Sum IV|dp解法按理说可以，但是加了一个大case过不了了。就是像楼梯一样，站在这里，把之前所有能到这里的通路个数，加过来，O(n2)就行。还欠一个正确答案|
|378|Kth Smallest Element in a Sorted Matrix|可以用priority_queue做，但是慢，跟373类似。之后看看别的方法|
|379|Design Phone Directory|set的基本操作|
|**386**|Lexicographical Numbers|深搜，用stack，很快。分清3种情况：10倍还在范围内，就stack存下这个点，先走下面（*10）；否则，如果右边有路（+1后尾数不会从9变成0），走右边（+1）；否则，退stack，记得+1（stack可能因为第二个条件，尾数连续为9则连续退）。长度到了就break|
|**390**|Elimination Game|数学方法递归，时间复杂度同二分法。分三步走就很好理解：1，正常求f(n/2)，2，反方向同样求一遍，3，把2的结果用（n/2）替换，然后反转（数组长度+1减去结果），```return n == 1 ? 1 : 2 * (n / 2 + 1 - lastRemaining(n / 2));```|
|392|Is Subsequence|常规方法简单，但是多string查询的后续问题解法优化要再看一下|
|396|Rotate Function|数学方法，找出变化的通项公式即可|
|397|Integer Replacement|偶数没的说，奇数就往能被4整除的方向发展，这样递减的快。例外是3，遇到3，直接返回res+2|
|403|Frog Jump|用的BFS，速度不算快。跟另一个frog差不多，都是走在当下，根据当下来提醒后面能达到的步数。尽量避免set和map的遍历，感觉比较慢，vector就会好一些。类似的写法，java竟然比cpp快很多|
|413|Arithmetic Slices|简单，每次数着到这里一共前面连续等差了几次，不等差的时候，高斯公式算一下这段距离产生了多少个符合要求的序列，加到结果里面就行。如果一直等差，最后一次结果可能没有加上，需要在循环结束外加上|
|417|Pacific Atlantic Water Flow|**深搜。** 因为水流朝四个方向都有可能，所以不能dp，只能DFS。用2个矩阵分别表示能到达太平洋和大西洋的水，然后均为1，就是我们要的点|
|430|Flatten a Multilevel Doubly Linked List|常规操作，有右有子，就拼一下|
|435|Non-overlapping Intervals|先sort，再遍历。如果遇到重叠，删除尾大的那个，贪心算法，每次这样操作就能保证最优|
|450|Delete Node in a BST|处理好最麻烦的case就可以：被删除的节点有左右子。此时可以在左子树中找最大元素，将其值赋给root，然后递归删除这个最大元素。这里不一定要直接删除最大元素，可以一步一步再走到最大元素，否则需要先找到最大元素的父，才能指向它。相反走右边也可以。O(h)，为高度|
|451|Sort Characters By Frequency|两个map就好，其中一个要ordered的|
|452|Minimum Number of Arrows to Burst Balloons|还是interval问题。这种问题都是先sort，然后greedy，不难|
|454|4Sum II|四循环拆成2个二循环，用一个map，速度还可以|
|477|Total Hamming Distance|用两个等长vector，分别存储该位0的个数，和该位1的个数。遍历其长度，两者对应相乘，就是该位总的不一样的数量，累加即可|
|**560**|Subarray Sum Equals K|**prefix sum。** 这个不错。遍历所有元素，将开始于0，结束于此的sum存入map，这样每步都能检查出，本次sum，减去之前map中的key，也就是之前的sum，得出subarray，的个数（map的value）```res += m[sum - k];```|
|617|Merge Two Binary Trees|有个小trick，如果t1，t2有个点为NULL，那不为NULL的那个也不用往下走了，直接返回它就好|
|621|Task Scheduler|找出次数最多的进程，可能是多个，return重复足够次数这些进程以及idle，和v.size()的较大值|
|647|Palindromic Substrings|另写一个extend函数，遍历string过程中不断调用它，给它起始位置，一次奇数，一次偶数，然后满足条件就向两边扩展，同时res++。这个很快。另写了一个方阵dp，还有点麻烦，慢一点|
|973|K Closest Points to Origin|不难，用multimap，但是好像不快|






### 模板

深搜
> 37,39,40,51,52,77,113,131

```
vector<vector<string>> solveNQueens(int n) {
    vector<vector<int>> res;
    vector<int> v;
    solve(res, v, n);
    // 一个用来存储最终的所有返回结果，一个用来记录本次递归结果
    // 剩下参数用来判断是否合法
    return res;
}
void solve(vector<vector<int>> &res, vector<int> &v, int n) {
    if (v.size() == n) { // 如果找到的本次结果合法
        res.push_back(v);
        v.pop_back();
        return;
    }
    for (int col = 0; col < n; col++) {
        if (valid(v, col)) { // 如果本次操作合法
            v.push_back(col);
            solve(res, v, n);
        }
    }
    v.pop_back(); // 退位，继续找
}
```

左右边界
> 42, 84

```
int trap(vector<int>& h) {
    if (h.size() == 0)
        return 0;
    int left[h.size()];
    int right[h.size()];
    // 初始化这2个数组
    
    for (int i = 1; i < h.size(); i++) {
        // 根据条件，对2个数组赋值
    }
    for (int i = h.size() - 2; i >= 0; i--) {
        // 根据条件，对2个数组赋值
    }
    int res;
    for (int i = 0; i < h.size(); i++) {
        res = f(left[], right[]);
    }
    return res;
}
```

树模板

```

```

滑窗双指针模板

```
int findSubstring(string s){
	vector<int> v(128,0);
	int counter; // check whether the substring is valid
	int begin=0, end=0;
	int res; //the length of substring

	for() { /* initialize the hash map here */ }

	while(end<s.size()){

		if(v[s[end++]]-- ?){  /* modify counter here */ }

		while(/* counter condition */){ 
                
			/* update res here if finding minimum*/

			//increase begin to make it invalid/valid again
		
			if(v[s[begin++]]++ ?)
				{ /*modify counter here*/ }
		}  

            /* update res here if finding maximum*/
 	}
        return res;
}
```

异或模板

```
```








### Classification (to be updated)

