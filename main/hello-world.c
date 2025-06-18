#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void greeting_task(void* pvParameters) {
    TickType_t delay_ms = (TickType_t)(uintptr_t)pvParameters;
    while (1) {
        printf("Hello, World! I'm Goiaba!\n");
        vTaskDelay(pdMS_TO_TICKS(delay_ms));
    }
}

void app_main(void) {
    const TickType_t interval = 1000;
    BaseType_t res = xTaskCreate(greeting_task,
        "hello_greeting_tasktask",
        2048,
        (void*)(uintptr_t)interval,
        5,
        NULL);
    if (res != pdPASS) {
        printf("Failed to create task\n");
    } else {
        printf("Task created successfully\n");
    }
}
