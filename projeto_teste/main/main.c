#include <stdio.h>
#include "esp_log.h"

void app_main(void)
{
    esp_log_level_set("LOG", ESP_LOG_INFO);
    ESP_LOGE("LOG","Isso é um erro");
    ESP_LOGW("LOG","Isso é um aviso");
    ESP_LOGI("LOG","Isso é uma informação");
    ESP_LOGD("LOG","Isso é um debug");
    ESP_LOGV("LOG","Isso é um verbose");
    
    int num = 0;
    ESP_LOGE("TAG 2","Isso é um erro %d", num++);
    ESP_LOGW("TAG 2","Isso é um aviso %d", num++);
    ESP_LOGI("TAG 2","Isso é uma informação %d", num++);
    ESP_LOGD("TAG 2","Isso é um debug  %d", num++);
    ESP_LOGV("TAG 2","Isso é um verbose %d", num++);
    //printf("Hello World!\n");
}
