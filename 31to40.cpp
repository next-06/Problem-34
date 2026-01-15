#include <iostream>
#include <string>     
#include <cstdlib>    
#include <ctime>  
using namespace std ;
/*
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
        cout << Message << endl; 
        cin >> Number;          
    } while (Number <= 0);     
    return Number; 
}
void FullAray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
    {
        arr[i]=i+1;
    }
}
void  swap(int& A, int &B) {
    int temp;
    temp = B;
    B = A;
    A = temp;

}
void ShuffleArray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
    {
        int index1 = RandomNumber(1, length)-1;
        int index2 = RandomNumber(1, length)-1;
        swap(arr[index1], arr[index2]);
        
    }
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n"; 
}*/

/*
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
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void FullAray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(1,99);
    }
}
void CopyreverceAray(int arrSource[100], int arrDestination[100], int arrLength) {
    int j = 0;
    for (int i = 0; i < arrLength; i++)

    {
        arrDestination[i] = arrSource[arrLength-1-i ];
        j++;
    }
}

void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int length = ReadPositiveNumber(" Enter How elements need in Aray");
    FullAray(arr, length);
    PrintArray(arr, length);
    int arr2[100];

    CopyreverceAray(arr, arr2, length);

    PrintArray(arr2, length);

}
*/
/*
int RandromNumber(int from, int to) {
    int Randrom = rand() % (to - from + 1) + from;
    return Randrom;
}
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
enum TypeDta
{
    SmallLetter = 1, Capital, SpicialCarcteres, Digit
};
char Randromtype(TypeDta data) {
    switch (data) {
    case TypeDta::SmallLetter:
        return char(RandromNumber(97, 122));
    case TypeDta::Capital:
        return char(RandromNumber(65, 90));
    case TypeDta::SpicialCarcteres:
        return char(RandromNumber(33, 47));
    case TypeDta::Digit:
        return char(RandromNumber(48, 57));

    }
}
string GeneratWord(TypeDta typekeys, short number) {
    string word = "";
    for (size_t i = 1; i <= number; i++)
    {
        word = word + Randromtype(typekeys);
    }
    return word;
}
string GeneratKey() {
    string keys = "";
    keys += GeneratWord(TypeDta::Capital, 3) + "-";
    keys += GeneratWord(TypeDta::Capital, 4) + "-";
    keys += GeneratWord(TypeDta::Capital, 4) + "-";
    keys += GeneratWord(TypeDta::Capital, 4);
    return keys;
}
void fullArayKeys(string arr[100],int length) {
    for (int i = 0; i < length; i++)
        
        arr[i] = GeneratKey();
    
}

void PrintArray(string arr[100], int arrLength)
{
    cout << " Elements of Array ; "<<endl;

    for (int i = 0; i < arrLength; i++) {

        cout << "Array [ " << i << " ] : ";
        cout << arr[i] << endl;
    }
}
*/

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



