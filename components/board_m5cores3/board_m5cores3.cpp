#include "esphome/core/log.h"
#include "board_m5cores3.h"

namespace esphome {
namespace board_m5cores3 {

static const char *TAG = "board.m5cores3";

void BoardM5CoreS3::setup() {
    ESP_LOGI(TAG, "setup");
    M5.begin();
    ESP_LOGI(TAG, "Enabling 5V power output on the external ports");
    M5.Power.setExtOutput(true);
    // M5.Display.fillScreen(TFT_BLUE);
    // M5.Mic.end();
    // M5.Speaker.end();
}

float BoardM5CoreS3::get_setup_priority() const { return 1100; }

void BoardM5CoreS3::loop() {

}

void BoardM5CoreS3::dump_config(){
    ESP_LOGCONFIG(TAG, "config");
}


}  // namespace empty_component
}  // namespace esphome