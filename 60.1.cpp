#include <iostream>
#include <fstream>

using namespace std;

class plik
{
public:
 fstream p1;
 ofstream p2;


plik();
~plik();


  void zadanie()
  {

          p2 << "mniejsze od 1000: ";

          int tablica[200];
          int licznik=0;

for (int i=0; i<200; i++)
{
	
 p1 >> tablica[i];
 if (tablica[i]<1000) licznik++;
 
}

p2 << licznik << endl;

        p2 << "ostatnie dwie: ";
        p2 << tablica[199] << " ";

        int numer=198;

    while (tablica[numer]==tablica[199])
	{
                numer--;

     if (numer<0)
                break;
	}


if (numer>0)
{
    p2 << tablica[numer] << endl;

}

  }

};

plik::plik(){
p1.open("liczby.txt");
   p2.open("wyniki.txt");


}

plik::~plik(){

  p2.close();


}

int main(){

plik p1;
p1.zadanie();

  return 0;

}
