#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

/*
// WiFi
const char *ssid = "xxxxx"; // WiFi名を入力
const char *password = "xxxxx";  // WiFiのパスワード

// MQTTブローカー
const char *mqtt_broker = "broker.emqx.io";
const char *topic = "emqx/esp32";
const char *mqtt_username = "emqx";
const char *mqtt_password = "public";
const int mqtt_port = 1883;

WiFiClient espClient;
PubSubClient client(espClient);


void callback(char *, byte *, unsigned int );

void setup() {
  // ソフトウェアシリアルボー速度を115200に設定
  Serial.begin(115200);
  // WiFiネットワークへの接続
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("WiFiへ接続中...");
  }
  Serial.println("WiFiネットワークに接続しました");
  // MQTTブローカーへの接続
  client.setServer(mqtt_broker, mqtt_port);
  client.setCallback(callback);
  while (!client.connected()) {
    String client_id = "esp32-client-";
    client_id += String(WiFi.macAddress());
    Serial.printf("クライアント %s がパブリックMQTTブローカーに接続します\n", client_id.c_str());
    if (client.connect(client_id.c_str(), mqtt_username, mqtt_password)) {
      Serial.println("EMQXのパブリックMQTTブローカーに接続しました");
    } else {
      Serial.print("状態で失敗しました ");
      Serial.print(client.state());
      delay(2000);
    }
  }

  // パブリッシュとサブスクライブ
  client.publish(topic, "こんにちは、ESP32です ^^");
  client.subscribe(topic);
}

void callback(char *topic, byte *payload, unsigned int length) {
  Serial.print("トピックにメッセージが届きました:");
  Serial.println(topic);
  Serial.print("メッセージ:");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
  Serial.println("-----------------------");
}

void loop() {
  client.loop();
}
*/
void setup() {
  Serial.begin(115200); // Initialize serial port
}

void loop() {
  Serial.println("Hello, World!");
  delay(1000);
}
