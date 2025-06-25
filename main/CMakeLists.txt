idf_component_register(
    SRCS
        "src/main.c"
        "src/mic.c"
        "src/audio.c"
    INCLUDE_DIRS "include"
    REQUIRES
        driver          # I2S, GPIO
        freertos        # vTaskDelay, xTaskCreatePinnedToCore
        esp_timer       
)