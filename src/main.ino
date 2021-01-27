#include <include/lcd.h>
#include <include/ultrasonic.h>



LCD lcd(12,11,5,4,3,2);
Ultrasonic ds(10,9);



void setup(){
	ds.init();
	lcd.size(16,2);
	lcd.init();
	lcd.write("Distance:");
}



void loop(){
	static uint8_t ml=0;
	unsigned int d=ds.distance();
	lcd.move(0,1);
	lcd.write(d);
	lcd.write(" cm");
	if (String(d).length()<ml){
		for (uint8_t i=String(d).length();i<ml;i++){
			lcd.write(" ");
		}
	}
	else if (String(d).length()>ml){
		ml=String(d).length();
	}
	delay(100);
}
