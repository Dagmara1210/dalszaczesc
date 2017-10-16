#include <iostream>
#include <fstream>
# include <vector>
#include <string>
#include <stdexcept>
#include <sstream>
using namespace std;
struct Probka
{ double t;
double x;
Probka (double _t,double _x)
{ t=_t;
  x=_x;

}

};
  vector <Probka> wczytaj(string n)
  {
      vector <Probka> tablica ;
      ifstream plik (n);
      string line;
      while (getline(plik,line))
      {
          stringstream ss(line);

        double _t, _x;
       ss >> _t;
       ss.ignore();
       ss >> _x;
cout<<" "<< _t<<" "<< _x<<endl;

      }
      plik.close();
      return tablica;
  }

void zapis(vector <Probka>dane,string nazwa)
{
        ofstream plik(nazwa);
        plik<<"Dagmara";
    for (int i=0;i<dane.size();i++)
{
    plik <<dane[i].t<<",  "<< dane[i].x<<endl;
}
plik.close();
}
int main(int arg,char* argv[])
{


    if(arg !=2)
    {
        return -1;
    }
    vector <Probka> dane=wczytaj(argv[1]);
    string nazwa_pliku=argv[1];
    cout << "Wczytuje element:"<<nazwa_pliku<<endl;
    zapis (dane,"nazwa.csv");
cin.get();
    return 0;
}
