#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    int x, n, y, z, d, b;
    label_name:cout<<" Unesite broj kombinacija: ";
    cin>>n;
    cout<<endl;
    int r=12;
    for(int i=0; i<n; i++) {
        x=1+int(r*rand()/(RAND_MAX+1));
        y=2+ rand() % 6;
        if(x==1) {
            cout<<"JAB_CROSS"<<endl;
            cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
            }else {
                if(x==2) {
                    cout<<"JAB_REAR HOOK"<<endl;
                     cout<<endl;
                     cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                    }else {
                        if(x==3) {
                            cout<<"LEAD_HOOK CROSS"<<endl;
                             cout<<endl;
cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                        }else {
                            if(x==4) {
                                cout<<"JAB REAR_UPPERCUT"<<endl;
                                 cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                            }else {
                                if(x==5) {
                                    cout<<"JAB CROSS LEAD_UPPERCUT"<<endl;
                                     cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                                }else {
                                    if(x==6) {
                                        cout<<"JAB JAB CROSS"<<endl;
                                         cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                                    }else {
                                        if(x==7) {
                                            cout<<"JAB CROSS LIVER_SHOT"<<endl;
                                             cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                                        }else {
                                            if(x==8) {
                                            cout<<"JAB CROSS LIVER_SHOT LEAD_UPPERCUT"<<endl;
                                             cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                                            }else {
                                                if(x==9) {
                                                    cout<<"JAB CROSS LEAD_HOOK"<<endl;
                                             cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                                                }else {
                                                    if(x==10) {
                                                       cout<<"JAB REAR_UPPERCUT LEAD_HOOK"<<endl;
                                             cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                                                    }else {
                                                        if(x==11) {
                                                            cout<<"JAB REAR_HOOK LEAD_UPPERCUT"<<endl;
                                             cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                                                        }else {
                                                            if(x==12) {
                                                                cout<<"JAB CROSS LEAD_HOOK REAR_UPPERCUT"<<endl;
                                             cout<<endl;
            cout<<"Izvedi kombinaciju "<<y<<" puta."<<endl;
            cout<<endl;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
    }
        cout<< " Serija kombinacija je zavrsena. Vreme je za vezbe! "<<endl;
        z=x+y + 1;
        d=x+n + 1;
        b=z*d;
        cout<<endl;
        cout<<" Uradite "<<z<<" sklekova."<<endl;
        cout<<endl;
        cout<<" Uradite "<<d<<" cucnjeva."<<endl;
        cout<<endl;
        cout<<" Uradite "<<b<<" jumping jacks-a."<<endl;
        goto label_name;
    getch();
    return 0;
}

