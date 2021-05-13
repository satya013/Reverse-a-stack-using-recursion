# Reverse-a-stack-using-recursion
We can reverse a stack using recursion. Here I have defined two functions insrt_btm() and reverse().
------------------------------------------------------------------------
insrt_btm() inserts element at bottom of the stack and reverse() reverses the stack.
In the base case if the stack is empty push the element
Else ,  call the top() to store the elements of the stack in the function and then pop out using pop().
It repeats until stack is empty , then base case executes.
Then, push the elements of the stack  stored in the function recursively   
--------------------------------------------------------------------------
reverse() reverses the elements of a stack
Store the elements of the stack in the function using top() and  call reverse() recursively until it is empty
Then store the elements in reverse directiion i.e. inserting at bottom.
