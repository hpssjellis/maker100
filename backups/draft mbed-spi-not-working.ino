#include "mbed.h"

using namespace mbed;

//SPISlave mySPISlave(D8, D10, D9, D7);  // mosi, miso, sclk, ssel
SPISlave mySPISlave(PC_3, PC_2, PI_1, PI_0);  // mosi, miso, sclk, ssel

int main() {
    // Configure the SPI slave
    mySPISlave.format(8, 0);  // 8 bits per frame, mode 0
    mySPISlave.frequency(1000000);  // 1 MHz
    
    // Set default reply
    mySPISlave.reply(0x00);  // Default reply
    
    while (true) {
        if (mySPISlave.receive()) {
            // Read data from master
            int data = mySPISlave.read();
            printf("Received: %d\n", data);
            
            // Prepare a reply
            mySPISlave.reply(data + 1);  // Reply with data + 1
        }
    }
}


#include "mbed.h"

using namespace mbed;

// Initialize the SPI master object with MOSI, MISO, SCK, and SSEL pins
SPI mySPIMaster(PC_3, PC_2, PI_1);  // mosi, miso, sclk, ssel  // mosi, miso, sclk
DigitalOut cs(PI_0);  // Chip select pin

int main() {
    // Configure the SPI master
    mySPIMaster.format(8, 0);  // 8 bits per frame, mode 0
    mySPIMaster.frequency(1000000);  // 1 MHz

    while (true) {
        cs = 0;  // Select the slave device by pulling chip select low
        int data = 42;  // Data to send to the slave
        int response = mySPIMaster.write(data);  // Send data and receive response
        cs = 1;  // Deselect the slave device

        printf("Sent: %d, Received: %d\n", data, response);

        delay(1000);
        //ThisThread::sleep_for(1s);  // Wait for 1 second before sending the next data
    }
}
