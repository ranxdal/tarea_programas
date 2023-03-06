#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#define PI 3.1416



using namespace std;

float mostrarVolumen(float radio, float altura)
{
	float ab, volumen;
	ab = PI*(pow(radio,2));
	volumen = ((ab*altura)/3);
	cout<<"\nEl volumen del cono es: "<<volumen;
}

double Convertir(double ff, double cc)
{
	ff = ((9/5.0*cc)+32); 
	return ff;
}
int Encontrar(int aa, int bb)
{
	int Mayor;
	
	if (aa>bb)
	{
		Mayor = aa;
	}
	else
	{
		Mayor = bb;
	}
	
	return Mayor;
}

void decToHexa(int nn)
{
    char hexaDeciNum[100];
    int ie = 0;
    while (nn != 0) {
        int temp1 = 0;
       
        temp1 = nn % 16;
        
        if (temp1 < 10) {
            hexaDeciNum[ie] = temp1 + 48;
            ie++;
        }
        else {
            hexaDeciNum[ie] = temp1 + 55;
            ie++;
        }
 
        nn = nn / 16;
    }
 
    for (int jk = ie - 1; jk >= 0; jk--)
        cout << hexaDeciNum[jk];
}


void gotoxyMul(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
  }

int binario(int nume){
	int aux,mul;
	while(nume>1){
		int mod = nume%2;
		aux+=mul*mod;
		mul=mul*10;
		nume=nume/2;
	
	}
	aux+=mul;
	return aux;
}

void gotoxy(int	x1, int y1){
		HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X	= x1;
		dwPos.Y	= y1;
		SetConsoleCursorPosition(hcon, dwPos);
}

char move;
int x=10, y=10;

