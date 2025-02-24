#include <stdio.h>
#include <stdlib.h>



#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

#include "esp_log.h"

#include "driver/gpio.h"


void app_main(void)
{
    ESP_LOGI("main", "Hello world!");
    while (1)
    {
        printf("hello world\r\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS); // 1 second delay
    }
}
