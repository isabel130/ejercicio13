//
// Algortimo que reciba la velocidad y califique a un vehículo como lento
// moderado, rapido o muy rápido.

#include <iostream>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    double velocidad;

    cout << "Velocidad: ";
    cin >> velocidad;

    if (velocidad == 0) {
        cout << "El vehiculo no esta en movimiento";
    }
    else if (velocidad < 30) {
        cout << "lento";
    }
    else if (velocidad <= 60) {
        cout << "moderado";
    }
    else if (velocidad <= 100) {
        cout << "rapido";
    }
    else {
        cout << "muy rapido";
    }


    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.