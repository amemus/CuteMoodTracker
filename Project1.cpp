#include<iostream>
using namespace std;
class mood
{
	private:

	string moods[7];
	int sadMoodCount;
	int happyMoodCount;
	int cryingMoodCount;

	public:

	//default constructor
	mood()
	{
		 sadMoodCount = 0;
		 happyMoodCount = 0;
		 cryingMoodCount = 0;
	}

	//adding moods
	void addMood()
	{
	cout << " === Enter your moods princess === "<< endl;
	for(int i = 0; i < 7; i++)
	{
	cout << "Day " << i + 1 << ":";
	cout << " ";
	cin >> moods[i];
	

	}
	}
	void showMood()
	{
	cout << " === Your weekly mood report === "<< endl;
	for (int i = 0; i < 7 ; i++)
	{
		cout << "Day " << i + 1 << ": " ;
	 
	 //making lists of moods 
	 if (moods[i] == "happy")
	 {
		cout << "You are happy.";
		happyMoodCount++;
	 }
	 else if (moods[i] == "sad")
	 {
		 cout << "You are sad.";
		 sadMoodCount++;
	 }
	 else if (moods[i] == "sleepy")
	 {
		 cout << "You are sleepy.";
	 }
	 else if (moods[i] == "crying")
	 {
		 cout << "You are crying.";
		 cryingMoodCount++;
	 }
	 else if (moods[i] == "excited")
	 {
		 cout << "You are excited.";
	 }
	 else
	 {
		cout << "Mood not recognized but still cute.";
	 }
	 cout << endl;
	}
	}
	void moodSummary()
	{
		cout << " === Summary ===" << endl;
		if(happyMoodCount >= 3)
		{
		cout << "You had more happy days." << endl;
		cout << "You had Amazing week miss." << endl;
		cout << "Mood Tracking Complete." << endl;
		}
		if (sadMoodCount >= 3)
		{
			cout << "You had more sad days." << endl;
			cout << "Your Highness! you'll be fine soon." << endl;
			cout << "Mood Tracking Complete." << endl;
		}
		if (cryingMoodCount >= 3)
		{ 

		cout << "Madam! You will rise again." << endl;
		cout << "Mood Tracking Complete." << endl;

		}
}

};
int main()
{
 mood m1;
 m1.addMood();
 m1.showMood();
 m1.moodSummary();
return 0;
}