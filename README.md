# Hello World for Goiaba Board

A minimal **Hello World** example for the Goiaba Board. This demo shows basic UART output and FreeRTOS task setup as a foundation for more advanced AIoT applications.

## Key Features

* **UART Hello**: Prints a “Hello, World! I’m Goiaba!” message over UART once per second.
* **FreeRTOS Task**: Illustrates how to spawn and schedule a periodic task.
* **ESP-IDF Workflow**: Provides a Makefile wrapper (or use `idf.py`) for build, flash, monitor commands.

## Prerequisites

* **Goiaba Platform** connected via USB.
* **ESP-IDF v5.x** installed and configured (`IDF_PATH` environment variable).
* **Python 3** (via ESP-IDF virtual environment or system installation).

## Project Structure

```text
.
├── Makefile             ← Convenience wrapper around idf.py
├── .gitignore           ← Files and folders to ignore in Git
├── README.md            ← This file
├── sdkconfig.defaults   ← Default ESP-IDF config options
└── main
    └── hello_world_main.c  ← Example application code
```

## Quick Start

```bash
# 1. (Once) Set up environment
make setup

# 2. Build firmware
make build

# 3. Flash to device
make flash

# 4. Monitor UART (115200 baud)
make monitor
```

Press **Ctrl+]** to exit the serial monitor.

## License

MIT © 2025
