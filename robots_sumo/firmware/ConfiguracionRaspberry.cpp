#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main(void) {

    gpio_init(5);
    gpio_init(6);
    gpio_init(9);
    gpio_init(10);

    //1.Inicia pines

    gpio_set_dir(5, GPIO_OUT);
    gpio_set_dir(6, GPIO_OUT)
    gpio_set_dir(9, GPIO_OUT);
    gpio_set_dir(10, GPIO_OUT);

    //Configurar salidas o entradas

    gpio_put  (5, 1)
    gpio_put (6, 0)
    gpio_put (9, 1)
    gpio_pit (10, 0)

    //Configurar avance antihorario

    gpio_put (5, 0)
    gpio_put (6, 1)
    gpio_put (9, 0)
    gpio_put (10, 1)

    //Configurar avance horario

    gpio_put (5, 0)
    gpio_put (6, 0)
    gpio_put (9, 0)
    gpio_put (10, 0)
    
    //Configurar parada de ambas ruedas

    gpio_put (5,0)
    gpio_put (6, 0)
    gpio_put (9,0)
    gpio_put (10,1)

    //Configurar giro hacia adelante del motor A

    gpio_put (5,0)
    gpio_put (6, 1)
    gpio_put (9,0)
    gpio_put (10,0)

    //Configurar giro hacia adelante del motor B
    
    {
    return; 0 

    }
}
 