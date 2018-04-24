#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>

class Scanner
{
public:
  std::vector<int> puertos_vector;
  int arr_ports[11];
  int puerto;

  Scanner(){}

  void puertos()
  {
    system("nmap -sTU localhost | grep -i open> puertecitos.txt");

    std::ifstream inFile;
    std::string x;
    std::string line;
    int test=0;
    int c=0;

    inFile.open("puertecitos.txt");
    if (!inFile) {
        std::cout << "No file";
        exit(1);
    }

    while (std::getline(inFile, x))
    {
      line = x.substr(0, x.find("/", 0));
      puertos_vector.push_back(stoi(line));
    }

    inFile.close();
  }

  void existePuerto(int puerto)
  {

    for (auto i : puertos_vector)
    {
      if (i == puerto)
      {
        std::cout<<"El puerto "<<puerto<<" esta abierto"<<std::endl;
        return;
      }
    }
    std::cout<<"El puerto "<<puerto<<" esta cerrado"<<std::endl;
  }


};
