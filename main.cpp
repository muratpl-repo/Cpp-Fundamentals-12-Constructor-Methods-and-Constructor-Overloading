#include <iostream>
using namespace std;

class Ogrenci{
    private:
    string isim;
    int numara;

    public:

    Ogrenci(string yazilacakIsim, int yazilacakNumara){
        isim = yazilacakIsim;
        numara =yazilacakNumara;
    }

    Ogrenci(string yazilacakIsim){
        isim = yazilacakIsim;
        numara = 0;
    }


    void setIsim(string yazilacakIsim){
        if(yazilacakIsim.size() >= 3){
            isim = yazilacakIsim;
        }
        else{
            cout<<"Lutfen 3 karakterden uzun isim giriniz!"<<endl;
        }
    }
    void setNumara(int yazilacakNumara){
        if(yazilacakNumara > 0){
            numara = yazilacakNumara;
        }
        else{
            cout<<"Lutfen sifirdan buyuk numara giriniz!"<<endl;
        }
    }

    void ogrenciBilgileriniGoster(){

        cout<<"Isim: "<<isim<<endl;
        cout<<"Numara: "<<numara<<endl;
    }

    string getIsim(){
        return isim;
    }

    int getNumara(){
        return numara;
    }

};


int main()
{
    Ogrenci ogr1("Murat Academy",18401325);
    Ogrenci ogr2("Ates Academy");

    ogr1.ogrenciBilgileriniGoster();
    ogr2.ogrenciBilgileriniGoster();

    return 0;
}
