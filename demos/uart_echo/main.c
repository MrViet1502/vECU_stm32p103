#define USE_STDPERIPH_DRIVER
#include "stm32_p103.h"

int main(void)
{
    init_led();
    init_button();
    init_spi();

    while (1)
    {
        send_spi_byte('H');
        send_spi_byte('e');
        send_spi_byte('l');
        send_spi_byte('l');
        send_spi_byte('o');
        send_spi_byte('\n');
    }
}
