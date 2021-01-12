#include <arduino.h>
#include <include/ultrasonic.h>



Ultrasonic::Ultrasonic(uint8_t tr,uint8_t ec){
	this->_tr_p=tr;
	this->_ec_p=ec;
}



void Ultrasonic::init(){
	pinMode(this->_tr_p,OUTPUT);
	pinMode(this->_ec_p,INPUT);
}



unsigned int Ultrasonic::distance(){
	digitalWrite(this->_tr_p,LOW);
	delayMicroseconds(2);
	digitalWrite(this->_tr_p,HIGH);
	delayMicroseconds(10);
	digitalWrite(this->_tr_p,LOW);
	return pulseIn(this->_ec_p,HIGH)*0.017;
}
