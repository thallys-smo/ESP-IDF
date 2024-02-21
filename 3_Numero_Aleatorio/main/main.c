#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_random.h"
#include "esp_system.h"
#include <intr_types.h>

#define TAG "DADO"

void app_main(void)
{
    
    while(1){
        int i = esp_random();
        vTaskDelay(1000/portTICK_PERIOD_MS);
        ESP_LOGI(TAG, "numero aleatorio: %d", i);
    }
    
}

