// deneme.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

#include <iomanip>

using namespace std;

const int seat = 10;

int plane[seat];

int casual,business,c,b = 0;

int main()
{
    int input = 0;
    do
    {
        cout << "Please verify your seat class (1) for casual (2) for business for be out press (-1) : ";

        cin >> input;

        if (casual != 5 && input == 1 || business != 5 && input == 2)
        {
            switch (input)
            {
            case 1:
                c = casual;

                plane[c] = 1;

                casual++;

                break;

            case 2:

                b = business + 5;

                plane[b] = 2;

                business++;

                break;

            case -1:
                cout << "Have a nice day..." << endl;
                cout << endl;
                break;

            }
          
            for (int a = 0; a < seat; a++)
                cout << plane[a] << setw(4);
            cout << endl;
        }
        else if (input == -1)
            cout << "Have a nice day" << endl;

        else if (casual == 5 && business == 5)
            cout << "Capcity is full!!" << endl << endl;

        else if (input == 1 && casual == 5)
            cout << "Next fligth after 3 hours later..." << endl<<endl;

        else if (input == 2 && business == 5)
            cout << "Next fligth after 3 hours later..." << endl<<endl;

        else
            cout << "Please verify acceptable value.." << endl;

        cout << "business seat capacity is: " << 5 - business << endl;

        cout << "casual seat capacity is :  " << 5 - casual << endl;

        cout << "Total capacity is :  " << seat << endl;

    } while (input!=-1);

    return 0;

}
