#include <iostream>
using namespace std;
int main(){
	string answer_t, answer_f, reply;
	answer_t = "yes";
	answer_f = "no";
	
	
	
	cout << "Do you fear technology?" << endl;
	cin >> reply;
	if(reply==answer_t){
		cout << "Is your dad rich? " << endl;
		cin >> reply;
		if(reply==answer_t){
			cout << "Go for MacOS!" << endl;
		}
		if (reply==answer_f){
			cout << "Chrome OS is for you mate!" << endl;
		}
		else cout << "Your reply is not valid please only write 'yes' or 'no'. ";
	}
	if(reply==answer_f){
		cout << "Do you care about freedom/privacy";
		cin >> reply;
		if(reply==answer_t){
			cout << "Do you Have a life? \n ";
			cin >> reply;
			if (reply==answer_t){
				cout << "I recommend you to choose Ubuntu OS! \n";
			}
			if (reply==answer_f){
				cout << "Download Linux and configure it yourself :)  \n";
			}
		if (reply==answer_f){
			cout << "Microsoft already made Windows for you";
		}	
		}
	}
	else cout << "Your reply is not valid please only write 'yes' or 'no'. ";
	
}
