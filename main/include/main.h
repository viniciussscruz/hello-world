#pragma once

// ---------- Configuração ----------
#define SAMPLE_RATE 8000          // Hz
#define REC_SECONDS 4             // tempo máx. de gravação
#define BUF_SAMPLES (SAMPLE_RATE * REC_SECONDS)

// GPIO gerais
#define BTN_PIN 14
#define LED_PIN 38                 // LED on-board (DevKit-C-1)

// Pinos I2S – microfone
#define MIC_BCLK 15
#define MIC_WS   16
#define MIC_DATA 17

// Pinos I2S – alto-falante
#define SPK_BCLK 18
#define SPK_WS   19
#define SPK_DATA 20
