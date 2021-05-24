#include <iostream>
using namespace std;

int main() {
bool play = true;



  while(play) {


  string blank;
  string house;
  int max = 0;
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  cout << "The Sorting Hat QUIZ!\n";
  cout << "\n";
  cout << "type BEGIN to start\n";
  cin >> blank;

  cout << "Q1) When I'm dead, I want people to remember me as: \n";
  cout << "\n";
  cout << "  1) The Good\n";
  cout << "  2) The Great\n";
  cout << "  3) The Wise\n";
  cout << "  4) The Bold\n";
  cin >> answer1;

  if(answer1 == 1) {
    hufflepuff++;
  } else if (answer1 == 2) {
    slytherin++;
  } else if (answer1 == 3) {
    ravenclaw++;
  } else if (answer1 == 4) {
    gryffindor++;
  } else {
    cout << "Invalid input - Please type a number.\n";
    cout << "Exiting game..\n";
    play = false;
  };
  if (play == false){
      continue;
  }

  cout << "Q2) Dawn or Dusk?\n";
  cout << "\n";
  cout << "  1) Dawn\n";
  cout << "  2) Dusk\n";
  cin >> answer2;

  if(answer2 == 1) {
    gryffindor++ && ravenclaw++;
  } else if (answer2 == 2) {
    slytherin++ && hufflepuff++;
  } else {
    cout << "Invalid input - Please type a number.\n";
    cout << "Exiting game..\n";
    play = false;
  };
  if (play == false){
      continue;
  }

  cout << "Q3) Which kind of instrument most pleases your ear?\n";
  cout << "\n";
  cout << "  1) The violin\n";
  cout << "  2) The trumpet\n";
  cout << "  3) The piano\n";
  cout << "  4) The drum\n";
  cin >> answer3;

  if(answer3 == 1) {
    slytherin++;
  } else if (answer3 == 2) {
    hufflepuff++;
  } else if (answer3 == 3) {
    ravenclaw++;
  } else if (answer3 == 4) {
    gryffindor++;
  } else {
    cout << "Invalid input - Please type a number.\n";
    cout << "Exiting game..\n";
    play = false;
  };
  if (play == false){
      continue;
  }

  cout << "Q4) Which road tempts you most?\n";
  cout << "\n";
  cout << "  1) The wide, sunny grassy lane\n";
  cout << "  2) The narrow, dark, lantern-lit alley\n";
  cout << "  3) The twisting, leaf-strewn path throught woods\n";
  cout << "  4) The cobbled street lined (ancient buildings)\n";
  cin >> answer4;

  if(answer4 == 1) {
    hufflepuff++;
  } else if (answer4 == 2) {
    slytherin++;
  } else if (answer4 == 3) {
    gryffindor++;
  } else if (answer4 == 4) {
    ravenclaw++;
  } else {
    cout << "Invalid input - Please type a number.\n";
    cout << "Exiting game..\n";
    play = false;
  };
  if (play == false){
      continue;
  }

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  cout << "The hat has chosen!  \n";
  cout << "You are in " << house << " House!\n";
  break;

}
return 0;
}
