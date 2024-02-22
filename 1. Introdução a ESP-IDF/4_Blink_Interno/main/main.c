#include <stdio.h>
#include "freertos/FreeRTOS.h" 
#include "freertos/task.h"
#include "driver/gpio.h" // Necessário para acessar os Pinos GPIO da ESP
#include "esp_log.h"
#include <inttypes.h> // Possui o PRIu32

#define PIN 2 // Pino em que o LED interno da Esp está conectado, pull-up interno. 
#define TAG "Blink"

void app_main(void)
{
    gpio_set_direction(PIN, GPIO_MODE_OUTPUT);
    uint32_t is_ON = 0; 
    while(true){
        is_ON = !is_ON;        
        gpio_set_level(PIN, is_ON);
        vTaskDelay(1000/portTICK_PERIOD_MS);
        /* Para efetuar o LOG do que está acontecendo, precisei utilizar o 
        PRIu32
        */
        ESP_LOGI(TAG,"Valor do Nível Lógico: %"PRIu32, is_ON);
    }
}
