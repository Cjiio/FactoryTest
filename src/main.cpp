#include <math.h>
#include <Arduino.h>
#include <WiFi.h>
#include <Wire.h>
#include <driver/ledc.h>
#include <driver/rmt.h>
#include <ir_tools.h>

#include "M5GFX.h"
#include "M5Unified.h"
#include "I2C_MPU6886.h"
#include "MadgwickAHRS.h"

#include "EmojiSrc/EmojiLib.h"

I2C_MPU6886 imu(I2C_MPU6886_DEFAULT_ADDRESS, Wire1);

void setup() {
    M5.begin();
    USBSerial.begin(115200);
    M5.Display.begin();
    Wire1.begin(38, 39);
    imu.begin();
    for(auto item : emoji_xf1_action){
        M5.Display.drawPng(item, ~0u, 0, 0);
        delay(10);
    }
    delay(100);
}

void loop() {
    M5.update();
    for(auto item : emoji_xf2_action){
        M5.Display.drawPng(item, ~0u, 0, 0);
        delay(10);
    }
    // 计算加速度计的合加速度
    float ax, ay, az, gx, gy, gz;
    imu.getAccel(&ax, &ay, &az);
    imu.getGyro(&gx, &gy, &gz);
    float accel_mag = sqrt(pow(ax, 2) + pow(ay, 2) + pow(gz, 2));
    USBSerial.println(accel_mag);
    // 如果加速度计的合加速度大于1.5g，则认为发生了摇晃
    if (accel_mag > 400) {
        delay(500);
        // for(auto item : emoji_xf3_action){
        //     M5.Display.drawPng(item, ~0u, 0, 0);
        //     delay(10);
        // }
        // for(auto item : emoji_fn1_action){
        //     M5.Display.drawPng(item, ~0u, 0, 0);
        //     delay(10);
        // }
        // for(auto item : emoji_fn2_action){
        //     M5.Display.drawPng(item, ~0u, 0, 0);
        //     delay(10);
        // }
        // for(auto item : emoji_fn3_action){
        //     M5.Display.drawPng(item, ~0u, 0, 0);
        //     delay(10);
        // }
        // for(auto item : emoji_xf1_action){
        //     M5.Display.drawPng(item, ~0u, 0, 0);
        //     delay(10);
        // }
        for(auto item : emoji_bx1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_bx2_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_bx3_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_fn1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_fn2_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_fn3_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_jk1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_jk2_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_jk3_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_jt1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_jt2_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_ng1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_ng2_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_ng3_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_xf1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_xf2_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_xf3_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_ysk1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_ysk2_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_ysk3_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_zsk1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_zsk2_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_zsk3_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        for(auto item : emoji_xf1_action){
            M5.Display.drawPng(item, ~0u, 0, 0);
            delay(10);
        }
        delay(100);
    }
}