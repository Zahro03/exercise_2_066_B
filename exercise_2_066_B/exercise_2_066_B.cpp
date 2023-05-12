#include <iostream>
using namespace std;


int zahro[98]; //Array to be searched
int zahrotul; //Number of elements in the array
int jannah; //Index of array element


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> zahrotul;
		if ((zahrotul > 0) && (zahrotul <= 98))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 98 elements.\n\n";
	}

	//Accept array elements
	cout << "\n========================\n";
	cout << " Enter array elements\n";
	cout << "==========================\n";
	for (jannah = 0; jannah < zahrotul; jannah++)
	{
		cout << "<" << (jannah + 1) << ">";
		cin >> zahro[98];
	}
}



void LinearSearch()
{
	char zahrotul;
	int comparisons; //Number of comparisons

	do
	{
		//Accept the number to be searched
		cout << "\nEnter the element you want to search:";
		int item;
		cin >> item;

		comparisons = 0;
		for (jannah= 0; jannah < zahrotul; jannah++) //Langkah 2,3 dan 4
		{
			comparisons++;
			if (zahro[98] == item) //Langkah 5A found
			{
				cout << "\n" << item << " found at position" << (jannah + 1) << endl;
				break;
			}
		}

		if (jannah == zahrotul) // Langkah 58 not found
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparisons:" << comparisons << endl;

		cout << "\nContinue search (y/n):";
		cin >> zahrotul;
	} while ((zahrotul == 'y') || (zahrotul == 'y'));
}

int main()
{
	input();
	LinearSearch();
}