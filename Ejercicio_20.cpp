/*
20. Solicite al contador del almacén La Milagrosa el monto de las ventas mensuales de todo el año 2020. Luego, 
el contador desea obtener los siguientes resultados:
• Valor de la venta mensual promedio.
• Obtenga el porcentaje de los meses del año que cumplieron los siguientes niveles de ventas:
Nivel ventas Descripción
Mínimo Menos del 40% del promedio anual de ventas
Regular Entre el 40% a 75% del promedio de ventas
Excelente Más del 75% del promedio mensual
• Indique los nombres de los meses (enero, febrero, etc.) en los cuales la venta fue Excelente
*/
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

string obtenerNombreMes(int mes) {
    string nombres[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    return nombres[mes - 1];
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    const int numMeses = 12;
    double ventasMes[numMeses];

    cout << "Digite las ventas mensuales del año 2020:" << endl;
    for (int i = 0; i < numMeses; ++i) {
        cout << obtenerNombreMes(i + 1) << ": ";
        cin >> ventasMes[i];
    }

    double promedMes = 0.0;
    for (int i = 0; i < numMeses; ++i) {
        promedMes += ventasMes[i];
    }
    promedMes /= numMeses;

    int mesesMinimo = 0, mesesRegular = 0, mesesExcelente = 0;

    for (int i = 0; i < numMeses; ++i) {
        if (ventasMes[i] < 0.4 * promedMes) {
            mesesMinimo++;
        } else if (ventasMes[i] >= 0.4 * promedMes && ventasMes[i] <= 0.75 * promedMes) {
            mesesRegular++;
        } else if (ventasMes[i] > 0.75 * promedMes) {
            mesesExcelente++;
            cout << obtenerNombreMes(i + 1) << " tuvo ventas excelentes." << endl;
        }
    }

    double porcentajeMinimo = (mesesMinimo * 100) / numMeses;
    double porcentajeRegular = (mesesRegular * 100) / numMeses;
    double porcentajeExcelente = (mesesExcelente * 100) / numMeses;
    
    cout<<"El Promedio de ventas mensuales es : "<<promedMes<<endl;
    cout << "Porcentaje de meses con ventas mínimas es : " << porcentajeMinimo << "%" << endl;
    cout << "El Porcentaje de meses con ventas regulares es : " << porcentajeRegular << "%" << endl;
    cout << "El Porcentaje de meses con ventas excelentes es : " << porcentajeExcelente << "%" << endl;

    return 0;
}
