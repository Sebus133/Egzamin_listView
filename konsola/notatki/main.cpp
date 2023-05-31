#include <iostream>

using namespace std;


class Notatki{
private:
static int licznik_notatek;
int id=1;

protected:
string tytul;
string tresc;


public:
    Notatki(string a,string b);

void wyswietl(){
    cout<<tytul<<tresc<<endl;
}
void diagnoza(){

        cout<<licznik_notatek<<";"<<id<<";"<<tytul<<";"<<tresc<<";"<<endl;


}
};
Notatki::Notatki(string a,string b){
    this->licznik_notatek++;
    id=licznik_notatek;
    tytul=a;
    tresc=b;

}
int Notatki::licznik_notatek=0;


int main()
{

        Notatki notakta1("Tytul pierwszej notatki","Tresc pierwszej notatki");
        Notatki notakta2("Tytul drugiej notatki","Tresc drugiej notatki");

        notakta1.wyswietl();
        notakta1.diagnoza();

        notakta2.wyswietl();
        notakta2.diagnoza();
    return 0;
}
