#include <iostream>

using namespace std;

int main()
{
	double nota = 0;
	int num_aprobados = 0;
	int num_suspensos = 0;
	int cantidad_notas = 0;
	double suma_notas = 0;
	double nota_media = 0;
	double nota_max = -1;
	double nota_min = 11;

	int eleccion = 'S';

	while (eleccion == 'S')
	{
		nota = 0;
		while (nota >= 0)
		{
			cout << "Introduce las notas (separadas por blancos, finalice con un valor negativo y pulse INTRO):" << endl;
			cin >> nota;
			cantidad_notas++;
			if (nota < 0 && cantidad_notas == 0)
			{
				cout << "No has introducido ninguna nota" << endl;
				break;
			}
			if (nota >= 0 && nota <= 10)
			{
				// Aprobados y suspensos
				if (nota < 5)
				{
					num_suspensos++;
				}
				else
				{
					num_aprobados++;
				}

				// Media
				suma_notas = suma_notas + nota;
				nota_media = suma_notas / cantidad_notas;

				// Mejor
				if (nota > nota_max)
				{
					nota_max = nota;
				}

				// Peor
				if (nota < nota_min)
				{
					nota_min = nota;
				}
			}
		}

		// Escribir
		if (num_aprobados != 0 and num_suspensos == 0)
		{
			cout << "Aprobados=" << num_aprobados << " "
				 << "Nota Media=" << nota_media << " "
				 << "Mejor=" << nota_max << " "
				 << "Peor=" << nota_min;
		}
		else if (num_aprobados == 0 and num_suspensos != 0)
		{
			cout << "Suspensos=" << num_suspensos << " "
				 << "Nota Media=" << nota_media << " "
				 << "Mejor=" << nota_max << " "
				 << "Peor=" << nota_min;
		}
		else if (num_aprobados != 0 and num_suspensos != 0)
		{
			cout << "Aprobados=" << num_aprobados << " "
				 << "Suspensos=" << num_suspensos << " "
				 << "Nota Media=" << nota_media << " "
				 << "Mejor=" << nota_max << " "
				 << "Peor=" << nota_min;
		}
		else
		{
			cout << "Nota Media=" << nota_media << " "
				 << "Mejor=" << nota_max << " "
				 << "Peor=" << nota_min;
		}
		cout << endl;
		cout << "¿Desea repetir el proceso (S/N)?";
		cin >> eleccion;
	}
	return 0;
}