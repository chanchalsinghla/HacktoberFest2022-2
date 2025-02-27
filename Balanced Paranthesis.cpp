#include <iostream>
#include <stack>
using namespace std;

bool isValidexp(char *s){
	stack <char> stk ;
	for(int i=0; s[i]!='\0'; i++){
		char ch=s[i];
		
		if (ch=='('){
			stk.push(ch);
		}
		else if(ch==')'){
			if(stk.empty() or stk.top()!='('){
				return false;
			}
			stk.pop();
		}
	}
	return stk.empty();
}

int main(){
	char s[100] = "((a+b)+(c-d+f))";
	if( isValidexp(s)){
		cout<<"yes, it is balanced paranthesis";
	}
	else{
		cout<<"No, it is not balanced paranthesis";
	}
	
	
}
