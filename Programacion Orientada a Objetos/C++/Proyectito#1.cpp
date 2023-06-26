#include <iostream>

int main() {
  float weight;
  int option;
  printf("What's you weight on the earth?\n");
  std::cin >> weight;
  std::cout << "In which planets do you want to fight?\n";
  std::cin >> option;
  switch(option){
    case 1 :
      std::cout << "Your weight on Mercury is "<<(weight/9.81)*0.38<<"\n";
      break;
    case 2 :
      std::cout << "Your weight on Venus is "<<(weight/9.81)*0.91<<"\n";
      break;
    case 3 :
      std::cout << "Your weight on Mars is "<<(weight/9.81)*0.38<<"\n";
      break;
    case 4 :
      std::cout << "Your weight on Jupiter is "<<(weight/9.81)*0.34<<"\n";
      break;
    case 5 :
      std::cout << "Your weight on Saturn is "<<(weight/9.81)*1.06<<"\n";
      break;
    case 6 :
      std::cout << "Your weight on Uranus is "<<(weight/9.81)*0.92<<"\n";
      break;
    case 7 :
      std::cout << "Your weight on Neptune is "<<(weight/9.81)*1.19<<"\n";
      break;
  } 
}