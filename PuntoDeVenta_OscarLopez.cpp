//Punto de venta//
#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

void escribir();

int main(){
	escribir();
	
	
	system("pause");
		return 0;
}

void escribir(){
	ofstream archivo;
	int codigo, cantidad, opc, montototal = 0, opc2;	///Declaramos las variables a usar
		char metodo[10];
			float price, total;
	
	archivo.open("ticket.txt",ios::out);	//se abre el archivo
	
	archivo<<"*****Abarrotes Don Oscar*****\n";
	
	do{
	
		cout<<"==========Abarrotes Don Oscar==========\n\n";  //Se imprime una pantalla para ver los productos a vender
		cout<<"[1] Tomate\t\Precio 2.00\n";
		cout<<"[2] Calabaza\t\Precio 5.00\n";
		cout<<"[3] Chayote\t\Precio 3.00\n";
		cout<<"[4] Zanahoria\t\Precio 4.00\n"; 
		cout<<"[5] Coliflor\t\Precio 4.00\n";
		cout<<"[6] Brocoli\t\Precio 3.00\n";
		cout<<"[7] Papa\t\Precio 6.00\n"; 
		cout<<"[8] Repollo\t\Precio 3.00\n";
		cout<<"[9] Cebolla\t\Precio 5.00\n";

	cout<<"\nDigite el codigo del producto: ";  //Se pide el codigo del producto para cobrar
		cin>>codigo;
	cout<<"\nDigite la cantidad: ";
		cin>>cantidad;
	
	switch(codigo){
		case 1: price = 2.00; break;
		case 2: price = 5.00; break;
		case 3: price = 3.00; break;
		case 4: price = 4.00; break;
		case 5: price = 4.00; break;
		case 6: price = 3.00; break;
		case 7: price = 6.00; break;
		case 8: price = 3.00; break;
		case 9: price = 5.00; break;
		
	}
	total = price * cantidad;
	
	cout<<"\nEl total de su compra es: "<<total<<endl; //Se muetra el total y se le ofrece añadir o no otro producto
	
		cout<<"Desea añadir otro producto(si1)(no2)"; cin>>opc;
	
	
	
	if(archivo.fail()){ //Se crea el ticket para mostrar al usuario
		cout<<"No se pudo abrir el archivo";
			exit(1);
	}
	
	archivo<<"\nEstos son los codigos de los productos de compra: \n"<<codigo;

	archivo<<"\nEste es el precio del producto: \n"<<price;
	
	archivo<<"\nCantidad del producto que de compra: \n"<<cantidad;
	
	archivo<<"\nTotal: "<<total;
	
	
	montototal = montototal + total;
	
	
	}while(opc == 1);
	
		cout<<"\nMetodo de pago: "<<endl; //Se añaden los dos métodos de pago para finalizar la compra
		cout<<"[1] Tarjeta"<<endl;
		cout<<"[2] Efectivo"<<endl;
	
	cout<<"Digite su metodo de pago: "; cin>>metodo;
	
	archivo<<"\n\n\nMetodo de pago: "<<metodo<<endl;
	archivo<<"\n\n\nEl monto total de todos los producto fue de: "<<montototal<<endl;
	
	archivo.close(); //Cierra el archivo para crear un nuevo punto de venta
}
