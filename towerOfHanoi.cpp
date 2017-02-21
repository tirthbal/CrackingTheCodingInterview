#include<bits/stdc++.h>
using namespace std;

void moveTower(int height, char fromPole, char toPole, char withPole) {
	if (height < 1){
		return;
	}
	moveTower(height - 1, fromPole, withPole, toPole);
	cout<<"Moving disk from "<<fromPole<<" to "<<toPole<<"\n";
	moveTower(height -1, withPole, toPole, fromPole);

}


int main() {
	int no_of_disks;
	cout<<"Enter the no_of_disks\n";
	cin>>no_of_disks;
	moveTower(no_of_disks, 'A', 'B', 'C');
	return 0;
}