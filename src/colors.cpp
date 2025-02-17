#include "colors.h"

const Color darkGrey = {34, 40, 49, 255};  // Gris oscuro con un toque azulado
const Color green = {72, 201, 176, 255};   // Verde menta
const Color red = {255, 82, 82, 255};      // Rojo vibrante
const Color orange = {255, 159, 67, 255};  // Naranja brillante
const Color yellow = {255, 221, 89, 255};  // Amarillo cálido
const Color purple = {155, 89, 182, 255};  // Púrpura elegante
const Color cyan = {52, 172, 224, 255};    // Azul celeste
const Color blue = {64, 115, 158, 255};    // Azul profundo
const Color lightBlue = {129, 236, 236, 255}; // Azul pastel
const Color darkBlue = {44, 62, 80, 255};  // Azul noche

std::vector<Color> getCellColors() {

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}
