#include <iostream>
#include <string>

using namespace std;

int x;
int y;
char name[20];
int choice;
int hall_pass = 0;
int grenade = 0;
string name_friend;

void Scenes() 
{
	if (x == 0 && y == 0)
	{
		cout << "You wake up in a room in a high floor. You seem to be in the middle of a desert, and yet there are strange lights on the horizon. They seem to have longer and shorter blinks... What do you do?" << endl;
		cout << "1. Stare at the window" << endl << "2. Leave the room" << endl;
		cout << "Your choice (write '1' or '2'): ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "You look down and you see your best friend screaming at you 'Run away!'. You hear steps on the hall and after some minutes some creatures run after him... Save him!" << endl;
			hall_pass++;
			cout << "What do you do?" << endl << "1. Leave the room" << endl;
			cout << "Your choice (write '1'): ";
			cin >> choice;
			if (choice == 1)
			{
				x++;
			}
			else
			{
				cout << "They found you! You're a dead man now." << endl;
			}
		}
		else if (choice == 2)
		{
			x++;
		}
		else
		{
			cout << "They found you! You're a dead man now." << endl;
		}
	
	}

	if (x == 1 && y == 0)
	{
		if (hall_pass == 0)
		{
			cout << "You open the door and see some headless creatures on watch. They notice you. You're a dead man." << endl;
		}
		else
		{
			cout << "The hall is empty. You can go downstairs or explore the halls." << endl;
			cout << "1. Go downstairs" << endl << "2. Explore the halls" << endl;
			cout << "Your choice (write '1' or '2'): ";
			cin >> choice;
			if (choice == 1)
			{
				x++;
			}
			else if (choice == 2)
			{
				y++;
			}
			else
			{
				cout << "They found you! You're a dead man now." << endl;
			}
		}
	}

	if (x == 1 && y == 1)
	{
		cout << "You wander around the halls and find an arsenal of weapons. Most of them are huge and seem complicated to handle. Because of this, you grab a simple hand grenade." << endl;
		grenade++;
		cout << "What do you do now?" << endl << "1. Go downstairs" << endl;
		cout << "Your choice (write '1'): ";
		cin >> choice;

		if (choice == 1)
		{
			x++;
			y--;
		}
		else
		{
			cout << "They found you! You're a dead man now." << endl;
		}


	}

	if (x == 2 && y == 0)
	{
		cout << "While you're going downstairs, you take a quick look around the halls and everything seems empty, there isn't a single noise" << endl;
		cout << "You get to the ground floor and you see two headless creatures guarding the door. What do you do?" << endl;
		cout << "1. Attack the creatures" << endl << "2. Run away" << endl;
		cout << "Your choice (write '1' or '2'): ";
		cin >> choice;
		
		if (choice == 1)
		{
			if (grenade <= 1)
			{
				cout << "You sent the grenade next to the two creatures and hide. A big explosion kills them both. It's time to escape!" << endl;
				cout << "Do you head north or west?" << endl << "1. North" << endl << "2. West" << endl;
				cout << "Your choice (write '1' or '2'): ";
				cin >> choice;

				if (choice == 1)
				{
					x++;
				}

				else if (choice == 2)
				{
					y++;
				}
				
				else
				{
					cout << "They found you! You're a dead man now." << endl;
				}
			}
			else
			{
				cout << "You try attacking them with your bare hands but they pulverize you with their weapons as soon as they notice you. How can you sneak up on them? Hmm..." << endl;
			}
		}

		else if (choice == 2)
		{
			cout << "You try running away but they notice you and capture you. You're a dead man now." << endl;
		}
		
		else
		{
			cout << "They found you! You're a dead man now." << endl;
		}
	}

	if (x == 3 && y == 0)
	{
		cout << "You head north and walk through endless kilometers of sand. You spend all night walking and looking for your friend but you found nothing." << endl;
		cout << "At dawn you feel like you can walk no more, you are thirsty and hopeless. You give up and fall on the sand." << endl;
		cout << "..." << endl << "..." << endl << "..." << endl;
		cout << "You wake up in your room. It was all a dream! What a crazy one. You look in your contact list to tell your best friend about it... but he is not there" << endl;
		cout << "You call his house. His mom answers and you ask her for him. She says she doesn't know anyone with that name." << endl;
		cout << "Was he just... deleted from existence?" << endl << "Is this your fault?" << endl << "Is it your fault, " << name << "?" << endl << endl;
		cout << "THE END";
	}

	if (x == 2 && y == 1)
	{
		cout << "You go west and you can see purple lights coming from the horizon. They must be there!" << endl;
		cout << "While you're passing by, you see a strange broken rectangular ship, it must be theirs. It has an inscription and a weapon that looks like a human pistol." << endl;
		cout << "You grab the weapon and check out the inscription, it has the figures of a ship and a sun. Then a single sun. And then three ships." << endl;
		cout << "What could this mean?" << endl;
		y++;
	}
	
	if (x == 2 && y == 2)
	{
		cout << "You run into the lights since they seem closer and closer, and you found the mothership of the creatures. The have caught your best friend, and they notice you." << endl;
		cout << "This time, however, they don't attack you right away. One of them comes close to you and he seems to speak your language. " << endl;
		cout << "He'll give you a choice: if you tell them the name of your friend, they will let you both go. What do you do?" << endl;
		cout << "1. Tell them the name of my friend." << endl << "2. Don't tell them." << endl;
		cout << "Your choice (write '1' or '2'): ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Tell us, " << name << ", what's the name of your friend? There is a correct answer." << endl;
			cout << "Your answer: ";
			cin.ignore();
			getline(cin, name_friend);
			if (name_friend == "Neo" || name_friend == "neo")
			{
				cout << "This is true friendship. The creatures march back to the mothership and leave. Neo and you hug and close your eyes, and when you open them back, you're both back home." << endl;
				cout << "THE END" << endl;

			}
			else
			{
				cout << "Wrong! You're a dead man now. Do you remember the blinks from the beginning? It might be useful." << endl;
			}
		}
		else if (choice == 2)
		{
			cout << "They seem angry. You need to act quick. What do you do?" << endl;
			cout << "1. Attack with the weapon" << endl << "2. Wait and see." << endl;
			cout << "Your choice (write '1' or '2'): ";
			cin >> choice;

			if (choice == 1)
			{
				cout << "You attack the creature who just talked to you. It seems that it was the leader. Everyone else gets quiet and don't move at all, until some other creatures comes out from the mothership." << endl;
				cout << "The creature stands in front of you and puts some sort of collar around your neck. This and all the other creatures kneel before you and take you to the mothership." << endl;
				cout << "You can't escape: you look behind and this time your friend didn't wait for you, he runs away without looking back." << endl;
				cout << "You're going home. Not your old one, but your new one. Far, far away from here." << endl;
				cout << "THE END";
			}
			else if (choice == 2)
			{ 
				cout << "All the creatures point their weapons at you and attack you. You fall dead, and in your last breath you see how they attack your friend as well" << endl;
				cout << "You can do nothing anymore, but at least your didn't abandon him. You never gave up on each other. You should be proud" << endl;
				cout << "I guess pride can kill you sometimes, right, " << name << "?" << endl;
				cout << "THE END";
			}
			else
			{
				cout << "You're a dead man now." << endl;
			}
		}
		else
		{
			cout << "You're a dead man now." << endl;
		}
	}
}


int main()
{
	cout << "Hello. What is your name?" << endl;
	cin.getline(name, 20, '\n');
	cout << "Hello " << name << ", your adventure begins..." << endl;
	x = 0;
	y = 0;
	Scenes();

	return 0;
}