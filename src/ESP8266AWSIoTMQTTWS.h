#ifndef ESP8266AWSIOTMQTTWS_H_
#define ESP8266AWSIOTMQTTWS_H_

#include "config/AWSConnectionParams.h"
#include "mqtt/MqttClient.h"
#include "aws/AwsIotSigv4.h"
#include "aws/ESP8266DateTimeProvider.h"
#include "aws-sdk-arduino/DeviceIndependentInterfaces.h"
#include "ws/CircularByteBuffer.h"
#include "ws/WebSocketClientAdapter.h"

#ifndef ARDUINO_ESP8266_RELEASE_2_4_2
#error "Install ESP8266 Arduino Core v2.4.2"
#endif

#endif