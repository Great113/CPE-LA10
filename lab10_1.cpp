#include<iostream>
using namespace std;
char grade;
int i = 1;
int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if (grade == '0') break;
		if(grade =='A'){ // if grade is A
			count[0]+=1;
		}else if(grade =='B'){ // if grade is B
			count[1]+=1;
		}else if(grade =='C'){ 
			count[2]+=1;
		}else if(grade =='D'){ 
			count[3]+=1;
		}else if(grade =='F'){ 
			count[4]+=1;	
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";
			continue;
		} 
		i++;
	}while(grade!=0);
	
	
	cout << "In total "<<i-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
	}