int main(){
	int menu;
	cout<<"¡Bienvenido!"<<endl;
	cout<<"Por favor ingrese el numero de lo que desea realizar"<<endl;
	cout<<"1. Suma, Resta, Multiplicacion y Division"<<endl;
	cout<<"2. Determinar si un numero es par o impar."<<endl;
	cout<<"3. Convertir kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<"4. Determinar si una palabra o un numero es palindromo"<<endl;
	cout<<"5. Conversion de numeros arabigos a romanos"<<endl;
	cout<<"6. Conversion de numeros enteros a letras"<<endl;
	cout<<"7. Conversion de numeros enteros con decimal a letras"<<endl;
	cout<<"8. Una tabla de multiplicar"<<endl;
	cout<<"9. Todas las tablas de multiplicar del 1 al 10"<<endl;
	cout<<"10. Crear una forma grafica de multiplicacion manual"<<endl;
	cout<<"11. Conversion de numeros decimales a binario"<<endl;
	cout<<"12. Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"13. Crear Figuras Geometricas Basicas"<<endl;
	cout<<"14. Mover un punto en toda la pantalla: "<<endl;
	cout<<"    Utilice 'w,s,a,d' para moverse y 'z' para salir."<<endl;
	cout<<"15. Simulacion de un cajero (automata):"<<endl;
	cout<<"16. Calcular la hipotenusa:"<<endl;
	cout<<"17. Encontrar el mayor entre dos numeros: "<<endl;
	cout<<"18. Convertir grados Celsius a Farenheit"<<endl;
	cout<<"19. Calcular el volumen de un cono: "<<endl;
	cout<<"20. "<<endl;
	cout<<"21. Salir"<<endl;
	cin>>menu;
	
	do{
	
	switch(menu){
		case 1: //Operaciones aritmeticas
			cout<<"Operaciones aritmeticas"<<endl;
			int n1,n2,operacion;
				float suma,resta,mult,div;
				cout<<"Seleccione el numero de operacion que desea realizar: "<<endl;
				cout<<"1. Sumar"<<endl;
				cout<<"2. Restar"<<endl;
				cout<<"3. Multiplicar"<<endl;
				cout<<"4. Dividir"<<endl;
				cout<<"5. Salir"<<endl;
				cin>>operacion;
				cout<<"Ingrese el primer numero: ";
				cin>>n1;
				cout<<"Ingrese el segundo numero: ";
				cin>>n2;
			
				switch(operacion){
				case 1: suma = n1 + n2;
				cout<<"La suma es: "<<suma<<endl;
				break;
				case 2: resta = n1 - n2;
				cout<<"La resta es: "<<resta<<endl;
				break;
				case 3: mult = n1 * n2;
				cout<<"La multiplicacion es: "<<mult<<endl;
				break;
				case 4: div = n1 / n2;
				cout<<"La divicion es: "<<div<<endl;
				break;
				case 5:
				cout<<"Salir"<<endl;
				default: cout<<"Esa opcion no esta"<<endl; 	
				 }
				system("pause");
		break;
		
		case 2: //par o impar
			cout<<"Determinar si un numero es Par o Impar"<<endl;
			int numero;
			cout<<"Ingrese un numero: ";
			cin>>numero;
			if(numero==0){
			cout<<"El numero es cero";
			}
			else if(numero%2==0){
			cout<<"El numero es par";
			}
			else{
			cout<<"El numero es impar";
			}
		break;
		
		case 3://conversiones
			cout<<"Conversiones"<<endl;
			int conversion;
			float cantidad, millas, pulgadas,kilos;
			
			cout<<"Seleccione el numero de operacion que desea realizar: "<<endl;
			cout<<"1. Kilometros a millas"<<endl;
			cout<<"2. Metros a pulgadas"<<endl;
			cout<<"3. Libras a kilos"<<endl;
			cin>>conversion;
			
			switch(conversion){
			case 1: //Km a millas
				cout<<"Kilometros a Millas"<<endl;
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>cantidad;
				millas = cantidad * 0.621371;
				cout<<"De Kilometos a millas es: "<<millas<<endl;
			break;
			
			case 2: //metros a pulgadas
				cout<<"Metros a Pulgadas"<<endl;
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>cantidad;
				pulgadas = cantidad * 39.3701;
				cout<<"De metros a pulgadas es: "<<pulgadas<<endl;
			break;
			
			case 3: 
				cout<<"Libras a Kilos"<<endl;
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>cantidad;
				kilos = cantidad * 0.453592;
				cout<<"De libras a kilos es: "<<kilos<<endl;
			break;
			
			default: cout<<"Esa opcion no esta"; 
			break;
			} 
		system("pause");	
		break; 
		
		case 4: //determinar si una palabra o numero es palindromo
			cout<<"Determinar si una palabra o numero es palindromo: "<<endl;
			string palabra;
			string palafinal;
			
			int iz;
			
			cout<<"Ingrese la palabra o numero a verficiar"<<endl;
			cin>>palabra;
			
			for(iz = palabra.size() - 1; iz >= 0; iz--){
				cout<<palabra[iz]<<endl;
				palafinal += palabra[iz];
			}
			cout<<palafinal;
		
			
			if (palabra == palafinal){
				cout<<"la palabra es un palindromo"<<endl;
			}else{
				cout<<"La palabra no es un palindromo"<<endl;
			}
			system("pause");
			
		break;
		
		case 5: //conversion de numeros arabigos  a romanos
			cout<<"Conversion de numero arabigos a romanos"<<endl;
			int numeroa,unidades,decenas,centenas,millar;
			
			cout<<"Ingrese el numero: "<<endl;
			cin>>numeroa;
			
			unidades=numeroa%10; numeroa /= 10;
			decenas=numeroa%10; numeroa /= 10;
			centenas=numeroa%10; numeroa /= 10;
			millar=numeroa%10; numeroa /= 10;
			
			switch(millar){
				case 1: cout<<"M"; 
				break;
				case 2: cout<<"MM";
				break;
				case 3: cout<<"MMM";
				break;
			}
			switch(centenas){
				case 1: cout<<"C";
				break;
				case 2: cout<<"CC";
				break;
				case 3: cout<<"CCC";
				break;
				case 4: cout<<"CD";
				break;
				case 5: cout<<"D";
				break;
				case 6: cout<<"DC";
				break;
				case 7: cout<<"DCC";
				break;
				case 8: cout<<"DCCC";
				break;
				case 9: cout<<"CM";
				break;
			}
			switch(decenas){
				case 1: cout<<"X";
				break;
				case 2: cout<<"XX";
				break;
				case 3: cout<<"XXX";
				break;
				case 4: cout<<"XL";
				break;
				case 5: cout<<"L";
				break;
				case 6: cout<<"LX";
				break;
				case 7: cout<<"LXX";
				break;
				case 8: cout<<"LXXX";
				break;
				case 9: cout<<"XC";
				break;
			}
			switch(unidades){
				case 1: cout<<"I";
				break;
				case 2: cout<<"II";
				break;
				case 3: cout<<"III";
				break;
				case 4: cout<<"IV";
				break;
				case 5: cout<<"V";
				break;
				case 6: cout<<"VI";
				break;
				case 7: cout<<"VII";
				break;
				case 8: cout<<"VIII";
				break;
				case 9: cout<<"IX";
				break;
			}
			
		system("pause");	
		break;
		
		case 6: //conversion de numeros enteros a letras
			cout<<"Conversion de numeros enteros a letras"<<endl;
			int numc,uni,dec,cen,unimil;
			cout<<"Ingresa un numero en el rango de 0 a 9999: ";
			cin>>numc;
			
			if (numc>0 && numc<=9999){
				uni = numc%10; numc = numc / 10;
				dec = numc%10; numc = numc / 10;
				cen = numc%10; numc = numc / 10;
				unimil = numc%10; numc = numc / 10;
				
				switch (unimil){
					case 0: cout<<" "; break;
					case 1: cout<<"mil "; break;
					case 2: cout<<"dos mil "; break;
					case 3: cout<<"tres mil "; break;
					case 4: cout<<"cuatro mil "; break;
					case 5: cout<<"cinco mil "; break;
					case 6: cout<<"seis mmil "; break;
					case 7: cout<<"siete mil "; break;
					case 8: cout<<"ocho mil "; break;
					case 9: cout<<"nueve mil "; break;
					}
				
				switch (cen){
					case 0: cout<<" "; break;
					case 1: if(dec==0 && uni==0){
						cout<<"cien ";
						}else{
						cout<<"ciento ";
						} break;
					case 2: cout<<"doscientos "; break;
					case 3: cout<<"trescienteos "; break;
					case 4: cout<<"cuatroscientos "; break;
					case 5: cout<<"quinientos "; break;
					case 6: cout<<"seiscientos "; break;
					case 7: cout<<"setecientos "; break;
					case 8: cout<<"ochocientos "; break;
					case 9: cout<<"novecientos "; break;
				}
			
				switch (dec){
					case 1: switch (uni){
						case 0: cout<<"diez "; break;
						case 1: cout<<"once "; break;
						case 2: cout<<"doce "; break;
						case 3: cout<<"trece "; break;
						case 4: cout<<"catorce "; break;
						case 5: cout<<"quince "; break;
						case 6: cout<<"dieciseis "; break;
						case 7: cout<<"diecisiete "; break;
						case 8: cout<<"dieciocho "; break;
						case 9: cout<<"diecinueve "; break;
					} break;
				
					case 2: switch (uni){
						case 0: cout<<"veinte "; break;
						case 1: cout<<"veintiuno "; break;
						case 2: cout<<"veintidos "; break;
						case 3: cout<<"veintitres "; break;
						case 4: cout<<"veinticuatro "; break;
						case 5: cout<<"veinticinco "; break;
						case 6: cout<<"veintiseis "; break;
						case 7: cout<<"veintisiete "; break;
						case 8: cout<<"veintiocho "; break;
						case 9: cout<<"veintinueve "; break;
					} break;
				
					case 3: if(uni==0){
							cout<<"treinta";	
						}else{
							cout<<"treinta y ";
						} break;
				
					case 4: if(uni==0){
							cout<<"cuarenta";	
						}else{
							cout<<"cuarenta y ";
						} break;
				
					case 5: if(uni==0){
							cout<<"cincuenta";	
						}else{
							cout<<"cincuenta y ";
						} break;
				
					case 6: if(uni==0){
							cout<<"sesenta";	
						}else{
							cout<<"sesenta y ";
						} break;
				
					case 7: if(uni==0){
							cout<<"setenta";	
						}else{
							cout<<"setenta y ";
						} break;
				
					case 8: if(uni==0){
							cout<<"ochenta";	
						}else{
							cout<<"ochenta y ";
						} break;
				
					case 9: if(uni==0){
							cout<<"noventa";	
						}else{
							cout<<"noventa y ";
						} break;
			 	}
			 	
			 	switch (uni){
			 		case 0: if(unimil==0 && cen ==0 && dec==0){
			 				cout<<"cero";
					 		}else{
					 			cout<<"";
							} break;
					
					case 1: if(unimil==0 && cen==0 && dec==0){
							cout<<"uno";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"uno";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"uno";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"uno";
							}else{
								cout<<"";
							}break;
			 		
			 		case 2: if(unimil==0 && cen==0 && dec==0){
							cout<<"dos";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"dos";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"dos";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"dos";
							}else{
								cout<<"";
							}break;
					
					case 3: if(unimil==0 && cen==0 && dec==0){
							cout<<"tres";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"tres";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"tres";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"tres";
							}else{
								cout<<"";
							}break;
							
					case 4: if(unimil==0 && cen==0 && dec==0){
							cout<<"cuatro";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"cuatro";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"cuatro";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"u";
							}else{
								cout<<"";
							}break;
							
					case 5: if(unimil==0 && cen==0 && dec==0){
							cout<<"cinco";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"cinco";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"cinco";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"cinco";
							}else{
								cout<<"";
							}break;
							
					case 6: if(unimil==0 && cen==0 && dec==0){
							cout<<"seis";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"seis";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"seis";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"seis";
							}else{
								cout<<"";
							}break;
							
					case 7: if(unimil==0 && cen==0 && dec==0){
							cout<<"siete";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"siete";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"siete";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"siete";
							}else{
								cout<<"";
							}break;
					
					case 8: if(unimil==0 && cen==0 && dec==0){
							cout<<"ocho";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"ocho";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"ocho";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"ocho";
							}else{
								cout<<"";
							}break;
					
					case 9: if(unimil==0 && cen==0 && dec==0){
							cout<<"nueve";
							}else if(unimil==0 && cen==0 && dec>=3){
								cout<<"nueve";
							}else if(unimil==0 && cen>=1 && dec>=3 || dec==0){
								cout<<"nueve";
							}else if(unimil>=1 && cen>=0 && dec>=3 || dec==0){
								cout<<"nueve";
							}else{
								cout<<"";
							}break;
				 }
			 	
	
			}else {
				cout<<"Error!!! Debes ingresar un numero en el rango de 0 a 9999";
			}
			system("pause");
		break;
		
		case 7: //conversion de numeros enteros con decimal a letras
			cout<<"Conversion de numeros enteros con decimal a letras"<<endl;
		break;
		
		case 8:
			cout<<"Tabla de multiplicar"<<endl;
			int numt;
			
			do{
				cout<<"Digite un numero entero: ";
				cin>>numt;
				
			}while((numt<1) || (numt>10));
			
			for(int i=1;i<=10;i++){
				cout<<numt<<" * "<<i<<" = "<<numt*i<<endl;
			}
			system("pause");
		break;
		
		case 9: 
			cout<<"Todas las tablas de multiplicar del 1 al 10"<<endl;
			for(int i=1; i<=10; i++){
				cout<<"--------------------------"<<endl;
				cout<<"La tabla del: "<<i<<endl;
				for(int m = 0; m<=10; m++){
					cout<< i << " * "<< m <<" = "<<i*m<<endl;
				}
			}
			
		break;
		
		case 10: //crear una forma grafica de multiplicacion manual
			cout<<"Crear una forma grafica de multiplicacion manual"<<endl;
				int a,b,mul;
				cout<<"ingrese el primer numero: "<<endl; gotoxyMul(45,7);cin>>a;
	
				cout<<"ingresa el segundo numero: "<<endl;gotoxyMul(45,8); cin>>b; 
	       			gotoxyMul(44,8); cout<<"X"<<endl;
					gotoxyMul(45,9); mul=a*b;
	        		gotoxyMul(45,9); cout<< mul<<endl;

				system("pause");
				return 0;
			
		break;
		
		case 11: //conversion de numeros decimales a binario
			cout<<"conversion de numeros decimales a binario"<<endl;
				int decimal;
		
			cout<<"Ingrese el valor decimal a convertir: "<<endl;
			cin>>decimal;
			cout<<binario(decimal)<<endl;
			
		break;	
		
		case 12: //conversion de numeros decimales a hexadecimales
			cout<<"conversion de numeros decimales a hexadecimales"<<endl;
			int nn ;
	
			cout<<"Ingrese un numero decimal para convertir a hexadecimal: "<<endl;
			cin>>nn; 
    		decToHexa(nn);	
			
		break;
		
		case 13: //Crear figuras geometricas basicas
			cout<<"Crear figuras geometricas basicas"<<endl;
			int k,j, filas,figura;
			
			cout<<"Que figura desea realizar: "<<endl;
			cout<<"1. Triangulo"<<endl;
			cout<<"2. Cuadrado"<<endl;
			cin>>figura;
			
			switch(figura){
				case 1:
				cout<<"Ingrese el numero de filas de la figura: ";
				cin>>filas;
			
				for(k=0; k<filas; k++){
				
					for(j=0; j<filas-k; j++){
						cout<<" ";
					}
					for(j=0; j<k*2+1; j++){
						cout<<"*";
					}
					cout<<"*"<<endl;
				}
				cout<<endl;
				break;
				case 2:
				cout<<"Ingrese el numero de filas de la figura: ";
				cin>>filas;
				
				for(k=0; k<=filas; k++){
					for(j=0;j<=filas;j++){
						cout<<"* ";
					}
					cout<<endl;
				}
				break;	
					
			}	
		break;
		
		case 14: //Mover un punto por toda la pantalla
			cout<<"Mover un punto por toda la pantalla"<<endl;
			cout<<"*";
			
			while(move!='z'){
				system("cls");
				gotoxy(x,y); cout<<"*";
				move=getch();
				switch(move){
					case 'w': y--; break;
					case 's': y++; break;
					case 'a': x--; break;
					case 'd': x++; break;
					
				}
				
			}
			
		break;
		
		case 15: //simulacion de un cajero
			cout<<"simulacion de un cajero"<<endl;
			int saldoi,opcion;
			float ingreso,retiro,saldo;
			cout<<"¡Bienvenido a su Cajero Virtual"<<endl;
			cout<<"Ingrese su saldo inicial: "<<endl;
			cin>>saldoi;
			cout<<"Su saldo inicial en su cuenta es de: Q"<<saldoi<<endl;
			cout<<"1. Ingresar dinero en su cuenta"<<endl;
			cout<<"2. Retirar dinero de su cuenta"<<endl;
			cout<<"3. Salir"<<endl;
			cin>>opcion;
			
			switch(opcion){
				case 1:
					cout<<"Ingrese la cantidad de dinero a ingresar: ";
					cin>>ingreso;
					saldo = saldoi + ingreso;
					cout<<"Dinero en cuenta: Q"<<saldo;
				break;
				case 2: 
					cout<<"Ingrese la cantidad de dinero que va a retirar: ";
					cin>>retiro;
					if(retiro>saldoi){
						cout<<"No somos ricos para retirar esa cantidad :(";
					}else{
						saldo = saldoi - retiro;
						cout<<"Dinero en cuenta: Q"<<saldo;
					}
				break;
				case 3: 	
				break;
			}	
		break;
		
		case 16: //calcular la hipotenusa
			cout<<"Calcular la hipotenusa"<<endl;
			float c1,c2,hipo;
			cout<<"Digite cateto 1: "<<endl;
			cin>>c1;
			cout<<"Digite cateto 2: "<<endl;
			cin>>c2;
			
			hipo=sqrt((c1*c2)+(c1*c2));
			cout<<"La hipotenusa es: "<<hipo;
			system("pause")
		break;
		
		case 17: //encontrar el mayor de dos numeros
			int nn1, nn2;
	
			cout<<"\nIngrese el primer numero: ";
			cin>>nn1;
			cout<<"\nIngrese el segundo numero: ";
			cin>>nn2;
	
	
			cout<<"\nEl mayor de los dos numeros es: "<<Encontrar(nn1,nn2);
				
		break;
		
		case 18: 
			double ff, cc;
			cout<<"\nIngresa los grados Celsius: ";
			cin>>cc;
	
			cc = Convertir(ff, cc);
			cout<<"\nLos grados de Celsius a Fahrenheit es: "<<cc;
			
			system("pause");	
			return 0;
		
		break;
		
		case 19: 
		
			float r,h;
	
			cout<<"\nIngrese el radio: "<<endl;
			cin>>r;
	
			cout<<"\nIngrese la altura: "<<endl;
			cin>>h;
	
			mostrarVolumen(r,h);

			system("pause");
			return 0;
		
		break;
		
		case 20:
			float notas[20];   
    		int in = 0;
    		float suma1 = 0, media;
    
   		 	for (in=0; in<=4; in++){
        	cout << "Alumno " << (i+1) << " Nota final: ";
        	cin >> notas[in];
    		}
    		
  		  	for (in=0; in<=4; in++){
  		  		suma1 = suma1 + notas[in];
    			media = suma1 / 10;
				}
  			cout<<endl<<endl<<"Nota media del curso: "<<media<<endl;

		    cout << "Listado de notas superiores a la media" << endl;
    		cout << "--------------------------------------" << endl;
    		for (i=0; i<=4; i++){
      	  		if (notas[i] > media){
            	cout << "Alumno numero " << (i+1);
            	cout << " Nota final: " << notas[i] << endl;
        		}
    		}
   			 cout << endl;
   			 system("pause");
		break;
		
		default: 
			cout<<"No esta es opcion"<<endl;
		
	  }	
  	}while(menu!=17);
	
}
