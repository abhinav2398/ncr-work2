#include<iostream>
#include<string>

using namespace std;

char * ExpandShortNotation(string Sentence, int SentenceSize, int OutSentenceSize)
{
	char *output;//pointer to the output character array
	output = new char[OutSentenceSize];//Allocate the sixe required for the output character arrray which was calculated
	int number = 0;
	for (int counter = 0; counter < SentenceSize; counter++)
	{
		if (Sentence[counter + 1] != '-'&&Sentence[counter] != '-')//The characters which are not near the '-' are copied as it is into the expanded string
		{
			output[number] = Sentence[counter];
			number++;
		}
		if (Sentence[counter] == '-')//If a '-' is encountered then go into the if loop and validate the below conditions
		{
			if ((Sentence[counter + 1] - Sentence[counter - 1]) > 0)//Evaluate the difference in ascii values and find wheather it is positive or negative
			{
				output[number++] = Sentence[counter - 1];
				for (int i = 0; i < (Sentence[counter + 1] - Sentence[counter - 1] - 1); i++)
				{
					output[number++] = Sentence[counter - 1] + i + 1;
				}
			}
			else
			{
				output[number++] = Sentence[counter - 1];//If the ascii value of the left hand character is greater than that of the right hand character then follow the below steps
				for (int i = 0; i < (-Sentence[counter + 1] + Sentence[counter - 1] - 1); i++)
				{
					output[number++] = Sentence[counter - 1] - (i + 1);
				}
			}

		}
	}
	return output;
}

int main()
{
	cout << "THE PROGRAM TO EXPAND THE SHORT HAND EXPRESSION" << endl;
	string Sentence;//Define a string in order the entered short hand expression
	cout << "enter the sentence without spaces" << endl;
	getline(cin, Sentence);
	cout << "you entered: " << Sentence << endl;
	cout << "computing the output....." << endl;
	int SentenceSize;//The no of characters in the short hand expression
	int counter = 0;//A variable which is used to count the no of characters entered by the user
	for (counter = 0; Sentence[counter] != '\0'; counter++);
	SentenceSize = counter;
	cout << endl;
	if (Sentence[0] == '-' || Sentence[SentenceSize - 1] == '-')//Statement to check wheather the first or last character is '-' and print invalid input if that is the case
	{
		cout << "invalid sentence entered " << endl;
		cout << "entered sentence is :";
		for (counter = 0; counter < SentenceSize; counter++)
		{
			cout << Sentence[counter];
		}
		cout << endl << endl;
		cout << "process terminated" << endl << endl;
		return 0;
	}
	int OutSentenceSize = 0, number = 0;//Size of the output sentence
	for (counter = 0; counter < SentenceSize; counter++)//for loop to check if any double - are present it means the input is invalid
	{
		if (Sentence[counter] == '-')
		{
			if (Sentence[counter + 1] == '-')
			{
				cout << "invalid sentence entered" << endl;
				cout << "entered sentence is :";
				for (int counter1 = 0; counter1 < SentenceSize; counter1++)//print the entered sentence and exit
				{
					cout << Sentence[counter1];
				}
				cout << endl << endl;
				cout << "process terminated" << endl;
				return 0;
			}
			//condition to check wether the characters on the left and right hand side of notation belong to same set
			else if (((65 <= Sentence[counter - 1] && 90 >= Sentence[counter - 1]) && !(65 <= Sentence[counter + 1] && 90 >= Sentence[counter + 1])) ||
				((97 <= Sentence[counter - 1] && 122 >= Sentence[counter - 1]) && !(97 <= Sentence[counter + 1] && 122 >= Sentence[counter + 1])) ||
				((48 <= Sentence[counter - 1] && 57 >= Sentence[counter - 1]) && !(48 <= Sentence[counter + 1] && 57 >= Sentence[counter + 1])))
			{
				cout << "entered expression contains invalid short hand notations" << endl;
				cout << "process terminated" << endl;
				return 0;
			}
			//This is the loop which is used to validate the output
			if ((Sentence[counter - 1] > 32 && Sentence[counter - 1] < 48) || (Sentence[counter - 1] > 57 && Sentence[counter - 1] < 65))
			{
				cout << "short hand notation contains invalid symbols" << endl;
				cout << "process terminated" << endl;
				return 0;
			}
			else if ((Sentence[counter + 1] > 32 && Sentence[counter + 1] < 48) || (Sentence[counter + 1] > 57 && Sentence[counter + 1] < 65))
			{
				cout << "short hand notation contains invalid symbols" << endl;
				cout << "process terminated" << endl;
				return 0;
			}
			else
			{
				if ((Sentence[counter + 1] - Sentence[counter - 1]) > 0)
					OutSentenceSize = OutSentenceSize + (int)(Sentence[counter + 1] - Sentence[counter - 1]);//Calculate the no of elements between the neighbours of '-' character
				else
					OutSentenceSize = OutSentenceSize + (int)(-1 * (Sentence[counter + 1] - Sentence[counter - 1]));//Calculate the no of elements between the neighbours of '-' character
				number++;//This variable is used to count the no of '-' present in the short hand expression
			}
		}
	}
	OutSentenceSize = SentenceSize + OutSentenceSize - (2 * number);//Calculate the number of charaters in the expanded string
	char *output;
	output = new char[OutSentenceSize];
	output = ExpandShortNotation(Sentence, SentenceSize, OutSentenceSize);//Functionality to expand the short hand expression ina required way
	cout << "the expanded short hand notation of given string is: ";
	for (counter = 0; counter < OutSentenceSize; counter++)
	{
		cout << output[counter];
	}
	system("pause");
	getchar();
	return 0;
	delete(output);
}