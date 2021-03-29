#include <iostream>
#include <string>

using namespace std;

int main()
{

    char userName[50];

    char userAns[20];

    string riddleAns;

    int randomRiddle; randomRiddle = rand() % 3 ;

    std::string riddleArr[3] = {"The more of this there is, the less you see. What is it?",
                              "What has hands, but cannot clap?",
                              "What has words, but never speaks?"};

    std::string ansArr[3] = {"darkness", "a clock", "a book"};


    cout << "Greetings brave warrior!! What is your name?" << endl;

    cin.getline(userName,50);

    cout << "Lets see if your a worthy enough " << userName << ", ANswer this riddle!" << endl;

    cout << "BEWARE : YOU ONLY GET ONE CHANCE..." << endl;

    cout << riddleArr[randomRiddle] << endl;

    cin.getline(userAns,20);


    if (userAns == ansArr[0] && riddleArr[randomRiddle] == riddleArr[0]) {
      cout << "Congratulations!! You may Enter,  " << userName << endl;

   } else {
      cout << "Incorrect!! You May not enter!!" << endl;
    };

    if (userAns == ansArr[1] && riddleArr[randomRiddle] == riddleArr[1]) {
      cout << "Congratulations!! You may Enter,  " << userName << endl;

    } else {
      cout << "Incorrect!! You May not enter!!" << endl;
    };

    if (userAns == ansArr[2]) {
      cout << "Congratulations!! You may Enter,  " << userName << endl;

    } else {
      cout << "Incorrect!! You May not enter!!" << endl;
    };



    return 0;
}
