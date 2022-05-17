#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    float hora;
    cout<<"Saludo dependiendo la hora del día"<<endl;
    cout<<"introduce la hora  en la siguiente forma: 00.00 / 24.00"<<endl;
    cin>>hora;
    if (hora>=00.00&&hora<12.00) {
        cout<<"buenos dias"<<endl;
    } else {
        if (hora>12.00&&hora<19.00) {
            cout<<"buenas tardes"<<endl;
        } else {
            if (hora>19.00&&hora<24.00) {
                cout<<"buenas noches"<<endl;
            } else {
            	if (hora=24.00){
            		cout<<"midnight"<<endl;
				}	else {
            		if (hora=12.00){
            			cout<<"Medio día!"<<endl;
					}
				}
				}
			}
        }
    return 0;
}

