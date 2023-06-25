#include <cstdint>
#include "olc6502.h"

class Bus
{
public:
    Bus();
    ~Bus();

public: // Dispositivos do bus (barramento)
    olc6502 cpu;

    // FAKE RAM
    std::array<uint8_t, 64 * 1024> ram;

public: // Bus Leitura/Escrita
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool bReadOnly = false);
};
