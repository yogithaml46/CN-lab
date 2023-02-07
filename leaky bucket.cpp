#include <iostream>

using namespace std;

int main()
{
    cout << "Enter bucket size " << endl;
    int bucketsize;
    int filled=0;
    int outputrate;
    int inputpacket;
    int choice;
    cin >> bucketsize;
    cout << "Enter  output rate" << endl;
    cin >> outputrate;
    do
    {
        cout << "Enter packet size" << endl;
        cin >> inputpacket;
         
        if (inputpacket<=bucketsize)
        {
           
            if(filled+inputpacket>bucketsize)
            {
                cout<<"Packets too big for bucket"<<endl;
            }
            else{
                filled = filled+inputpacket;
            }
        }
        else
        {
            cout << "Packets too big for bucket" <<endl;
        }
        if (filled<=outputrate)
        {
            filled=0;
        }
        else
        {
            filled = filled - outputrate;
        }
        cout << "Amount of bucket filled " << filled << endl;
        cout << "Do you want to enter another packet(9 for yes, 5 for no)" << endl;
        cin >> choice;
    }while (choice==9);
   
}
