#include <iostream>
using namespace std;
int main(){
    int matriks1[100][100], matriks2[100][100], hasil[100][100], transpose[100][100], jml=0;
    int a,b;

    cout << "Masukan Jumlah Baris : ";
    cin >> a;
    cout << "Masukan Jumlah Kolom : ";
    cin >> b;

    if(a == b){
        cout << "== MATRIKS A ==" << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
            cout << "Masukan elemen baris ke " << i << " kolom ke " << j << " : ";
            cin >> matriks1[i][j];
            }
        }
        cout << endl;
        cout << "== ELEMEN MATRIKS A ==" << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << matriks1[i][j] << "\t";
            }
            cout << endl;
        }
    }
    cout << "== MATRIKS B ==" << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
            cout << "Masukan elemen baris ke " << i << " kolom ke " << j << " : ";
            cin >> matriks2[i][j];
            }
        }
        cout << endl;
        cout << "== ELEMEN MATRIKS B ==" << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << matriks2[i][j] << "\t";
            }
            cout << endl;
        }
    cout << "== HASIL PERTAMBAHAN ==" << endl;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << " " << hasil[i][j] << " | ";
        }
        cout << endl;
    }

    cout << "== HASIL PERKALIAN ==" << endl;
    for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                jml=0;
                for(int k = 0; k < a; k++){
                    jml = jml + matriks1[i][k] * matriks2[k][j];
                }
                hasil[i][j] = jml;
            }
        }

        cout << endl;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << " " << hasil[i][j] << " | ";
            }
            cout << endl;
        }

        cout << "== HASIL TRANSPOSE MATRIKS ==" << endl;
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
            transpose[j][i] = matriks1[i][j];
            }
        }
        cout << "Hasil Transpose Matriks 1 : \n";
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
            cout << transpose[i][j] << "\t";
            }
            cout << endl;
        }
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
            transpose[j][i] = matriks2[i][j];
            }
        }
        cout << "Hasil Transpose Matriks 2 : \n";
        for (int i = 0; i < a; i++){
            for (int j = 0; j < b; j++){
            cout << transpose[i][j] << "\t";
            }
            cout << endl;
        }


return 0;
}
