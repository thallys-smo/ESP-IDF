#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void tarefa_1(void *params){
    while(true){
        printf("Lendo a Temperaura da %s\n", (char *) params);
        vTaskDelay(1000 /portTICK_PERIOD_MS);        
    }
}

void tarefa_2(void *params){
    while(true){
        printf("Lendo a Humidade da %s\n", (char *) params);
        vTaskDelay(2000 /portTICK_PERIOD_MS);        
    }
}

void app_main(void)
{
    xTaskCreate(&tarefa_1, "Leitura de Temperatura",2048,"Tarefa 1",2,NULL);
    xTaskCreate(&tarefa_2, "Leitura de Humidade",2048,"Tarefa 2",2,NULL);
}
