()((()))(())
ans:()()()

leetcode link:https://leetcode.com/problems/remove-outermost-parentheses/description/


think about incrementing and decrementing whenn '(' ')' are there.
after incrementing check if u r inside the pairs of brackets.so cnt>1 means u r inside and add this to result string '('.
after decrementing check if u r still inside pairs.so cnt>0 means u r still inside and add this to ')' to result string.

time comp:o(n)
space comp:o(1)

u can use stack also.but if u use stack space complexity is o(n);
and hence this(stack) is not required.