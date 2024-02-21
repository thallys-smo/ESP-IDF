#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_random.h"
#include "esp_system.h"
#include <intr_types.h>
#include "math.h"

#define TAG "DADO"

// Função que simula um Dado aleatório
int dado(){
    int random = esp_random();
    int num_positivo = abs(random);
    int num_dado = (num_positivo % 6) +1;

    return num_dado; 

}

void app_main(void)
{
    
    while(1){
        int i = esp_random();
        vTaskDelay(1000/portTICK_PERIOD_MS);
        // Implementação sem correção do número aleatório
        ESP_LOGI(TAG, "Numero Aleatório: %d", i);
        // Implementação da função dado, utilizando a a função aleatória
        ESP_LOGE(TAG, "Dado Aleatório: %d", dado());
    }
    
}

