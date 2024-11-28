#include <iostream>


void start_game();
void end_game(int score);

using namespace std;


int main() {
	
	string user_input;
	cout<<"=============== Welcome ==============="<<endl;
	cout<<"If you want to play game then enter 'play' to start : ";
	
	cin>> user_input;
	
	if (user_input == "play")
	{
			start_game();
			
	}
	else{
			end_game(0);
	}	
}

void start_game()
{
	char answer;
	int score =0;
	
	cout<<"How much 3+3 : "<<endl;
	cout<<"a) 1"<<endl;
	cout<<"b) 2"<<endl;
	cout<<"c) 6"<<endl;
	cout<<"d) 3"<<endl;
	cout<<"Please enter the answer(a,b,c,d) : " ;
	cin>>answer;
	
	if(answer == 'c'){
		cout<<endl;
		cout<<"Congrats your answer is right !"<<endl;
		score ++;
		
	}
	else{
		cout<<"Sorry your answer is wrong"<<endl;
	}
	cout<<endl;
	cout<<"Who is the presiddent of Sri Lanka : "<<endl;
	cout<<"a) Anura"<<endl;
	cout<<"b) Sajith"<<endl;
	cout<<"c) Ranil"<<endl;
	cout<<"d) Mahinda"<<endl;
	cout<<"Please enter the answer(a,b,c,d) : " ;
	cin>>answer;
	
	if(answer == 'a'){
		
		cout<<endl;
		cout<<"Congrats your answer is right !"<<endl;
		score ++;
		
	}
	else{
		cout<<"Sorry your answer is wrong"<<endl;
	}
	cout<<endl;
	cout<<"What is the capital city of Sri Lanka : "<<endl;
	cout<<"a) Colombo"<<endl;
	cout<<"b) Galle"<<endl;
	cout<<"c) Jaffna"<<endl;
	cout<<"d) Mathara"<<endl;
	cout<<"Please enter the answer(a,b,c,d) : " ;
	cin>>answer;
	
	if(answer == 'a'){
		
		cout<<endl;
		cout<<"Congrats your answer is right !"<<endl;
		score ++;
		
	}
	else{
		cout<<"Sorry your answer is wrong"<<endl;
	}
	
	
	end_game(score);
	
}

void end_game( int score)
{
	cout<<endl;
	cout<<"Thank for Playing "<<endl;
	cout<<"Your score is :"<<score<<endl;
	
}
