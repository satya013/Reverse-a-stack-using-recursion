#include<iostream>
#include<stack>
using namespace std;
//insert at botoom of the stack
void insrt_btm(stack<int>&st,int data)
{  
	if(st.empty())st.push(data);// base case : if stack is empty simply push the element
	else
	{
		int c=st.top();
		st.pop();
		insrt_btm(st,data);//recursively call the function until the stack is empty
    /*-----------------------
    * here base case executed
    *then simply push other elements one by one*/
		
    st.push(c);
	}
}

//reverse
void reverse(stack<int>&st)
{ if(!st.empty())
{

	int c=st.top();
	st.pop();
	reverse(st);//recursively call the function until it's empty
  /* stk: 2 3 4 5
  reverse: 5->4->3->2 so insert at bottom*/
	insrt_btm(st,c);
}}
int main()
{
	stack<int>stk;
	stk.push(5);
	stk.push(4);
	stk.push(3);
	stk.push(2);
	cout<<"After inserting 1 at bottom : ";
  insrt_btm(stk,1);// demonstrate insrt_btm() 
  while(!stk.empty())
  { 
    cout<<stk.top()<<" ";
    stk.pop();
  }

  stk.push(5);
  stk.push(4);
	stk.push(3);
	stk.push(2);
  reverse(stk); // demonstrate reverse() 
  cout<<"\nAfter reversing the stack : ";
  while(!stk.empty())
  {
    cout<<stk.top()<<" ";
    stk.pop();
  }
   return 0; 
}
