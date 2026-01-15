#include <iostream>
#include <string>     
#include <cstdlib>    
#include <ctime>  
using namespace std ;


int RandomNumber(int From, int To)
{

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message ;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void FullAray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(1, 99);
    }
}
void PrintArray(int arr[100], int arrLength)
    {

        for (int i = 0; i < arrLength; i++)
            cout << arr[i] << " ";

        cout << "\n";
    }

int Serche(int arr[100], int arrLength, int check) {
    for (int i = 0; i < arrLength; i++)
        if ((check == arr[i]))
        {
            return i;

        } 
    return -1;
}

   
   


int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int length = ReadPositiveNumber(" enter how elements you want : ");
    FullAray(arr, length);
    PrintArray(arr, length);
    int check = ReadPositiveNumber(" enter how elements you want : ");
    cout << "\n";                         
    int numberOfpostion = Serche(arr, length, check);
    
    if (numberOfpostion == -1) {
        cout << "\nNumber you are looking for is: " << check << endl;

        cout << "The number is not found :-(\n";
 }
     
 else{
    cout << "\nNumber you are looking for is: " << check << endl;

    cout << "The number found at position: " << numberOfpostion << endl;
    cout << "The number found its order  : " << numberOfpostion + 1 << endl;
 }
}



