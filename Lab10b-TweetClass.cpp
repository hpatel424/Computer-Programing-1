

//Harry Patel

#include <iostream>
#include <string>
#include <ctime>
#include <vector>


using namespace std;


class Tweet{
private:
	string message, author;
	int timeStamp;

public:
	Tweet(void);

	string getMessage(void);
	void setMessage(string newMessage);

	string getAuthor(void);
	void setAuthor(string newAuthor);

	int getTimeStamp(void);
	void setTimeStamp(int newTime);

	void print(void);

};


int main() {

	vector <Tweet> chat(3) ;
	Tweet a,t;
	chat[0].setMessage("Hi");
	chat[1].setMessage("How are You??");
	chat[2].setMessage("Fine!!!");
	a.setAuthor("___Harry");

	for (int i = 0; i < 3; i++)
	{
		chat[i].print();
		cout << endl;
	}
	a.print();


	system("pause");
	return 0;
}



Tweet::Tweet(void) {
	setAuthor("");
	setMessage("");
	setTimeStamp(time(0));
}
string Tweet::getMessage(void) {
	return message;
}
void Tweet::setMessage(string newMessage) {
	if (message.size() <= 140) {
		message = newMessage;
	}
	
}
string Tweet::getAuthor(void) {
	return author;
}
void Tweet::setAuthor(string newAuthor) {
	author = newAuthor;
}
int Tweet::getTimeStamp(void) {
	return timeStamp;
}
void Tweet::setTimeStamp(int newTime) {
	timeStamp = newTime;
}

void Tweet:: print(void) {
	string msg = getMessage();
	string ath = getAuthor();
	int time = getTimeStamp();

	cout << msg << "\n" << ath << " at " << time << endl;
}