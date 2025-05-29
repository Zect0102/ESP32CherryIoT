const int spkrPin = 3; //3:ConnectorA 4:ConnectorB

#define DO 261.6
#define _DO 277.18
#define RE 293.665
#define _RE 311.127
#define MI 329.63
#define FA 349.228
#define _FA 369.994
#define SO 391.995
#define _SO 415.305
#define RA 440
#define _RA 466.164
#define TI 493.883
#define octDO 523.251

void playmusic(){
  // ミミミレミ レミドドー（赤：高音）
  ledcWriteTone(spkrPin, MI * 2); delay(200);
  ledcWriteTone(spkrPin, MI * 2); delay(200);
  ledcWriteTone(spkrPin, MI * 2); delay(200);
  ledcWriteTone(spkrPin, RE * 2); delay(200);
  ledcWriteTone(spkrPin, MI * 2); delay(200);
  ledcWriteTone(spkrPin, RE * 2); delay(200);
  ledcWriteTone(spkrPin, DO * 2); delay(400);

  // レドドー　ラソー（青：低音）
  ledcWriteTone(spkrPin, RE / 2); delay(400);
  ledcWriteTone(spkrPin, DO);    delay(400);
  ledcWriteTone(spkrPin, DO);    delay(400);
  ledcWriteTone(spkrPin, 0);     delay(200); // 間
  ledcWriteTone(spkrPin, RA / 2);delay(400);
  ledcWriteTone(spkrPin, SO / 2);delay(400);
  ledcWriteTone(spkrPin, SO / 2);delay(400);

  // ソレドド レラミミ（中〜高混在）
  ledcWriteTone(spkrPin, SO);    delay(300);
  ledcWriteTone(spkrPin, RE);    delay(300);
  ledcWriteTone(spkrPin, DO);    delay(300);
  ledcWriteTone(spkrPin, DO);    delay(300);
  ledcWriteTone(spkrPin, RE);    delay(300);
  ledcWriteTone(spkrPin, RA);    delay(300);
  ledcWriteTone(spkrPin, MI);    delay(300);
  ledcWriteTone(spkrPin, MI);    delay(300);

  // ミミミレミ レドドレミ（高音と中音）
  ledcWriteTone(spkrPin, MI * 2); delay(200);
  ledcWriteTone(spkrPin, MI * 2); delay(200);
  ledcWriteTone(spkrPin, MI * 2); delay(200);
  ledcWriteTone(spkrPin, RE * 2); delay(200);
  ledcWriteTone(spkrPin, MI * 2); delay(200);
  ledcWriteTone(spkrPin, RE * 2); delay(200);
  ledcWriteTone(spkrPin, DO);     delay(200);
  ledcWriteTone(spkrPin, DO);     delay(200);
  ledcWriteTone(spkrPin, RE);     delay(300);
  ledcWriteTone(spkrPin, MI);     delay(300);

  // レドー レミーー ドーー（低音〜中音）
  ledcWriteTone(spkrPin, RE / 2); delay(400);
  ledcWriteTone(spkrPin, DO);     delay(400);
  ledcWriteTone(spkrPin, 0);      delay(200); // 間
  ledcWriteTone(spkrPin, RE);     delay(400);
  ledcWriteTone(spkrPin, MI);     delay(600);
  ledcWriteTone(spkrPin, 0);      delay(200);
  ledcWriteTone(spkrPin, DO);     delay(800);

  // 終了
  ledcWriteTone(spkrPin, 0);
}


void setup() {
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8); //Pin setting(Pin num, Max frequency, Resolution)
}

void loop() {
  playmusic();
  delay(3000);
}
