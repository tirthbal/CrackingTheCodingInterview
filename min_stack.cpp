#include<bits/stdc++.h>
using namespace std;
#define CAPACITY 100

void _push(int stack[], int &top, int data){
	if (top > CAPACITY) { cout << "Stack Overflow\n"; }
	stack[top] = data;
	top += 1;
}

int _pop(int stack[], int &top){
	if (top == -1) { cout << "Stack Underflow\n"; }
	int pop_ele = stack[top];
	top -= 1;
	return pop_ele;
}
void push(int _stack[], int _min_stack[], int &top, int &min_top, int data) {
	if (top > CAPACITY) {
		cout <<"Stack Overflow\n";
	}
	if (_min_stack[min_top] > data){ _push(_min_stack, min_top, data);}
	_push(_stack, top, data);
}

int pop(int _stack[], int _min_stack[], int &top, int &min_top) {
	if (_stack[top] == _min_stack[min_top]) { _pop(_min_stack, min_top); }
	return _pop(_stack, top);
}

int min(int _min_stack[], int min_top) {
	return _min_stack[min_top];
}

void display(int cur_stack[], int top){
	for(int i = top; i >=0 ; i -= 1) { cout<< cur_stack[i]<< " ";}
}

int main(){
	int _stack[CAPACITY + 1], _min_stack[CAPACITY + 1], top = 0, min_top = 0;
	int arr[] = {2, 4, 3, 1, 5, 0};
	for (int i = 0; i < 5; i += 1) {
		push(_stack, _min_stack, top, min_top, arr[i]);
		cout<<"After "<<i<<" push state of Original stack and minimum stack\n";
		cout<<"---------------------------------------------------------------\n";
		cout<<"Original stack ";
		display(_stack, top);
		cout<<"\n";
		cout<<"----------------------------------------------------------------\n";
		cout<<"Min stack ";
		display(_min_stack, min_top);
		cout<<"\n";
		cout<<"-----------------------------------------------------------------\n";
	}
	int cur_top = top;
	while(top >= 0) {
		pop(_stack, _min_stack, top, min_top);
		cout<<"After "<<cur_top - top + 1<<" pop state of Original stack and minimum stack\n";
		cout<<"---------------------------------------------------------------\n";
		cout<<"Original stack ";
		display(_stack, top);
		cout<<"\n";
		cout<<"----------------------------------------------------------------\n";
		cout<<"Min stack ";
		display(_min_stack, min_top);
		cout<<"\n";
		cout<<"-----------------------------------------------------------------\n";
	}
}