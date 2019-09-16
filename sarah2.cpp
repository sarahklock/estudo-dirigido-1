#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> nums, compare;
    int somatorio = 0, sim_ou_nao, somatorio2;

    do{
        int n;

        cout << "Digite um numero inteiro: ";
        cin >> n;

        nums.push_back(n);

        cout << "Voce deseja digitar mais numeros? Digite 1 para 'sim', 2 para 'nao': ";
        cin >> sim_ou_nao;

    } while(sim_ou_nao == 1);

    for(int x = 0; x < nums.size(); x++){

        somatorio += nums[x];
    }

    for(int opcao=10; opcao!=0;){

        cout << endl
             << "1 - Mostrar o somatorio dos numeros digitados" << endl
             << "2 - Mostrar a media dos numeros digitados" << endl
             << "3 - Mostrar a media e o somatorio dos numeros digitados" << endl
             << "4 - Substituir todos os negativos dos numeros digitados por zero e mostrar a media" << endl
             << "5 - Susbstituir todos os repetidos dos numeros digitados por zero e mostrar a media e o somatorio" << endl
             << "6 - Mostrar os numeros digitados em ordem crescente" << endl
             << "0 - Sair" << endl << endl
             << "Digite o numero da operacao dentre as disponiveis acima que deseja realizar: ";

        cin >> opcao;

        switch(opcao){

            case 1:

                system("clear");

                cout << "Somatorio: " << somatorio << endl << endl;

                break;


            case 2:

                system("clear");

                cout << "Media: "<< somatorio / nums.size() << endl << endl;

                break;

            case 3:

                system("clear");

                cout << "Somatorio: " << somatorio << endl;
                cout << "Media: " << somatorio / nums.size() << endl << endl;

                break;

            case 4:

                somatorio2 = somatorio;

                for( int x = 0; x < nums.size(); x++){

                    if(nums[x]<0){

                        somatorio2 -= nums[x];

                    }
                }

                system ("clear");

                cout << "Media com os negativos anulados: " << somatorio2 / nums.size() << endl << endl;

                break;

            case 5:

                somatorio2 = 0;

                compare = nums;

                for(int x = 0; x<compare.size(); x++){

                    for(int y = x+1; y < compare.size(); y++){

                        if(y!=x && compare[x]==compare[y]){

                            compare.erase(compare.begin()+y);

                            x--;
                        }
                    }
                }

                for(int x=0; x<compare.size(); x++){

                    somatorio2 += compare[x];
            }

                system("clear");

                cout << "Somatorio com os repetidos anulados: " << somatorio2 << endl << endl;
                cout << "Media com os repetidos anulados: " << somatorio2/nums.size() << endl << endl;

                break;

            case 6:

                vector<int> numeros = nums;

                system("clear");

                sort(numeros.begin(), numeros.end());

                cout << "Numeros ordenados:" << endl;

                for(int x=0; x<numeros.size(); x++){

                    cout << numeros[x] << endl;
            }

            cout << endl;

            break;

        }

    }

    cout<<endl;



    return 0;
}



